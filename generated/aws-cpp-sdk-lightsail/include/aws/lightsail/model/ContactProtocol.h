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
  enum class ContactProtocol
  {
    NOT_SET,
    Email,
    SMS
  };

namespace ContactProtocolMapper
{
AWS_LIGHTSAIL_API ContactProtocol GetContactProtocolForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForContactProtocol(ContactProtocol value);
} // namespace ContactProtocolMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
