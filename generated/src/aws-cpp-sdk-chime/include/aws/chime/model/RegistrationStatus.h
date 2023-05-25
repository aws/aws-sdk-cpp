/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class RegistrationStatus
  {
    NOT_SET,
    Unregistered,
    Registered,
    Suspended
  };

namespace RegistrationStatusMapper
{
AWS_CHIME_API RegistrationStatus GetRegistrationStatusForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForRegistrationStatus(RegistrationStatus value);
} // namespace RegistrationStatusMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
