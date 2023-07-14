/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeTypeRegistrationResult.h>
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

DescribeTypeRegistrationResult::DescribeTypeRegistrationResult() : 
    m_progressStatus(RegistrationStatus::NOT_SET)
{
}

DescribeTypeRegistrationResult::DescribeTypeRegistrationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_progressStatus(RegistrationStatus::NOT_SET)
{
  *this = result;
}

DescribeTypeRegistrationResult& DescribeTypeRegistrationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTypeRegistrationResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTypeRegistrationResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode progressStatusNode = resultNode.FirstChild("ProgressStatus");
    if(!progressStatusNode.IsNull())
    {
      m_progressStatus = RegistrationStatusMapper::GetRegistrationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(progressStatusNode.GetText()).c_str()).c_str());
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode typeArnNode = resultNode.FirstChild("TypeArn");
    if(!typeArnNode.IsNull())
    {
      m_typeArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeArnNode.GetText());
    }
    XmlNode typeVersionArnNode = resultNode.FirstChild("TypeVersionArn");
    if(!typeVersionArnNode.IsNull())
    {
      m_typeVersionArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeVersionArnNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeTypeRegistrationResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
