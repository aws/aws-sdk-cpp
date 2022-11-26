﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyAddressAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyAddressAttributeRequest::ModifyAddressAttributeRequest() : 
    m_allocationIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyAddressAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyAddressAttribute&";
  if(m_allocationIdHasBeenSet)
  {
    ss << "AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyAddressAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
