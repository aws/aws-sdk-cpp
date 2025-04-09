/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GroundStation
{
namespace Model
{
  enum class ContactStatus
  {
    NOT_SET,
    SCHEDULING,
    FAILED_TO_SCHEDULE,
    SCHEDULED,
    CANCELLED,
    AWS_CANCELLED,
    PREPASS,
    PASS,
    POSTPASS,
    COMPLETED,
    FAILED,
    AVAILABLE,
    CANCELLING,
    AWS_FAILED
  };

namespace ContactStatusMapper
{
AWS_GROUNDSTATION_API ContactStatus GetContactStatusForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForContactStatus(ContactStatus value);
} // namespace ContactStatusMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
