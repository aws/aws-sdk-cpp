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
  enum class MfaTypesElement
  {
    NOT_SET,
    SMS,
    TOTP
  };

namespace MfaTypesElementMapper
{
AWS_AMPLIFYBACKEND_API MfaTypesElement GetMfaTypesElementForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForMfaTypesElement(MfaTypesElement value);
} // namespace MfaTypesElementMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
