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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>A single product view aggregation value/count pair, containing metadata about
   * each product to which the calling user has access.</p>
   */
  class AWS_SERVICECATALOG_API ProductViewAggregationValue
  {
  public:
    ProductViewAggregationValue();
    ProductViewAggregationValue(const Aws::Utils::Json::JsonValue& jsonValue);
    ProductViewAggregationValue& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The value of the product view aggregation.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the product view aggregation.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the product view aggregation.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the product view aggregation.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the product view aggregation.</p>
     */
    inline ProductViewAggregationValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the product view aggregation.</p>
     */
    inline ProductViewAggregationValue& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the product view aggregation.</p>
     */
    inline ProductViewAggregationValue& WithValue(const char* value) { SetValue(value); return *this;}

    /**
     * <p>An approximate count of the products that match the value.</p>
     */
    inline int GetApproximateCount() const{ return m_approximateCount; }

    /**
     * <p>An approximate count of the products that match the value.</p>
     */
    inline void SetApproximateCount(int value) { m_approximateCountHasBeenSet = true; m_approximateCount = value; }

    /**
     * <p>An approximate count of the products that match the value.</p>
     */
    inline ProductViewAggregationValue& WithApproximateCount(int value) { SetApproximateCount(value); return *this;}

  private:
    Aws::String m_value;
    bool m_valueHasBeenSet;
    int m_approximateCount;
    bool m_approximateCountHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
