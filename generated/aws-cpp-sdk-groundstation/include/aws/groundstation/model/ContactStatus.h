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
    AVAILABLE,
    AWS_CANCELLED,
    AWS_FAILED,
    CANCELLED,
    CANCELLING,
    COMPLETED,
    FAILED,
    FAILED_TO_SCHEDULE,
    PASS,
    POSTPASS,
    PREPASS,
    SCHEDULED,
    SCHEDULING
  };

namespace ContactStatusMapper
{
AWS_GROUNDSTATION_API ContactStatus GetContactStatusForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForContactStatus(ContactStatus value);
} // namespace ContactStatusMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
