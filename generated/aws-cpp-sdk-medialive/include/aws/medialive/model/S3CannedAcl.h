/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class S3CannedAcl
  {
    NOT_SET,
    AUTHENTICATED_READ,
    BUCKET_OWNER_FULL_CONTROL,
    BUCKET_OWNER_READ,
    PUBLIC_READ
  };

namespace S3CannedAclMapper
{
AWS_MEDIALIVE_API S3CannedAcl GetS3CannedAclForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForS3CannedAcl(S3CannedAcl value);
} // namespace S3CannedAclMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
