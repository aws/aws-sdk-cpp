/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AggregationThresholdType.h>
#include <aws/cleanrooms/model/AllowedAggregateExpressionType.h>
#include <aws/cleanrooms/model/OutputColumnThreshold.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Specifies the minimum number of distinct identities that each query output
 * group must represent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AggregationThreshold">AWS
 * API Reference</a></p>
 */
class AggregationThreshold {
 public:
  AWS_CLEANROOMS_API AggregationThreshold() = default;
  AWS_CLEANROOMS_API AggregationThreshold(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AggregationThreshold& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identity column, such as <code>user_id</code>, whose distinct values
   * Clean Rooms counts to enforce minimum aggregation thresholds. Currently, you can
   * specify only one column, and its data type must be string, varchar, or char.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIdentityColumns() const { return m_identityColumns; }
  inline bool IdentityColumnsHasBeenSet() const { return m_identityColumnsHasBeenSet; }
  template <typename IdentityColumnsT = Aws::Vector<Aws::String>>
  void SetIdentityColumns(IdentityColumnsT&& value) {
    m_identityColumnsHasBeenSet = true;
    m_identityColumns = std::forward<IdentityColumnsT>(value);
  }
  template <typename IdentityColumnsT = Aws::Vector<Aws::String>>
  AggregationThreshold& WithIdentityColumns(IdentityColumnsT&& value) {
    SetIdentityColumns(std::forward<IdentityColumnsT>(value));
    return *this;
  }
  template <typename IdentityColumnsT = Aws::String>
  AggregationThreshold& AddIdentityColumns(IdentityColumnsT&& value) {
    m_identityColumnsHasBeenSet = true;
    m_identityColumns.emplace_back(std::forward<IdentityColumnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of distinct identities that each query output group must
   * represent. This threshold applies to all output columns in the table. To
   * override this threshold for a specific column, use
   * <code>outputColumnThresholds</code>.</p>
   */
  inline int GetMinimumIdentityCount() const { return m_minimumIdentityCount; }
  inline bool MinimumIdentityCountHasBeenSet() const { return m_minimumIdentityCountHasBeenSet; }
  inline void SetMinimumIdentityCount(int value) {
    m_minimumIdentityCountHasBeenSet = true;
    m_minimumIdentityCount = value;
  }
  inline AggregationThreshold& WithMinimumIdentityCount(int value) {
    SetMinimumIdentityCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of aggregation that the threshold enforces. Currently, the only
   * supported value is <code>COUNT_DISTINCT</code>, which counts the distinct values
   * in the identity column.</p>
   */
  inline AggregationThresholdType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AggregationThresholdType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AggregationThreshold& WithType(AggregationThresholdType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-column overrides of <code>minimumIdentityCount</code>. An output
   * column without an override uses <code>minimumIdentityCount</code>.</p>
   */
  inline const Aws::Vector<OutputColumnThreshold>& GetOutputColumnThresholds() const { return m_outputColumnThresholds; }
  inline bool OutputColumnThresholdsHasBeenSet() const { return m_outputColumnThresholdsHasBeenSet; }
  template <typename OutputColumnThresholdsT = Aws::Vector<OutputColumnThreshold>>
  void SetOutputColumnThresholds(OutputColumnThresholdsT&& value) {
    m_outputColumnThresholdsHasBeenSet = true;
    m_outputColumnThresholds = std::forward<OutputColumnThresholdsT>(value);
  }
  template <typename OutputColumnThresholdsT = Aws::Vector<OutputColumnThreshold>>
  AggregationThreshold& WithOutputColumnThresholds(OutputColumnThresholdsT&& value) {
    SetOutputColumnThresholds(std::forward<OutputColumnThresholdsT>(value));
    return *this;
  }
  template <typename OutputColumnThresholdsT = OutputColumnThreshold>
  AggregationThreshold& AddOutputColumnThresholds(OutputColumnThresholdsT&& value) {
    m_outputColumnThresholdsHasBeenSet = true;
    m_outputColumnThresholds.emplace_back(std::forward<OutputColumnThresholdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether a query can aggregate a transformed column. This applies to
   * the arguments of both aggregate and window functions. Valid values are:</p> <p>
   * <code>COLUMNS_ONLY</code> – A query can aggregate only a direct column
   * reference, such as <code>SUM(amount)</code>, or a constant. Clean Rooms rejects
   * a query that transforms a column and then aggregates it, such as
   * <code>SUM(amount * 2)</code> or <code>SUM(ROUND(amount))</code>.</p> <p>
   * <code>ANY_EXPRESSION</code> – A query can aggregate any expression. This
   * includes arithmetic, such as <code>SUM(price * quantity)</code>; a cast, such as
   * <code>SUM(CAST(amount AS DECIMAL))</code>; a nested function call, such as
   * <code>SUM(COALESCE(amount, 0))</code>; and a conditional, such as <code>SUM(CASE
   * WHEN region = 'EU' THEN amount ELSE 0 END)</code>.</p>
   */
  inline AllowedAggregateExpressionType GetAllowedAggregateExpressionType() const { return m_allowedAggregateExpressionType; }
  inline bool AllowedAggregateExpressionTypeHasBeenSet() const { return m_allowedAggregateExpressionTypeHasBeenSet; }
  inline void SetAllowedAggregateExpressionType(AllowedAggregateExpressionType value) {
    m_allowedAggregateExpressionTypeHasBeenSet = true;
    m_allowedAggregateExpressionType = value;
  }
  inline AggregationThreshold& WithAllowedAggregateExpressionType(AllowedAggregateExpressionType value) {
    SetAllowedAggregateExpressionType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_identityColumns;

  int m_minimumIdentityCount{0};

  AggregationThresholdType m_type{AggregationThresholdType::NOT_SET};

  Aws::Vector<OutputColumnThreshold> m_outputColumnThresholds;

  AllowedAggregateExpressionType m_allowedAggregateExpressionType{AllowedAggregateExpressionType::NOT_SET};
  bool m_identityColumnsHasBeenSet = false;
  bool m_minimumIdentityCountHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_outputColumnThresholdsHasBeenSet = false;
  bool m_allowedAggregateExpressionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
