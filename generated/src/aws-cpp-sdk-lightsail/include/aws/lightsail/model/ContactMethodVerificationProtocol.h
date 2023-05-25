/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class ContactMethodVerificationProtocol
  {
    NOT_SET,
    Email
  };

namespace ContactMethodVerificationProtocolMapper
{
AWS_LIGHTSAIL_API ContactMethodVerificationProtocol GetContactMethodVerificationProtocolForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForContactMethodVerificationProtocol(ContactMethodVerificationProtocol value);
} // namespace ContactMethodVerificationProtocolMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
