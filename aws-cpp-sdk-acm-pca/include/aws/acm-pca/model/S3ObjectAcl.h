/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class S3ObjectAcl
  {
    NOT_SET,
    PUBLIC_READ,
    BUCKET_OWNER_FULL_CONTROL
  };

namespace S3ObjectAclMapper
{
AWS_ACMPCA_API S3ObjectAcl GetS3ObjectAclForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForS3ObjectAcl(S3ObjectAcl value);
} // namespace S3ObjectAclMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
