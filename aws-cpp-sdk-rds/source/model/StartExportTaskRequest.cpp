/*
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

#include <aws/rds/model/StartExportTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

StartExportTaskRequest::StartExportTaskRequest() : 
    m_exportTaskIdentifierHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_s3PrefixHasBeenSet(false),
    m_exportOnlyHasBeenSet(false)
{
}

Aws::String StartExportTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartExportTask&";
  if(m_exportTaskIdentifierHasBeenSet)
  {
    ss << "ExportTaskIdentifier=" << StringUtils::URLEncode(m_exportTaskIdentifier.c_str()) << "&";
  }

  if(m_sourceArnHasBeenSet)
  {
    ss << "SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_s3BucketNameHasBeenSet)
  {
    ss << "S3BucketName=" << StringUtils::URLEncode(m_s3BucketName.c_str()) << "&";
  }

  if(m_iamRoleArnHasBeenSet)
  {
    ss << "IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_s3PrefixHasBeenSet)
  {
    ss << "S3Prefix=" << StringUtils::URLEncode(m_s3Prefix.c_str()) << "&";
  }

  if(m_exportOnlyHasBeenSet)
  {
    unsigned exportOnlyCount = 1;
    for(auto& item : m_exportOnly)
    {
      ss << "ExportOnly.member." << exportOnlyCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      exportOnlyCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  StartExportTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
