/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateGlobalClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateGlobalClusterRequest::CreateGlobalClusterRequest() : 
    m_globalClusterIdentifierHasBeenSet(false),
    m_sourceDBClusterIdentifierHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false)
{
}

Aws::String CreateGlobalClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateGlobalCluster&";
  if(m_globalClusterIdentifierHasBeenSet)
  {
    ss << "GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
  }

  if(m_sourceDBClusterIdentifierHasBeenSet)
  {
    ss << "SourceDBClusterIdentifier=" << StringUtils::URLEncode(m_sourceDBClusterIdentifier.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_deletionProtectionHasBeenSet)
  {
    ss << "DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if(m_databaseNameHasBeenSet)
  {
    ss << "DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }

  if(m_storageEncryptedHasBeenSet)
  {
    ss << "StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateGlobalClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
