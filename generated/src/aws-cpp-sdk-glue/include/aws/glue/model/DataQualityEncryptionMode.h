/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class DataQualityEncryptionMode
  {
    NOT_SET,
    DISABLED,
    SSE_KMS
  };

namespace DataQualityEncryptionModeMapper
{
AWS_GLUE_API DataQualityEncryptionMode GetDataQualityEncryptionModeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDataQualityEncryptionMode(DataQualityEncryptionMode value);
} // namespace DataQualityEncryptionModeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
