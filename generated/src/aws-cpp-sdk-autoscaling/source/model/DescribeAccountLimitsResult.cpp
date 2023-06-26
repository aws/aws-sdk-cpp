/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeAccountLimitsResult.h>
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

DescribeAccountLimitsResult::DescribeAccountLimitsResult() : 
    m_maxNumberOfAutoScalingGroups(0),
    m_maxNumberOfLaunchConfigurations(0),
    m_numberOfAutoScalingGroups(0),
    m_numberOfLaunchConfigurations(0)
{
}

DescribeAccountLimitsResult::DescribeAccountLimitsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_maxNumberOfAutoScalingGroups(0),
    m_maxNumberOfLaunchConfigurations(0),
    m_numberOfAutoScalingGroups(0),
    m_numberOfLaunchConfigurations(0)
{
  *this = result;
}

DescribeAccountLimitsResult& DescribeAccountLimitsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAccountLimitsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeAccountLimitsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode maxNumberOfAutoScalingGroupsNode = resultNode.FirstChild("MaxNumberOfAutoScalingGroups");
    if(!maxNumberOfAutoScalingGroupsNode.IsNull())
    {
      m_maxNumberOfAutoScalingGroups = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxNumberOfAutoScalingGroupsNode.GetText()).c_str()).c_str());
    }
    XmlNode maxNumberOfLaunchConfigurationsNode = resultNode.FirstChild("MaxNumberOfLaunchConfigurations");
    if(!maxNumberOfLaunchConfigurationsNode.IsNull())
    {
      m_maxNumberOfLaunchConfigurations = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxNumberOfLaunchConfigurationsNode.GetText()).c_str()).c_str());
    }
    XmlNode numberOfAutoScalingGroupsNode = resultNode.FirstChild("NumberOfAutoScalingGroups");
    if(!numberOfAutoScalingGroupsNode.IsNull())
    {
      m_numberOfAutoScalingGroups = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfAutoScalingGroupsNode.GetText()).c_str()).c_str());
    }
    XmlNode numberOfLaunchConfigurationsNode = resultNode.FirstChild("NumberOfLaunchConfigurations");
    if(!numberOfLaunchConfigurationsNode.IsNull())
    {
      m_numberOfLaunchConfigurations = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfLaunchConfigurationsNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeAccountLimitsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
