/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class EnrollmentStatus
  {
    NOT_SET,
    INITIALIZED,
    PENDING,
    REGISTERED,
    DISASSOCIATING,
    DEREGISTERING
  };

namespace EnrollmentStatusMapper
{
AWS_ALEXAFORBUSINESS_API EnrollmentStatus GetEnrollmentStatusForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForEnrollmentStatus(EnrollmentStatus value);
} // namespace EnrollmentStatusMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
