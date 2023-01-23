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
  enum class MFAMode
  {
    NOT_SET,
    ON,
    OFF,
    OPTIONAL
  };

namespace MFAModeMapper
{
AWS_AMPLIFYBACKEND_API MFAMode GetMFAModeForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForMFAMode(MFAMode value);
} // namespace MFAModeMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
