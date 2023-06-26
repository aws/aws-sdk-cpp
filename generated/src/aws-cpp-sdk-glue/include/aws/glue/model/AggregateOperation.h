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
    AWS_GLUE_API AggregateOperation();
    AWS_GLUE_API AggregateOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AggregateOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the column on the data set on which the aggregation function will
     * be applied.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumn() const{ return m_column; }

    /**
     * <p>Specifies the column on the data set on which the aggregation function will
     * be applied.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>Specifies the column on the data set on which the aggregation function will
     * be applied.</p>
     */
    inline void SetColumn(const Aws::Vector<Aws::String>& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>Specifies the column on the data set on which the aggregation function will
     * be applied.</p>
     */
    inline void SetColumn(Aws::Vector<Aws::String>&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>Specifies the column on the data set on which the aggregation function will
     * be applied.</p>
     */
    inline AggregateOperation& WithColumn(const Aws::Vector<Aws::String>& value) { SetColumn(value); return *this;}

    /**
     * <p>Specifies the column on the data set on which the aggregation function will
     * be applied.</p>
     */
    inline AggregateOperation& WithColumn(Aws::Vector<Aws::String>&& value) { SetColumn(std::move(value)); return *this;}

    /**
     * <p>Specifies the column on the data set on which the aggregation function will
     * be applied.</p>
     */
    inline AggregateOperation& AddColumn(const Aws::String& value) { m_columnHasBeenSet = true; m_column.push_back(value); return *this; }

    /**
     * <p>Specifies the column on the data set on which the aggregation function will
     * be applied.</p>
     */
    inline AggregateOperation& AddColumn(Aws::String&& value) { m_columnHasBeenSet = true; m_column.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the column on the data set on which the aggregation function will
     * be applied.</p>
     */
    inline AggregateOperation& AddColumn(const char* value) { m_columnHasBeenSet = true; m_column.push_back(value); return *this; }


    /**
     * <p>Specifies the aggregation function to apply.</p> <p>Possible aggregation
     * functions include: avg countDistinct, count, first, last, kurtosis, max, min,
     * skewness, stddev_samp, stddev_pop, sum, sumDistinct, var_samp, var_pop</p>
     */
    inline const AggFunction& GetAggFunc() const{ return m_aggFunc; }

    /**
     * <p>Specifies the aggregation function to apply.</p> <p>Possible aggregation
     * functions include: avg countDistinct, count, first, last, kurtosis, max, min,
     * skewness, stddev_samp, stddev_pop, sum, sumDistinct, var_samp, var_pop</p>
     */
    inline bool AggFuncHasBeenSet() const { return m_aggFuncHasBeenSet; }

    /**
     * <p>Specifies the aggregation function to apply.</p> <p>Possible aggregation
     * functions include: avg countDistinct, count, first, last, kurtosis, max, min,
     * skewness, stddev_samp, stddev_pop, sum, sumDistinct, var_samp, var_pop</p>
     */
    inline void SetAggFunc(const AggFunction& value) { m_aggFuncHasBeenSet = true; m_aggFunc = value; }

    /**
     * <p>Specifies the aggregation function to apply.</p> <p>Possible aggregation
     * functions include: avg countDistinct, count, first, last, kurtosis, max, min,
     * skewness, stddev_samp, stddev_pop, sum, sumDistinct, var_samp, var_pop</p>
     */
    inline void SetAggFunc(AggFunction&& value) { m_aggFuncHasBeenSet = true; m_aggFunc = std::move(value); }

    /**
     * <p>Specifies the aggregation function to apply.</p> <p>Possible aggregation
     * functions include: avg countDistinct, count, first, last, kurtosis, max, min,
     * skewness, stddev_samp, stddev_pop, sum, sumDistinct, var_samp, var_pop</p>
     */
    inline AggregateOperation& WithAggFunc(const AggFunction& value) { SetAggFunc(value); return *this;}

    /**
     * <p>Specifies the aggregation function to apply.</p> <p>Possible aggregation
     * functions include: avg countDistinct, count, first, last, kurtosis, max, min,
     * skewness, stddev_samp, stddev_pop, sum, sumDistinct, var_samp, var_pop</p>
     */
    inline AggregateOperation& WithAggFunc(AggFunction&& value) { SetAggFunc(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_column;
    bool m_columnHasBeenSet = false;

    AggFunction m_aggFunc;
    bool m_aggFuncHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
