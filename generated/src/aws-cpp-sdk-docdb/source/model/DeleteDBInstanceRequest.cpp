/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DeleteDBInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

DeleteDBInstanceRequest::DeleteDBInstanceRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false)
{
}

Aws::String DeleteDBInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBInstance&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBInstanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
