/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListHookResultsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListHookResultsResult::ListHookResultsResult() : 
    m_targetType(ListHookResultsTargetType::NOT_SET)
{
}

ListHookResultsResult::ListHookResultsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : ListHookResultsResult()
{
  *this = result;
}

ListHookResultsResult& ListHookResultsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListHookResultsResult"))
  {
    resultNode = rootNode.FirstChild("ListHookResultsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode targetTypeNode = resultNode.FirstChild("TargetType");
    if(!targetTypeNode.IsNull())
    {
      m_targetType = ListHookResultsTargetTypeMapper::GetListHookResultsTargetTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode targetIdNode = resultNode.FirstChild("TargetId");
    if(!targetIdNode.IsNull())
    {
      m_targetId = Aws::Utils::Xml::DecodeEscapedXmlText(targetIdNode.GetText());
    }
    XmlNode hookResultsNode = resultNode.FirstChild("HookResults");
    if(!hookResultsNode.IsNull())
    {
      XmlNode hookResultsMember = hookResultsNode.FirstChild("member");
      while(!hookResultsMember.IsNull())
      {
        m_hookResults.push_back(hookResultsMember);
        hookResultsMember = hookResultsMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::ListHookResultsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
