/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/UnaggregatedField.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The unaggregated field well for the table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableUnaggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class TableUnaggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API TableUnaggregatedFieldWells();
    AWS_QUICKSIGHT_API TableUnaggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableUnaggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values field well for a pivot table. Values are unaggregated for an
     * unaggregated table.</p>
     */
    inline const Aws::Vector<UnaggregatedField>& GetValues() const{ return m_values; }

    /**
     * <p>The values field well for a pivot table. Values are unaggregated for an
     * unaggregated table.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values field well for a pivot table. Values are unaggregated for an
     * unaggregated table.</p>
     */
    inline void SetValues(const Aws::Vector<UnaggregatedField>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values field well for a pivot table. Values are unaggregated for an
     * unaggregated table.</p>
     */
    inline void SetValues(Aws::Vector<UnaggregatedField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values field well for a pivot table. Values are unaggregated for an
     * unaggregated table.</p>
     */
    inline TableUnaggregatedFieldWells& WithValues(const Aws::Vector<UnaggregatedField>& value) { SetValues(value); return *this;}

    /**
     * <p>The values field well for a pivot table. Values are unaggregated for an
     * unaggregated table.</p>
     */
    inline TableUnaggregatedFieldWells& WithValues(Aws::Vector<UnaggregatedField>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values field well for a pivot table. Values are unaggregated for an
     * unaggregated table.</p>
     */
    inline TableUnaggregatedFieldWells& AddValues(const UnaggregatedField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values field well for a pivot table. Values are unaggregated for an
     * unaggregated table.</p>
     */
    inline TableUnaggregatedFieldWells& AddValues(UnaggregatedField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UnaggregatedField> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
