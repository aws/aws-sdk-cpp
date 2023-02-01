/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMRServerless
{
namespace Model
{
  enum class Architecture
  {
    NOT_SET,
    ARM64,
    X86_64
  };

namespace ArchitectureMapper
{
AWS_EMRSERVERLESS_API Architecture GetArchitectureForName(const Aws::String& name);

AWS_EMRSERVERLESS_API Aws::String GetNameForArchitecture(Architecture value);
} // namespace ArchitectureMapper
} // namespace Model
} // namespace EMRServerless
} // namespace Aws
