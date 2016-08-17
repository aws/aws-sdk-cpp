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
#include <aws/ec2/model/ImportImageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ImportImageRequest::ImportImageRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_diskContainersHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_hypervisorHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_clientDataHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

Aws::String ImportImageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportImage&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_diskContainersHasBeenSet)
  {
    unsigned diskContainersCount = 1;
    for(auto& item : m_diskContainers)
    {
      item.OutputToStream(ss, "DiskContainer.", diskContainersCount, "");
      diskContainersCount++;
    }
  }

  if(m_licenseTypeHasBeenSet)
  {
    ss << "LicenseType=" << StringUtils::URLEncode(m_licenseType.c_str()) << "&";
  }

  if(m_hypervisorHasBeenSet)
  {
    ss << "Hypervisor=" << StringUtils::URLEncode(m_hypervisor.c_str()) << "&";
  }

  if(m_architectureHasBeenSet)
  {
    ss << "Architecture=" << StringUtils::URLEncode(m_architecture.c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
    ss << "Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }

  if(m_clientDataHasBeenSet)
  {
    m_clientData.OutputToStream(ss, "ClientData");
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_roleNameHasBeenSet)
  {
    ss << "RoleName=" << StringUtils::URLEncode(m_roleName.c_str()) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

