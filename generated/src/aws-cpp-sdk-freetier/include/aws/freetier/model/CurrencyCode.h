/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FreeTier
{
namespace Model
{
  enum class CurrencyCode
  {
    NOT_SET,
    USD
  };

namespace CurrencyCodeMapper
{
AWS_FREETIER_API CurrencyCode GetCurrencyCodeForName(const Aws::String& name);

AWS_FREETIER_API Aws::String GetNameForCurrencyCode(CurrencyCode value);
} // namespace CurrencyCodeMapper
} // namespace Model
} // namespace FreeTier
} // namespace Aws
