﻿/*
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

#include <aws/neptune/model/CopyDBClusterSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

CopyDBClusterSnapshotRequest::CopyDBClusterSnapshotRequest() : 
    m_sourceDBClusterSnapshotIdentifierHasBeenSet(false),
    m_targetDBClusterSnapshotIdentifierHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_preSignedUrlHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CopyDBClusterSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyDBClusterSnapshot&";
  if(m_sourceDBClusterSnapshotIdentifierHasBeenSet)
  {
    ss << "SourceDBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_sourceDBClusterSnapshotIdentifier.c_str()) << "&";
  }

  if(m_targetDBClusterSnapshotIdentifierHasBeenSet)
  {
    ss << "TargetDBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_targetDBClusterSnapshotIdentifier.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_preSignedUrlHasBeenSet)
  {
    ss << "PreSignedUrl=" << StringUtils::URLEncode(m_preSignedUrl.c_str()) << "&";
  }

  if(m_copyTagsHasBeenSet)
  {
    ss << "CopyTags=" << std::boolalpha << m_copyTags << "&";
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

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CopyDBClusterSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
