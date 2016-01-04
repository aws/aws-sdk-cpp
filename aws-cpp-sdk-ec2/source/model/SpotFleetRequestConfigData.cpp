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
#include <aws/ec2/model/SpotFleetRequestConfigData.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

SpotFleetRequestConfigData::SpotFleetRequestConfigData() : 
    m_clientTokenHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_targetCapacity(0),
    m_targetCapacityHasBeenSet(false),
    m_validFrom(0.0),
    m_validFromHasBeenSet(false),
    m_validUntil(0.0),
    m_validUntilHasBeenSet(false),
    m_terminateInstancesWithExpiration(false),
    m_terminateInstancesWithExpirationHasBeenSet(false),
    m_iamFleetRoleHasBeenSet(false),
    m_launchSpecificationsHasBeenSet(false)
{
}

SpotFleetRequestConfigData::SpotFleetRequestConfigData(const XmlNode& xmlNode) : 
    m_clientTokenHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_targetCapacity(0),
    m_targetCapacityHasBeenSet(false),
    m_validFrom(0.0),
    m_validFromHasBeenSet(false),
    m_validUntil(0.0),
    m_validUntilHasBeenSet(false),
    m_terminateInstancesWithExpiration(false),
    m_terminateInstancesWithExpirationHasBeenSet(false),
    m_iamFleetRoleHasBeenSet(false),
    m_launchSpecificationsHasBeenSet(false)
{
  *this = xmlNode;
}

SpotFleetRequestConfigData& SpotFleetRequestConfigData::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = StringUtils::Trim(clientTokenNode.GetText().c_str());
      m_clientTokenHasBeenSet = true;
    }
    XmlNode spotPriceNode = resultNode.FirstChild("spotPrice");
    if(!spotPriceNode.IsNull())
    {
      m_spotPrice = StringUtils::Trim(spotPriceNode.GetText().c_str());
      m_spotPriceHasBeenSet = true;
    }
    XmlNode targetCapacityNode = resultNode.FirstChild("targetCapacity");
    if(!targetCapacityNode.IsNull())
    {
      m_targetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(targetCapacityNode.GetText().c_str()).c_str());
      m_targetCapacityHasBeenSet = true;
    }
    XmlNode validFromNode = resultNode.FirstChild("validFrom");
    if(!validFromNode.IsNull())
    {
      m_validFrom = StringUtils::ConvertToDouble(StringUtils::Trim(validFromNode.GetText().c_str()).c_str());
      m_validFromHasBeenSet = true;
    }
    XmlNode validUntilNode = resultNode.FirstChild("validUntil");
    if(!validUntilNode.IsNull())
    {
      m_validUntil = StringUtils::ConvertToDouble(StringUtils::Trim(validUntilNode.GetText().c_str()).c_str());
      m_validUntilHasBeenSet = true;
    }
    XmlNode terminateInstancesWithExpirationNode = resultNode.FirstChild("terminateInstancesWithExpiration");
    if(!terminateInstancesWithExpirationNode.IsNull())
    {
      m_terminateInstancesWithExpiration = StringUtils::ConvertToBool(StringUtils::Trim(terminateInstancesWithExpirationNode.GetText().c_str()).c_str());
      m_terminateInstancesWithExpirationHasBeenSet = true;
    }
    XmlNode iamFleetRoleNode = resultNode.FirstChild("iamFleetRole");
    if(!iamFleetRoleNode.IsNull())
    {
      m_iamFleetRole = StringUtils::Trim(iamFleetRoleNode.GetText().c_str());
      m_iamFleetRoleHasBeenSet = true;
    }
    XmlNode launchSpecificationsNode = resultNode.FirstChild("LaunchSpecifications");
    if(!launchSpecificationsNode.IsNull())
    {
      XmlNode launchSpecificationsMember = launchSpecificationsNode.FirstChild("item");
      while(!launchSpecificationsMember.IsNull())
      {
        m_launchSpecifications.push_back(launchSpecificationsMember);
        launchSpecificationsMember = launchSpecificationsMember.NextNode("item");
      }

      m_launchSpecificationsHasBeenSet = true;
    }
  }

  return *this;
}

void SpotFleetRequestConfigData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
  if(m_spotPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }
  if(m_targetCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetCapacity=" << m_targetCapacity << "&";
  }
  if(m_validFromHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidFrom=" << m_validFrom << "&";
  }
  if(m_validUntilHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidUntil=" << m_validUntil << "&";
  }
  if(m_terminateInstancesWithExpirationHasBeenSet)
  {
      oStream << location << index << locationValue << ".TerminateInstancesWithExpiration=" << m_terminateInstancesWithExpiration << "&";
  }
  if(m_iamFleetRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".IamFleetRole=" << StringUtils::URLEncode(m_iamFleetRole.c_str()) << "&";
  }
  if(m_launchSpecificationsHasBeenSet)
  {
      for(auto& item : m_launchSpecifications)
      {
        Aws::StringStream launchSpecificationsSs;
        launchSpecificationsSs << location << index << locationValue << ".item";
        item.OutputToStream(oStream, launchSpecificationsSs.str().c_str());
      }
  }
}

void SpotFleetRequestConfigData::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
  if(m_spotPriceHasBeenSet)
  {
      oStream << location << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }
  if(m_targetCapacityHasBeenSet)
  {
      oStream << location << ".TargetCapacity=" << m_targetCapacity << "&";
  }
  if(m_validFromHasBeenSet)
  {
      oStream << location << ".ValidFrom=" << m_validFrom << "&";
  }
  if(m_validUntilHasBeenSet)
  {
      oStream << location << ".ValidUntil=" << m_validUntil << "&";
  }
  if(m_terminateInstancesWithExpirationHasBeenSet)
  {
      oStream << location << ".TerminateInstancesWithExpiration=" << m_terminateInstancesWithExpiration << "&";
  }
  if(m_iamFleetRoleHasBeenSet)
  {
      oStream << location << ".IamFleetRole=" << StringUtils::URLEncode(m_iamFleetRole.c_str()) << "&";
  }
  if(m_launchSpecificationsHasBeenSet)
  {
      for(auto& item : m_launchSpecifications)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".item";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
