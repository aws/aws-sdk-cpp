/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyIpamPoolRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyIpamPoolRequest::ModifyIpamPoolRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoImport(false),
    m_autoImportHasBeenSet(false),
    m_allocationMinNetmaskLength(0),
    m_allocationMinNetmaskLengthHasBeenSet(false),
    m_allocationMaxNetmaskLength(0),
    m_allocationMaxNetmaskLengthHasBeenSet(false),
    m_allocationDefaultNetmaskLength(0),
    m_allocationDefaultNetmaskLengthHasBeenSet(false),
    m_clearAllocationDefaultNetmaskLength(false),
    m_clearAllocationDefaultNetmaskLengthHasBeenSet(false),
    m_addAllocationResourceTagsHasBeenSet(false),
    m_removeAllocationResourceTagsHasBeenSet(false)
{
}

Aws::String ModifyIpamPoolRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyIpamPool&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamPoolIdHasBeenSet)
  {
    ss << "IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_autoImportHasBeenSet)
  {
    ss << "AutoImport=" << std::boolalpha << m_autoImport << "&";
  }

  if(m_allocationMinNetmaskLengthHasBeenSet)
  {
    ss << "AllocationMinNetmaskLength=" << m_allocationMinNetmaskLength << "&";
  }

  if(m_allocationMaxNetmaskLengthHasBeenSet)
  {
    ss << "AllocationMaxNetmaskLength=" << m_allocationMaxNetmaskLength << "&";
  }

  if(m_allocationDefaultNetmaskLengthHasBeenSet)
  {
    ss << "AllocationDefaultNetmaskLength=" << m_allocationDefaultNetmaskLength << "&";
  }

  if(m_clearAllocationDefaultNetmaskLengthHasBeenSet)
  {
    ss << "ClearAllocationDefaultNetmaskLength=" << std::boolalpha << m_clearAllocationDefaultNetmaskLength << "&";
  }

  if(m_addAllocationResourceTagsHasBeenSet)
  {
    unsigned addAllocationResourceTagsCount = 1;
    for(auto& item : m_addAllocationResourceTags)
    {
      item.OutputToStream(ss, "AddAllocationResourceTag.", addAllocationResourceTagsCount, "");
      addAllocationResourceTagsCount++;
    }
  }

  if(m_removeAllocationResourceTagsHasBeenSet)
  {
    unsigned removeAllocationResourceTagsCount = 1;
    for(auto& item : m_removeAllocationResourceTags)
    {
      item.OutputToStream(ss, "RemoveAllocationResourceTag.", removeAllocationResourceTagsCount, "");
      removeAllocationResourceTagsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyIpamPoolRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
