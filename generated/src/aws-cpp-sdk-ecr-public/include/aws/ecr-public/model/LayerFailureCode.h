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
  enum class LayerFailureCode
  {
    NOT_SET,
    InvalidLayerDigest,
    MissingLayerDigest
  };

namespace LayerFailureCodeMapper
{
AWS_ECRPUBLIC_API LayerFailureCode GetLayerFailureCodeForName(const Aws::String& name);

AWS_ECRPUBLIC_API Aws::String GetNameForLayerFailureCode(LayerFailureCode value);
} // namespace LayerFailureCodeMapper
} // namespace Model
} // namespace ECRPublic
} // namespace Aws
