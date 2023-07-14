/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class ValidationMethod
  {
    NOT_SET,
    EMAIL,
    DNS
  };

namespace ValidationMethodMapper
{
AWS_ACM_API ValidationMethod GetValidationMethodForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForValidationMethod(ValidationMethod value);
} // namespace ValidationMethodMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
