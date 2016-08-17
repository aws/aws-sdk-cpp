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
#include <aws/redshift/model/AuthorizeSnapshotAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

AuthorizeSnapshotAccessRequest::AuthorizeSnapshotAccessRequest() : 
    m_snapshotIdentifierHasBeenSet(false),
    m_snapshotClusterIdentifierHasBeenSet(false),
    m_accountWithRestoreAccessHasBeenSet(false)
{
}

Aws::String AuthorizeSnapshotAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AuthorizeSnapshotAccess&";
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

