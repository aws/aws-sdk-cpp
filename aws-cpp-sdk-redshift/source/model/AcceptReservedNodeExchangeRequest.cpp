/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AcceptReservedNodeExchangeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

AcceptReservedNodeExchangeRequest::AcceptReservedNodeExchangeRequest() : 
    m_reservedNodeIdHasBeenSet(false),
    m_targetReservedNodeOfferingIdHasBeenSet(false)
{
}

Aws::String AcceptReservedNodeExchangeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AcceptReservedNodeExchange&";
  if(m_reservedNodeIdHasBeenSet)
  {
    ss << "ReservedNodeId=" << StringUtils::URLEncode(m_reservedNodeId.c_str()) << "&";
  }

  if(m_targetReservedNodeOfferingIdHasBeenSet)
  {
    ss << "TargetReservedNodeOfferingId=" << StringUtils::URLEncode(m_targetReservedNodeOfferingId.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  AcceptReservedNodeExchangeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
