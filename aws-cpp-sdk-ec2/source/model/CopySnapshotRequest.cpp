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
#include <aws/ec2/model/CopySnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CopySnapshotRequest::CopySnapshotRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceSnapshotIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_presignedUrlHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

Aws::String CopySnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopySnapshot&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_sourceRegionHasBeenSet)
  {
    ss << "SourceRegion=" << StringUtils::URLEncode(m_sourceRegion.c_str()) << "&";
  }

  if(m_sourceSnapshotIdHasBeenSet)
  {
    ss << "SourceSnapshotId=" << StringUtils::URLEncode(m_sourceSnapshotId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_destinationRegionHasBeenSet)
  {
    ss << "DestinationRegion=" << StringUtils::URLEncode(m_destinationRegion.c_str()) << "&";
  }

  if(m_presignedUrlHasBeenSet)
  {
    ss << "PresignedUrl=" << StringUtils::URLEncode(m_presignedUrl.c_str()) << "&";
  }

  if(m_encryptedHasBeenSet)
  {
    ss << "Encrypted=" << m_encrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

