/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class EmbeddingIdentityType
  {
    NOT_SET,
    IAM,
    QUICKSIGHT,
    ANONYMOUS
  };

namespace EmbeddingIdentityTypeMapper
{
AWS_QUICKSIGHT_API EmbeddingIdentityType GetEmbeddingIdentityTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForEmbeddingIdentityType(EmbeddingIdentityType value);
} // namespace EmbeddingIdentityTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
