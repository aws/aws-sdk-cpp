﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DifferentialPrivacyAggregationType.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Provides the sensitivity parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacySensitivityParameters">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacySensitivityParameters
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacySensitivityParameters();
    AWS_CLEANROOMS_API DifferentialPrivacySensitivityParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacySensitivityParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of aggregation function that was run.</p>
     */
    inline const DifferentialPrivacyAggregationType& GetAggregationType() const{ return m_aggregationType; }
    inline bool AggregationTypeHasBeenSet() const { return m_aggregationTypeHasBeenSet; }
    inline void SetAggregationType(const DifferentialPrivacyAggregationType& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = value; }
    inline void SetAggregationType(DifferentialPrivacyAggregationType&& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = std::move(value); }
    inline DifferentialPrivacySensitivityParameters& WithAggregationType(const DifferentialPrivacyAggregationType& value) { SetAggregationType(value); return *this;}
    inline DifferentialPrivacySensitivityParameters& WithAggregationType(DifferentialPrivacyAggregationType&& value) { SetAggregationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation expression that was run.</p>
     */
    inline const Aws::String& GetAggregationExpression() const{ return m_aggregationExpression; }
    inline bool AggregationExpressionHasBeenSet() const { return m_aggregationExpressionHasBeenSet; }
    inline void SetAggregationExpression(const Aws::String& value) { m_aggregationExpressionHasBeenSet = true; m_aggregationExpression = value; }
    inline void SetAggregationExpression(Aws::String&& value) { m_aggregationExpressionHasBeenSet = true; m_aggregationExpression = std::move(value); }
    inline void SetAggregationExpression(const char* value) { m_aggregationExpressionHasBeenSet = true; m_aggregationExpression.assign(value); }
    inline DifferentialPrivacySensitivityParameters& WithAggregationExpression(const Aws::String& value) { SetAggregationExpression(value); return *this;}
    inline DifferentialPrivacySensitivityParameters& WithAggregationExpression(Aws::String&& value) { SetAggregationExpression(std::move(value)); return *this;}
    inline DifferentialPrivacySensitivityParameters& WithAggregationExpression(const char* value) { SetAggregationExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of rows contributed by a user in a SQL query.</p>
     */
    inline int GetUserContributionLimit() const{ return m_userContributionLimit; }
    inline bool UserContributionLimitHasBeenSet() const { return m_userContributionLimitHasBeenSet; }
    inline void SetUserContributionLimit(int value) { m_userContributionLimitHasBeenSet = true; m_userContributionLimit = value; }
    inline DifferentialPrivacySensitivityParameters& WithUserContributionLimit(int value) { SetUserContributionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower bound of the aggregation expression.</p>
     */
    inline double GetMinColumnValue() const{ return m_minColumnValue; }
    inline bool MinColumnValueHasBeenSet() const { return m_minColumnValueHasBeenSet; }
    inline void SetMinColumnValue(double value) { m_minColumnValueHasBeenSet = true; m_minColumnValue = value; }
    inline DifferentialPrivacySensitivityParameters& WithMinColumnValue(double value) { SetMinColumnValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper bound of the aggregation expression.</p>
     */
    inline double GetMaxColumnValue() const{ return m_maxColumnValue; }
    inline bool MaxColumnValueHasBeenSet() const { return m_maxColumnValueHasBeenSet; }
    inline void SetMaxColumnValue(double value) { m_maxColumnValueHasBeenSet = true; m_maxColumnValue = value; }
    inline DifferentialPrivacySensitivityParameters& WithMaxColumnValue(double value) { SetMaxColumnValue(value); return *this;}
    ///@}
  private:

    DifferentialPrivacyAggregationType m_aggregationType;
    bool m_aggregationTypeHasBeenSet = false;

    Aws::String m_aggregationExpression;
    bool m_aggregationExpressionHasBeenSet = false;

    int m_userContributionLimit;
    bool m_userContributionLimitHasBeenSet = false;

    double m_minColumnValue;
    bool m_minColumnValueHasBeenSet = false;

    double m_maxColumnValue;
    bool m_maxColumnValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
