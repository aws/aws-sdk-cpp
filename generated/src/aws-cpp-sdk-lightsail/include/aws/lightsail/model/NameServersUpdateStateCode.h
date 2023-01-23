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
  enum class NameServersUpdateStateCode
  {
    NOT_SET,
    SUCCEEDED,
    PENDING,
    FAILED,
    STARTED
  };

namespace NameServersUpdateStateCodeMapper
{
AWS_LIGHTSAIL_API NameServersUpdateStateCode GetNameServersUpdateStateCodeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForNameServersUpdateStateCode(NameServersUpdateStateCode value);
} // namespace NameServersUpdateStateCodeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
