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
  enum class ServiceName
  {
    NOT_SET,
    S3
  };

namespace ServiceNameMapper
{
AWS_AMPLIFYBACKEND_API ServiceName GetServiceNameForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForServiceName(ServiceName value);
} // namespace ServiceNameMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
