/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class FaqFileFormat
  {
    NOT_SET,
    CSV,
    CSV_WITH_HEADER,
    JSON
  };

namespace FaqFileFormatMapper
{
AWS_KENDRA_API FaqFileFormat GetFaqFileFormatForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForFaqFileFormat(FaqFileFormat value);
} // namespace FaqFileFormatMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
