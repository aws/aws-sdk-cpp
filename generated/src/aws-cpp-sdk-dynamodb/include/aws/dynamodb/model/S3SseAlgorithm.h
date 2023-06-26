/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
  enum class S3SseAlgorithm
  {
    NOT_SET,
    AES256,
    KMS
  };

namespace S3SseAlgorithmMapper
{
AWS_DYNAMODB_API S3SseAlgorithm GetS3SseAlgorithmForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForS3SseAlgorithm(S3SseAlgorithm value);
} // namespace S3SseAlgorithmMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
