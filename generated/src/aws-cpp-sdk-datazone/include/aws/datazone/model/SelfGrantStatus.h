/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class SelfGrantStatus
  {
    NOT_SET,
    GRANT_PENDING,
    REVOKE_PENDING,
    GRANT_IN_PROGRESS,
    REVOKE_IN_PROGRESS,
    GRANTED,
    GRANT_FAILED,
    REVOKE_FAILED
  };

namespace SelfGrantStatusMapper
{
AWS_DATAZONE_API SelfGrantStatus GetSelfGrantStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForSelfGrantStatus(SelfGrantStatus value);
} // namespace SelfGrantStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
