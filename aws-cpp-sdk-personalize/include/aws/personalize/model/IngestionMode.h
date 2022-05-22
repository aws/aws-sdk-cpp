/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Personalize
{
namespace Model
{
  enum class IngestionMode
  {
    NOT_SET,
    BULK,
    PUT,
    ALL
  };

namespace IngestionModeMapper
{
AWS_PERSONALIZE_API IngestionMode GetIngestionModeForName(const Aws::String& name);

AWS_PERSONALIZE_API Aws::String GetNameForIngestionMode(IngestionMode value);
} // namespace IngestionModeMapper
} // namespace Model
} // namespace Personalize
} // namespace Aws
