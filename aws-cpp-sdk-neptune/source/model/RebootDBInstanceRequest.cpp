/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/RebootDBInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

RebootDBInstanceRequest::RebootDBInstanceRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_forceFailover(false),
    m_forceFailoverHasBeenSet(false)
{
}

Aws::String RebootDBInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RebootDBInstance&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_forceFailoverHasBeenSet)
  {
    ss << "ForceFailover=" << std::boolalpha << m_forceFailover << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RebootDBInstanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
