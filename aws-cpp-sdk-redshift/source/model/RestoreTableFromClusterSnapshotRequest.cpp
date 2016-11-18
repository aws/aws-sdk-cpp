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
#include <aws/redshift/model/RestoreTableFromClusterSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

RestoreTableFromClusterSnapshotRequest::RestoreTableFromClusterSnapshotRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_snapshotIdentifierHasBeenSet(false),
    m_sourceDatabaseNameHasBeenSet(false),
    m_sourceSchemaNameHasBeenSet(false),
    m_sourceTableNameHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetSchemaNameHasBeenSet(false),
    m_newTableNameHasBeenSet(false)
{
}

Aws::String RestoreTableFromClusterSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RestoreTableFromClusterSnapshot&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_snapshotIdentifierHasBeenSet)
  {
    ss << "SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_sourceDatabaseNameHasBeenSet)
  {
    ss << "SourceDatabaseName=" << StringUtils::URLEncode(m_sourceDatabaseName.c_str()) << "&";
  }

  if(m_sourceSchemaNameHasBeenSet)
  {
    ss << "SourceSchemaName=" << StringUtils::URLEncode(m_sourceSchemaName.c_str()) << "&";
  }

  if(m_sourceTableNameHasBeenSet)
  {
    ss << "SourceTableName=" << StringUtils::URLEncode(m_sourceTableName.c_str()) << "&";
  }

  if(m_targetDatabaseNameHasBeenSet)
  {
    ss << "TargetDatabaseName=" << StringUtils::URLEncode(m_targetDatabaseName.c_str()) << "&";
  }

  if(m_targetSchemaNameHasBeenSet)
  {
    ss << "TargetSchemaName=" << StringUtils::URLEncode(m_targetSchemaName.c_str()) << "&";
  }

  if(m_newTableNameHasBeenSet)
  {
    ss << "NewTableName=" << StringUtils::URLEncode(m_newTableName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

