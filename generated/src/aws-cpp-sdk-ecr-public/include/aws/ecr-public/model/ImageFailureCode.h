/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECRPublic
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
    KmsError
  };

namespace ImageFailureCodeMapper
{
AWS_ECRPUBLIC_API ImageFailureCode GetImageFailureCodeForName(const Aws::String& name);

AWS_ECRPUBLIC_API Aws::String GetNameForImageFailureCode(ImageFailureCode value);
} // namespace ImageFailureCodeMapper
} // namespace Model
} // namespace ECRPublic
} // namespace Aws
