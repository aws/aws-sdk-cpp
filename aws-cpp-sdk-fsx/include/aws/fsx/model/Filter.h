/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FilterName.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>A filter used to restrict the results of describe calls. You can use multiple
   * filters to return results that meet all applied filter
   * requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_FSX_API Filter();
    AWS_FSX_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for this filter.</p>
     */
    inline const FilterName& GetName() const{ return m_name; }

    /**
     * <p>The name for this filter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for this filter.</p>
     */
    inline void SetName(const FilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for this filter.</p>
     */
    inline void SetName(FilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for this filter.</p>
     */
    inline Filter& WithName(const FilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name for this filter.</p>
     */
    inline Filter& WithName(FilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The values of the filter. These are all the values for any of the applied
     * filters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values of the filter. These are all the values for any of the applied
     * filters.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of the filter. These are all the values for any of the applied
     * filters.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of the filter. These are all the values for any of the applied
     * filters.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of the filter. These are all the values for any of the applied
     * filters.</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values of the filter. These are all the values for any of the applied
     * filters.</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values of the filter. These are all the values for any of the applied
     * filters.</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values of the filter. These are all the values for any of the applied
     * filters.</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values of the filter. These are all the values for any of the applied
     * filters.</p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    FilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
