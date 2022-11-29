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
  enum class OriginType
  {
    NOT_SET,
    AWS_KMS,
    EXTERNAL,
    AWS_CLOUDHSM,
    EXTERNAL_KEY_STORE
  };

namespace OriginTypeMapper
{
AWS_KMS_API OriginType GetOriginTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForOriginType(OriginType value);
} // namespace OriginTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
