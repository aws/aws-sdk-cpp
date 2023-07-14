/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyCurrentDBClusterCapacityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyCurrentDBClusterCapacityRequest::ModifyCurrentDBClusterCapacityRequest() : 
    m_dBClusterIdentifierHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_secondsBeforeTimeout(0),
    m_secondsBeforeTimeoutHasBeenSet(false),
    m_timeoutActionHasBeenSet(false)
{
}

Aws::String ModifyCurrentDBClusterCapacityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCurrentDBClusterCapacity&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_capacityHasBeenSet)
  {
    ss << "Capacity=" << m_capacity << "&";
  }

  if(m_secondsBeforeTimeoutHasBeenSet)
  {
    ss << "SecondsBeforeTimeout=" << m_secondsBeforeTimeout << "&";
  }

  if(m_timeoutActionHasBeenSet)
  {
    ss << "TimeoutAction=" << StringUtils::URLEncode(m_timeoutAction.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyCurrentDBClusterCapacityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
