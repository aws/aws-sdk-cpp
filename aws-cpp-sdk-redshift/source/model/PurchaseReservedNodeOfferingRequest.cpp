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
#include <aws/redshift/model/PurchaseReservedNodeOfferingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

PurchaseReservedNodeOfferingRequest::PurchaseReservedNodeOfferingRequest() : 
    m_reservedNodeOfferingIdHasBeenSet(false),
    m_nodeCount(0),
    m_nodeCountHasBeenSet(false)
{
}

Aws::String PurchaseReservedNodeOfferingRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PurchaseReservedNodeOffering&";
  if(m_reservedNodeOfferingIdHasBeenSet)
  {
    ss << "ReservedNodeOfferingId=" << StringUtils::URLEncode(m_reservedNodeOfferingId.c_str()) << "&";
  }

  if(m_nodeCountHasBeenSet)
  {
    ss << "NodeCount=" << m_nodeCount << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

