/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{
  enum class EncryptionOption
  {
    NOT_SET,
    AWS_OWNED_CMK,
    CUSTOMER_MANAGED_CMK
  };

namespace EncryptionOptionMapper
{
AWS_CODEGURUREVIEWER_API EncryptionOption GetEncryptionOptionForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForEncryptionOption(EncryptionOption value);
} // namespace EncryptionOptionMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
