/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeResourceScanResult.h>
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

DescribeResourceScanResult::DescribeResourceScanResult() : 
    m_status(ResourceScanStatus::NOT_SET),
    m_percentageCompleted(0.0),
    m_resourcesScanned(0),
    m_resourcesRead(0)
{
}

DescribeResourceScanResult::DescribeResourceScanResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(ResourceScanStatus::NOT_SET),
    m_percentageCompleted(0.0),
    m_resourcesScanned(0),
    m_resourcesRead(0)
{
  *this = result;
}

DescribeResourceScanResult& DescribeResourceScanResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeResourceScanResult"))
  {
    resultNode = rootNode.FirstChild("DescribeResourceScanResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode resourceScanIdNode = resultNode.FirstChild("ResourceScanId");
    if(!resourceScanIdNode.IsNull())
    {
      m_resourceScanId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceScanIdNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ResourceScanStatusMapper::GetResourceScanStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode percentageCompletedNode = resultNode.FirstChild("PercentageCompleted");
    if(!percentageCompletedNode.IsNull())
    {
      m_percentageCompleted = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentageCompletedNode.GetText()).c_str()).c_str());
    }
    XmlNode resourceTypesNode = resultNode.FirstChild("ResourceTypes");
    if(!resourceTypesNode.IsNull())
    {
      XmlNode resourceTypesMember = resourceTypesNode.FirstChild("member");
      while(!resourceTypesMember.IsNull())
      {
        m_resourceTypes.push_back(resourceTypesMember.GetText());
        resourceTypesMember = resourceTypesMember.NextNode("member");
      }

    }
    XmlNode resourcesScannedNode = resultNode.FirstChild("ResourcesScanned");
    if(!resourcesScannedNode.IsNull())
    {
      m_resourcesScanned = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourcesScannedNode.GetText()).c_str()).c_str());
    }
    XmlNode resourcesReadNode = resultNode.FirstChild("ResourcesRead");
    if(!resourcesReadNode.IsNull())
    {
      m_resourcesRead = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourcesReadNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeResourceScanResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
