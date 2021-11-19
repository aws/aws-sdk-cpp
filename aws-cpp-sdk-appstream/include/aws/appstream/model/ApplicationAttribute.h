/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class ApplicationAttribute
  {
    NOT_SET,
    LAUNCH_PARAMETERS,
    WORKING_DIRECTORY
  };

namespace ApplicationAttributeMapper
{
AWS_APPSTREAM_API ApplicationAttribute GetApplicationAttributeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForApplicationAttribute(ApplicationAttribute value);
} // namespace ApplicationAttributeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
