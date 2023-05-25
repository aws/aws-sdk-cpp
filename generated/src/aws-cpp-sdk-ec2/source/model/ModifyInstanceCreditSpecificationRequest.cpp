/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceCreditSpecificationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyInstanceCreditSpecificationRequest::ModifyInstanceCreditSpecificationRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_instanceCreditSpecificationsHasBeenSet(false)
{
}

Aws::String ModifyInstanceCreditSpecificationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceCreditSpecification&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_instanceCreditSpecificationsHasBeenSet)
  {
    unsigned instanceCreditSpecificationsCount = 1;
    for(auto& item : m_instanceCreditSpecifications)
    {
      item.OutputToStream(ss, "InstanceCreditSpecification.", instanceCreditSpecificationsCount, "");
      instanceCreditSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceCreditSpecificationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
