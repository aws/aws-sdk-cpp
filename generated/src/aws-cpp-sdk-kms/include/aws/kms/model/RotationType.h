/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{
  enum class RotationType
  {
    NOT_SET,
    AUTOMATIC,
    ON_DEMAND
  };

namespace RotationTypeMapper
{
AWS_KMS_API RotationType GetRotationTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForRotationType(RotationType value);
} // namespace RotationTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
