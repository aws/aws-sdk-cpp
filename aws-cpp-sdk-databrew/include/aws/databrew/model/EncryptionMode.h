/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class EncryptionMode
  {
    NOT_SET,
    SSE_KMS,
    SSE_S3
  };

namespace EncryptionModeMapper
{
AWS_GLUEDATABREW_API EncryptionMode GetEncryptionModeForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForEncryptionMode(EncryptionMode value);
} // namespace EncryptionModeMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
