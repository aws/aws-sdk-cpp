/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
