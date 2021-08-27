/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/LocationFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/Operator.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>You can use API filters to narrow down the list of resources returned by
   * <code>ListLocations</code>. For example, to retrieve all your Amazon S3
   * locations, you can use <code>ListLocations</code> with filter name
   * <code>LocationType S3</code> and <code>Operator Equals</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/LocationFilter">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API LocationFilter
  {
  public:
    LocationFilter();
    LocationFilter(Aws::Utils::Json::JsonView jsonValue);
    LocationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it (for example, <code>LocationType</code> for
     * <code>ListLocations</code>).</p>
     */
    inline const LocationFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it (for example, <code>LocationType</code> for
     * <code>ListLocations</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it (for example, <code>LocationType</code> for
     * <code>ListLocations</code>).</p>
     */
    inline void SetName(const LocationFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it (for example, <code>LocationType</code> for
     * <code>ListLocations</code>).</p>
     */
    inline void SetName(LocationFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it (for example, <code>LocationType</code> for
     * <code>ListLocations</code>).</p>
     */
    inline LocationFilter& WithName(const LocationFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it (for example, <code>LocationType</code> for
     * <code>ListLocations</code>).</p>
     */
    inline LocationFilter& WithName(LocationFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only Amazon S3 locations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only Amazon S3 locations.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only Amazon S3 locations.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only Amazon S3 locations.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only Amazon S3 locations.</p>
     */
    inline LocationFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only Amazon S3 locations.</p>
     */
    inline LocationFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only Amazon S3 locations.</p>
     */
    inline LocationFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only Amazon S3 locations.</p>
     */
    inline LocationFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only Amazon S3 locations.</p>
     */
    inline LocationFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>). For more about API filtering
     * operators, see <a>query-resources</a>.</p>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>). For more about API filtering
     * operators, see <a>query-resources</a>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>). For more about API filtering
     * operators, see <a>query-resources</a>.</p>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>). For more about API filtering
     * operators, see <a>query-resources</a>.</p>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>). For more about API filtering
     * operators, see <a>query-resources</a>.</p>
     */
    inline LocationFilter& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>). For more about API filtering
     * operators, see <a>query-resources</a>.</p>
     */
    inline LocationFilter& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    LocationFilterName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    Operator m_operator;
    bool m_operatorHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
