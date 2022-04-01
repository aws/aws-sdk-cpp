/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/PurchaseReservedDBInstancesOfferingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

PurchaseReservedDBInstancesOfferingRequest::PurchaseReservedDBInstancesOfferingRequest() : 
    m_reservedDBInstancesOfferingIdHasBeenSet(false),
    m_reservedDBInstanceIdHasBeenSet(false),
    m_dBInstanceCount(0),
    m_dBInstanceCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PurchaseReservedDBInstancesOfferingRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PurchaseReservedDBInstancesOffering&";
  if(m_reservedDBInstancesOfferingIdHasBeenSet)
  {
    ss << "ReservedDBInstancesOfferingId=" << StringUtils::URLEncode(m_reservedDBInstancesOfferingId.c_str()) << "&";
  }

  if(m_reservedDBInstanceIdHasBeenSet)
  {
    ss << "ReservedDBInstanceId=" << StringUtils::URLEncode(m_reservedDBInstanceId.c_str()) << "&";
  }

  if(m_dBInstanceCountHasBeenSet)
  {
    ss << "DBInstanceCount=" << m_dBInstanceCount << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  PurchaseReservedDBInstancesOfferingRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
