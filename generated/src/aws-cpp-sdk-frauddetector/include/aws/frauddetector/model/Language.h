/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{
  enum class Language
  {
    NOT_SET,
    DETECTORPL
  };

namespace LanguageMapper
{
AWS_FRAUDDETECTOR_API Language GetLanguageForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForLanguage(Language value);
} // namespace LanguageMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
