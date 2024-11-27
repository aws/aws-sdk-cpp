/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class RecordingScope
  {
    NOT_SET,
    INTERNAL,
    PAID
  };

namespace RecordingScopeMapper
{
AWS_CONFIGSERVICE_API RecordingScope GetRecordingScopeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForRecordingScope(RecordingScope value);
} // namespace RecordingScopeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
