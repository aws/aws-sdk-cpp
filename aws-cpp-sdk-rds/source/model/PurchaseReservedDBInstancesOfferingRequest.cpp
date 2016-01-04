/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/model/PurchaseReservedDBInstancesOfferingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

PurchaseReservedDBInstancesOfferingRequest::PurchaseReservedDBInstancesOfferingRequest() : 
    m_reservedDBInstancesOfferingIdHasBeenSet(false),
    m_reservedDBInstanceIdHasBeenSet(false),
    m_dBInstanceCount(0),
    m_dBInstanceCountHasBeenSet(false)
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
  ss << "Version=2013-01-10";
  return ss.str();
}

