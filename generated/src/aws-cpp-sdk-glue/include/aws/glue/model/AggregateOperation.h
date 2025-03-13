/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/AggFunction.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies the set of parameters needed to perform aggregation in the
   * aggregate transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AggregateOperation">AWS
   * API Reference</a></p>
   */
  class AggregateOperation
  {
  public:
    AWS_GLUE_API AggregateOperation() = default;
    AWS_GLUE_API AggregateOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AggregateOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the column on the data set on which the aggregation function will
     * be applied.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = Aws::Vector<Aws::String>>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = Aws::Vector<Aws::String>>
    AggregateOperation& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    template<typename ColumnT = Aws::String>
    AggregateOperation& AddColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column.emplace_back(std::forward<ColumnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the aggregation function to apply.</p> <p>Possible aggregation
     * functions include: avg countDistinct, count, first, last, kurtosis, max, min,
     * skewness, stddev_samp, stddev_pop, sum, sumDistinct, var_samp, var_pop</p>
     */
    inline AggFunction GetAggFunc() const { return m_aggFunc; }
    inline bool AggFuncHasBeenSet() const { return m_aggFuncHasBeenSet; }
    inline void SetAggFunc(AggFunction value) { m_aggFuncHasBeenSet = true; m_aggFunc = value; }
    inline AggregateOperation& WithAggFunc(AggFunction value) { SetAggFunc(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_column;
    bool m_columnHasBeenSet = false;

    AggFunction m_aggFunc{AggFunction::NOT_SET};
    bool m_aggFuncHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
