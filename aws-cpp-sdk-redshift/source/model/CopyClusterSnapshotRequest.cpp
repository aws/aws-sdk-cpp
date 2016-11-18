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
#include <aws/redshift/model/CopyClusterSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

CopyClusterSnapshotRequest::CopyClusterSnapshotRequest() : 
    m_sourceSnapshotIdentifierHasBeenSet(false),
    m_sourceSnapshotClusterIdentifierHasBeenSet(false),
    m_targetSnapshotIdentifierHasBeenSet(false)
{
}

Aws::String CopyClusterSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyClusterSnapshot&";
  if(m_sourceSnapshotIdentifierHasBeenSet)
  {
    ss << "SourceSnapshotIdentifier=" << StringUtils::URLEncode(m_sourceSnapshotIdentifier.c_str()) << "&";
  }

  if(m_sourceSnapshotClusterIdentifierHasBeenSet)
  {
    ss << "SourceSnapshotClusterIdentifier=" << StringUtils::URLEncode(m_sourceSnapshotClusterIdentifier.c_str()) << "&";
  }

  if(m_targetSnapshotIdentifierHasBeenSet)
  {
    ss << "TargetSnapshotIdentifier=" << StringUtils::URLEncode(m_targetSnapshotIdentifier.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

