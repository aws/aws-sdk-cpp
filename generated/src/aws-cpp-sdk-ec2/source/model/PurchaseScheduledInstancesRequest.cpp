/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PurchaseScheduledInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

PurchaseScheduledInstancesRequest::PurchaseScheduledInstancesRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_purchaseRequestsHasBeenSet(false)
{
}

Aws::String PurchaseScheduledInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PurchaseScheduledInstances&";
  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_purchaseRequestsHasBeenSet)
  {
    unsigned purchaseRequestsCount = 1;
    for(auto& item : m_purchaseRequests)
    {
      item.OutputToStream(ss, "PurchaseRequest.", purchaseRequestsCount, "");
      purchaseRequestsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  PurchaseScheduledInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
