/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class DescribePortfolioShareType
  {
    NOT_SET,
    ACCOUNT,
    ORGANIZATION,
    ORGANIZATIONAL_UNIT,
    ORGANIZATION_MEMBER_ACCOUNT
  };

namespace DescribePortfolioShareTypeMapper
{
AWS_SERVICECATALOG_API DescribePortfolioShareType GetDescribePortfolioShareTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForDescribePortfolioShareType(DescribePortfolioShareType value);
} // namespace DescribePortfolioShareTypeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
