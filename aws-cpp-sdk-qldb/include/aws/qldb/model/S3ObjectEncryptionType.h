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
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QLDB
{
namespace Model
{
  enum class S3ObjectEncryptionType
  {
    NOT_SET,
    SSE_KMS,
    SSE_S3,
    NO_ENCRYPTION
  };

namespace S3ObjectEncryptionTypeMapper
{
AWS_QLDB_API S3ObjectEncryptionType GetS3ObjectEncryptionTypeForName(const Aws::String& name);

AWS_QLDB_API Aws::String GetNameForS3ObjectEncryptionType(S3ObjectEncryptionType value);
} // namespace S3ObjectEncryptionTypeMapper
} // namespace Model
} // namespace QLDB
} // namespace Aws
