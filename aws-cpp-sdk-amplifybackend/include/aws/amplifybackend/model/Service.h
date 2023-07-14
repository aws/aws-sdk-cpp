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
  enum class Service
  {
    NOT_SET,
    COGNITO
  };

namespace ServiceMapper
{
AWS_AMPLIFYBACKEND_API Service GetServiceForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForService(Service value);
} // namespace ServiceMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
