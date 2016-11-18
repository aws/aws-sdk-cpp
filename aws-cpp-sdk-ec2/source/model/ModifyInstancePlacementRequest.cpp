/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/ModifyInstancePlacementRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyInstancePlacementRequest::ModifyInstancePlacementRequest() : 
    m_instanceIdHasBeenSet(false),
    m_tenancy(HostTenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_affinity(Affinity::NOT_SET),
    m_affinityHasBeenSet(false),
    m_hostIdHasBeenSet(false)
{
}

Aws::String ModifyInstancePlacementRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstancePlacement&";
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_tenancyHasBeenSet)
  {
    ss << "Tenancy=" << HostTenancyMapper::GetNameForHostTenancy(m_tenancy) << "&";
  }

  if(m_affinityHasBeenSet)
  {
    ss << "Affinity=" << AffinityMapper::GetNameForAffinity(m_affinity) << "&";
  }

  if(m_hostIdHasBeenSet)
  {
    ss << "HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

