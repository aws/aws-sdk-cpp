/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
