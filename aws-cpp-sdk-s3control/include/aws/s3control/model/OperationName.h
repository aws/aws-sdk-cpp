/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  enum class OperationName
  {
    NOT_SET,
    LambdaInvoke,
    S3PutObjectCopy,
    S3PutObjectAcl,
    S3PutObjectTagging,
    S3InitiateRestoreObject,
    S3PutObjectLegalHold,
    S3PutObjectRetention
  };

namespace OperationNameMapper
{
AWS_S3CONTROL_API OperationName GetOperationNameForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForOperationName(OperationName value);
} // namespace OperationNameMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
