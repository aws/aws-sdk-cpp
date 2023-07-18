/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class TestType
  {
    NOT_SET,
    Software,
    Hardware,
    AZ,
    Region
  };

namespace TestTypeMapper
{
AWS_RESILIENCEHUB_API TestType GetTestTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForTestType(TestType value);
} // namespace TestTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
