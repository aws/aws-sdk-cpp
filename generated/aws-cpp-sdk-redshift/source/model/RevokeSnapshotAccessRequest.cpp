/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RevokeSnapshotAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

RevokeSnapshotAccessRequest::RevokeSnapshotAccessRequest() : 
    m_snapshotIdentifierHasBeenSet(false),
    m_snapshotClusterIdentifierHasBeenSet(false),
    m_accountWithRestoreAccessHasBeenSet(false)
{
}

Aws::String RevokeSnapshotAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RevokeSnapshotAccess&";
  if(m_snapshotIdentifierHasBeenSet)
  {
    ss << "SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_snapshotClusterIdentifierHasBeenSet)
  {
    ss << "SnapshotClusterIdentifier=" << StringUtils::URLEncode(m_snapshotClusterIdentifier.c_str()) << "&";
  }

  if(m_accountWithRestoreAccessHasBeenSet)
  {
    ss << "AccountWithRestoreAccess=" << StringUtils::URLEncode(m_accountWithRestoreAccess.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  RevokeSnapshotAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
