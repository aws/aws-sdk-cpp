/*
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DescribeActivationsFilterKeys.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Filter for the DescribeActivation API.</p>
   */
  class AWS_SSM_API DescribeActivationsFilter
  {
  public:
    DescribeActivationsFilter();
    DescribeActivationsFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    DescribeActivationsFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the filter.</p>
     */
    inline const DescribeActivationsFilterKeys& GetFilterKey() const{ return m_filterKey; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetFilterKey(const DescribeActivationsFilterKeys& value) { m_filterKeyHasBeenSet = true; m_filterKey = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetFilterKey(DescribeActivationsFilterKeys&& value) { m_filterKeyHasBeenSet = true; m_filterKey = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline DescribeActivationsFilter& WithFilterKey(const DescribeActivationsFilterKeys& value) { SetFilterKey(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline DescribeActivationsFilter& WithFilterKey(DescribeActivationsFilterKeys&& value) { SetFilterKey(value); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterValues() const{ return m_filterValues; }

    /**
     * <p>The filter values.</p>
     */
    inline void SetFilterValues(const Aws::Vector<Aws::String>& value) { m_filterValuesHasBeenSet = true; m_filterValues = value; }

    /**
     * <p>The filter values.</p>
     */
    inline void SetFilterValues(Aws::Vector<Aws::String>&& value) { m_filterValuesHasBeenSet = true; m_filterValues = value; }

    /**
     * <p>The filter values.</p>
     */
    inline DescribeActivationsFilter& WithFilterValues(const Aws::Vector<Aws::String>& value) { SetFilterValues(value); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline DescribeActivationsFilter& WithFilterValues(Aws::Vector<Aws::String>&& value) { SetFilterValues(value); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline DescribeActivationsFilter& AddFilterValues(const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.push_back(value); return *this; }

    /**
     * <p>The filter values.</p>
     */
    inline DescribeActivationsFilter& AddFilterValues(Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.push_back(value); return *this; }

    /**
     * <p>The filter values.</p>
     */
    inline DescribeActivationsFilter& AddFilterValues(const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.push_back(value); return *this; }

  private:
    DescribeActivationsFilterKeys m_filterKey;
    bool m_filterKeyHasBeenSet;
    Aws::Vector<Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
