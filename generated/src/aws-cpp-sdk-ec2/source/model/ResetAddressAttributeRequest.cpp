/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ResetAddressAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ResetAddressAttributeRequest::ResetAddressAttributeRequest() : 
    m_allocationIdHasBeenSet(false),
    m_attribute(AddressAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ResetAddressAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ResetAddressAttribute&";
  if(m_allocationIdHasBeenSet)
  {
    ss << "AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << AddressAttributeNameMapper::GetNameForAddressAttributeName(m_attribute) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ResetAddressAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
