/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class DkimStatus
  {
    NOT_SET,
    PENDING,
    SUCCESS,
    FAILED,
    TEMPORARY_FAILURE,
    NOT_STARTED
  };

namespace DkimStatusMapper
{
AWS_SESV2_API DkimStatus GetDkimStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForDkimStatus(DkimStatus value);
} // namespace DkimStatusMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
