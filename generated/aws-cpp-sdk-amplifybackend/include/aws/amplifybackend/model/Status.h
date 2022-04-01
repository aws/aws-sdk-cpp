/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    LATEST,
    STALE
  };

namespace StatusMapper
{
AWS_AMPLIFYBACKEND_API Status GetStatusForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
