/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeAdjustmentTypesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeAdjustmentTypesResult::DescribeAdjustmentTypesResult()
{
}

DescribeAdjustmentTypesResult::DescribeAdjustmentTypesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeAdjustmentTypesResult& DescribeAdjustmentTypesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAdjustmentTypesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeAdjustmentTypesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode adjustmentTypesNode = resultNode.FirstChild("AdjustmentTypes");
    if(!adjustmentTypesNode.IsNull())
    {
      XmlNode adjustmentTypesMember = adjustmentTypesNode.FirstChild("member");
      while(!adjustmentTypesMember.IsNull())
      {
        m_adjustmentTypes.push_back(adjustmentTypesMember);
        adjustmentTypesMember = adjustmentTypesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeAdjustmentTypesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
