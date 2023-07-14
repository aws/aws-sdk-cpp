/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class AuthDecision
  {
    NOT_SET,
    ALLOWED,
    EXPLICIT_DENY,
    IMPLICIT_DENY
  };

namespace AuthDecisionMapper
{
AWS_IOT_API AuthDecision GetAuthDecisionForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuthDecision(AuthDecision value);
} // namespace AuthDecisionMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
