/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class Payer
  {
    NOT_SET,
    Requester,
    BucketOwner
  };

namespace PayerMapper
{
AWS_S3CRT_API Payer GetPayerForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForPayer(Payer value);
} // namespace PayerMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
