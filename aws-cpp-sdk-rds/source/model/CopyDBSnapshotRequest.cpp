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
#include <aws/rds/model/CopyDBSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CopyDBSnapshotRequest::CopyDBSnapshotRequest() : 
    m_sourceDBSnapshotIdentifierHasBeenSet(false),
    m_targetDBSnapshotIdentifierHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false)
{
}

Aws::String CopyDBSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyDBSnapshot&";
  if(m_sourceDBSnapshotIdentifierHasBeenSet)
  {
    ss << "SourceDBSnapshotIdentifier=" << StringUtils::URLEncode(m_sourceDBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_targetDBSnapshotIdentifierHasBeenSet)
  {
    ss << "TargetDBSnapshotIdentifier=" << StringUtils::URLEncode(m_targetDBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_copyTagsHasBeenSet)
  {
    ss << "CopyTags=" << m_copyTags << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}

