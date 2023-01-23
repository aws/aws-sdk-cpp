/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{
  enum class ConfirmationStatus
  {
    NOT_SET,
    None,
    Confirmed,
    Denied
  };

namespace ConfirmationStatusMapper
{
AWS_LEXRUNTIMESERVICE_API ConfirmationStatus GetConfirmationStatusForName(const Aws::String& name);

AWS_LEXRUNTIMESERVICE_API Aws::String GetNameForConfirmationStatus(ConfirmationStatus value);
} // namespace ConfirmationStatusMapper
} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
