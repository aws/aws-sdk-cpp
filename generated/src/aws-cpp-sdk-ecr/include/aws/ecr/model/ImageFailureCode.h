/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class ImageFailureCode
  {
    NOT_SET,
    InvalidImageDigest,
    InvalidImageTag,
    ImageTagDoesNotMatchDigest,
    ImageNotFound,
    MissingDigestAndTag,
    ImageReferencedByManifestList,
    KmsError,
    UpstreamAccessDenied,
    UpstreamTooManyRequests,
    UpstreamUnavailable
  };

namespace ImageFailureCodeMapper
{
AWS_ECR_API ImageFailureCode GetImageFailureCodeForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForImageFailureCode(ImageFailureCode value);
} // namespace ImageFailureCodeMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
