/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace signer
{
namespace Model
{
  enum class ValidityType
  {
    NOT_SET,
    DAYS,
    MONTHS,
    YEARS
  };

namespace ValidityTypeMapper
{
AWS_SIGNER_API ValidityType GetValidityTypeForName(const Aws::String& name);

AWS_SIGNER_API Aws::String GetNameForValidityType(ValidityType value);
} // namespace ValidityTypeMapper
} // namespace Model
} // namespace signer
} // namespace Aws
