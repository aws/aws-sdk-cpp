/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class RetrievalMode
  {
    NOT_SET,
    CALLER_CREDENTIALS,
    ASSUME_ROLE
  };

namespace RetrievalModeMapper
{
AWS_MACIE2_API RetrievalMode GetRetrievalModeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForRetrievalMode(RetrievalMode value);
} // namespace RetrievalModeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
