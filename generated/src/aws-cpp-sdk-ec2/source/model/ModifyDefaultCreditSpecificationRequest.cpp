/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyDefaultCreditSpecificationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyDefaultCreditSpecificationRequest::ModifyDefaultCreditSpecificationRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceFamily(UnlimitedSupportedInstanceFamily::NOT_SET),
    m_instanceFamilyHasBeenSet(false),
    m_cpuCreditsHasBeenSet(false)
{
}

Aws::String ModifyDefaultCreditSpecificationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDefaultCreditSpecification&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceFamilyHasBeenSet)
  {
    ss << "InstanceFamily=" << UnlimitedSupportedInstanceFamilyMapper::GetNameForUnlimitedSupportedInstanceFamily(m_instanceFamily) << "&";
  }

  if(m_cpuCreditsHasBeenSet)
  {
    ss << "CpuCredits=" << StringUtils::URLEncode(m_cpuCredits.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyDefaultCreditSpecificationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
