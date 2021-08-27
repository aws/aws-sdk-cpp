/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyGlobalClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyGlobalClusterRequest::ModifyGlobalClusterRequest() : 
    m_globalClusterIdentifierHasBeenSet(false),
    m_newGlobalClusterIdentifierHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false)
{
}

Aws::String ModifyGlobalClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyGlobalCluster&";
  if(m_globalClusterIdentifierHasBeenSet)
  {
    ss << "GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
  }

  if(m_newGlobalClusterIdentifierHasBeenSet)
  {
    ss << "NewGlobalClusterIdentifier=" << StringUtils::URLEncode(m_newGlobalClusterIdentifier.c_str()) << "&";
  }

  if(m_deletionProtectionHasBeenSet)
  {
    ss << "DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyGlobalClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
