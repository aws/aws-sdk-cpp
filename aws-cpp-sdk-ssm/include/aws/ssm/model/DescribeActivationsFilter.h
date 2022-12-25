/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DescribeActivationsFilterKeys.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Filter for the DescribeActivation API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeActivationsFilter">AWS
   * API Reference</a></p>
   */
  class DescribeActivationsFilter
  {
  public:
    AWS_SSM_API DescribeActivationsFilter();
    AWS_SSM_API DescribeActivationsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DescribeActivationsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p>
     */
    inline const DescribeActivationsFilterKeys& GetFilterKey() const{ return m_filterKey; }

    /**
     * <p>The name of the filter.</p>
     */
    inline bool FilterKeyHasBeenSet() const { return m_filterKeyHasBeenSet; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetFilterKey(const DescribeActivationsFilterKeys& value) { m_filterKeyHasBeenSet = true; m_filterKey = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetFilterKey(DescribeActivationsFilterKeys&& value) { m_filterKeyHasBeenSet = true; m_filterKey = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline DescribeActivationsFilter& WithFilterKey(const DescribeActivationsFilterKeys& value) { SetFilterKey(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline DescribeActivationsFilter& WithFilterKey(DescribeActivationsFilterKeys&& value) { SetFilterKey(std::move(value)); return *this;}


    /**
     * <p>The filter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterValues() const{ return m_filterValues; }

    /**
     * <p>The filter values.</p>
     */
    inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }

    /**
     * <p>The filter values.</p>
     */
    inline void SetFilterValues(const Aws::Vector<Aws::String>& value) { m_filterValuesHasBeenSet = true; m_filterValues = value; }

    /**
     * <p>The filter values.</p>
     */
    inline void SetFilterValues(Aws::Vector<Aws::String>&& value) { m_filterValuesHasBeenSet = true; m_filterValues = std::move(value); }

    /**
     * <p>The filter values.</p>
     */
    inline DescribeActivationsFilter& WithFilterValues(const Aws::Vector<Aws::String>& value) { SetFilterValues(value); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline DescribeActivationsFilter& WithFilterValues(Aws::Vector<Aws::String>&& value) { SetFilterValues(std::move(value)); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline DescribeActivationsFilter& AddFilterValues(const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.push_back(value); return *this; }

    /**
     * <p>The filter values.</p>
     */
    inline DescribeActivationsFilter& AddFilterValues(Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The filter values.</p>
     */
    inline DescribeActivationsFilter& AddFilterValues(const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.push_back(value); return *this; }

  private:

    DescribeActivationsFilterKeys m_filterKey;
    bool m_filterKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
