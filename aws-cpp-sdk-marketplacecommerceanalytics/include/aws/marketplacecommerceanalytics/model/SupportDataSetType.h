﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MarketplaceCommerceAnalytics
{
namespace Model
{
  enum class SupportDataSetType
  {
    NOT_SET,
    customer_support_contacts_data,
    test_customer_support_contacts_data
  };

namespace SupportDataSetTypeMapper
{
AWS_MARKETPLACECOMMERCEANALYTICS_API SupportDataSetType GetSupportDataSetTypeForName(const Aws::String& name);

AWS_MARKETPLACECOMMERCEANALYTICS_API Aws::String GetNameForSupportDataSetType(SupportDataSetType value);
} // namespace SupportDataSetTypeMapper
} // namespace Model
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
