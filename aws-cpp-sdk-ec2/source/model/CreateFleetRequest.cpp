/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ec2/model/CreateFleetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateFleetRequest::CreateFleetRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_spotOptionsHasBeenSet(false),
    m_excessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy::NOT_SET),
    m_excessCapacityTerminationPolicyHasBeenSet(false),
    m_launchTemplateConfigsHasBeenSet(false),
    m_targetCapacitySpecificationHasBeenSet(false),
    m_terminateInstancesWithExpiration(false),
    m_terminateInstancesWithExpirationHasBeenSet(false),
    m_type(FleetType::NOT_SET),
    m_typeHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_replaceUnhealthyInstances(false),
    m_replaceUnhealthyInstancesHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String CreateFleetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateFleet&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_spotOptionsHasBeenSet)
  {
    m_spotOptions.OutputToStream(ss, "SpotOptions");
  }

  if(m_excessCapacityTerminationPolicyHasBeenSet)
  {
    ss << "ExcessCapacityTerminationPolicy=" << FleetExcessCapacityTerminationPolicyMapper::GetNameForFleetExcessCapacityTerminationPolicy(m_excessCapacityTerminationPolicy) << "&";
  }

  if(m_launchTemplateConfigsHasBeenSet)
  {
    unsigned launchTemplateConfigsCount = 1;
    for(auto& item : m_launchTemplateConfigs)
    {
      item.OutputToStream(ss, "LaunchTemplateConfigs.", launchTemplateConfigsCount, "");
      launchTemplateConfigsCount++;
    }
  }

  if(m_targetCapacitySpecificationHasBeenSet)
  {
    m_targetCapacitySpecification.OutputToStream(ss, "TargetCapacitySpecification");
  }

  if(m_terminateInstancesWithExpirationHasBeenSet)
  {
    ss << "TerminateInstancesWithExpiration=" << std::boolalpha << m_terminateInstancesWithExpiration << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << FleetTypeMapper::GetNameForFleetType(m_type) << "&";
  }

  if(m_validFromHasBeenSet)
  {
    ss << "ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_validUntilHasBeenSet)
  {
    ss << "ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_replaceUnhealthyInstancesHasBeenSet)
  {
    ss << "ReplaceUnhealthyInstances=" << std::boolalpha << m_replaceUnhealthyInstances << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateFleetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
