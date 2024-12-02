/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class ContactRecordingType
  {
    NOT_SET,
    AGENT,
    IVR,
    SCREEN
  };

namespace ContactRecordingTypeMapper
{
AWS_CONNECT_API ContactRecordingType GetContactRecordingTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactRecordingType(ContactRecordingType value);
} // namespace ContactRecordingTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
