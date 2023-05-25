/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class EncryptionKeyType
  {
    NOT_SET,
    KMS
  };

namespace EncryptionKeyTypeMapper
{
AWS_CODEPIPELINE_API EncryptionKeyType GetEncryptionKeyTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForEncryptionKeyType(EncryptionKeyType value);
} // namespace EncryptionKeyTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
