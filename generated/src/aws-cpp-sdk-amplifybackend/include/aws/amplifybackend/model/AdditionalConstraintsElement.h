/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{
  enum class AdditionalConstraintsElement
  {
    NOT_SET,
    REQUIRE_DIGIT,
    REQUIRE_LOWERCASE,
    REQUIRE_SYMBOL,
    REQUIRE_UPPERCASE
  };

namespace AdditionalConstraintsElementMapper
{
AWS_AMPLIFYBACKEND_API AdditionalConstraintsElement GetAdditionalConstraintsElementForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForAdditionalConstraintsElement(AdditionalConstraintsElement value);
} // namespace AdditionalConstraintsElementMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
