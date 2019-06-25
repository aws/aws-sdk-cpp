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

#include <aws/ec2/model/ModifyTrafficMirrorFilterNetworkServicesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyTrafficMirrorFilterNetworkServicesRequest::ModifyTrafficMirrorFilterNetworkServicesRequest() : 
    m_trafficMirrorFilterIdHasBeenSet(false),
    m_addNetworkServicesHasBeenSet(false),
    m_removeNetworkServicesHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyTrafficMirrorFilterNetworkServicesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyTrafficMirrorFilterNetworkServices&";
  if(m_trafficMirrorFilterIdHasBeenSet)
  {
    ss << "TrafficMirrorFilterId=" << StringUtils::URLEncode(m_trafficMirrorFilterId.c_str()) << "&";
  }

  if(m_addNetworkServicesHasBeenSet)
  {
    unsigned addNetworkServicesCount = 1;
    for(auto& item : m_addNetworkServices)
    {
      ss << "AddNetworkService." << addNetworkServicesCount << "="
          << StringUtils::URLEncode(TrafficMirrorNetworkServiceMapper::GetNameForTrafficMirrorNetworkService(item).c_str()) << "&";
      addNetworkServicesCount++;
    }
  }

  if(m_removeNetworkServicesHasBeenSet)
  {
    unsigned removeNetworkServicesCount = 1;
    for(auto& item : m_removeNetworkServices)
    {
      ss << "RemoveNetworkService." << removeNetworkServicesCount << "="
          << StringUtils::URLEncode(TrafficMirrorNetworkServiceMapper::GetNameForTrafficMirrorNetworkService(item).c_str()) << "&";
      removeNetworkServicesCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyTrafficMirrorFilterNetworkServicesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
