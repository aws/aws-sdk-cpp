/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/autoscaling/model/DescribeAccountLimitsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountLimitsResult::DescribeAccountLimitsResult() : 
    m_maxNumberOfAutoScalingGroups(0),
    m_maxNumberOfLaunchConfigurations(0)
{
}

DescribeAccountLimitsResult::DescribeAccountLimitsResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_maxNumberOfAutoScalingGroups(0),
    m_maxNumberOfLaunchConfigurations(0)
{
  *this = result;
}

DescribeAccountLimitsResult& DescribeAccountLimitsResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("DescribeAccountLimitsResult");

  if(!resultNode.IsNull())
  {
    XmlNode maxNumberOfAutoScalingGroupsNode = resultNode.FirstChild("MaxNumberOfAutoScalingGroups");
    m_maxNumberOfAutoScalingGroups = StringUtils::ConvertToInt32(StringUtils::Trim(maxNumberOfAutoScalingGroupsNode.GetText().c_str()).c_str());
    XmlNode maxNumberOfLaunchConfigurationsNode = resultNode.FirstChild("MaxNumberOfLaunchConfigurations");
    m_maxNumberOfLaunchConfigurations = StringUtils::ConvertToInt32(StringUtils::Trim(maxNumberOfLaunchConfigurationsNode.GetText().c_str()).c_str());
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
