/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{
  enum class FailureCode
  {
    NOT_SET,
    CLIENT_ERROR,
    SERVER_FAULT
  };

namespace FailureCodeMapper
{
AWS_MARKETPLACECATALOG_API FailureCode GetFailureCodeForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForFailureCode(FailureCode value);
} // namespace FailureCodeMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
