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

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class S3CannedAccessControlList
  {
    NOT_SET,
    private_,
    public_read,
    public_read_write,
    aws_exec_read,
    authenticated_read,
    bucket_owner_read,
    bucket_owner_full_control
  };

namespace S3CannedAccessControlListMapper
{
AWS_S3CONTROL_API S3CannedAccessControlList GetS3CannedAccessControlListForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3CannedAccessControlList(S3CannedAccessControlList value);
} // namespace S3CannedAccessControlListMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
