﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/InsightType.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>A JSON string that contains a list of Insights types that are logged on a
   * trail or event data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/InsightSelector">AWS
   * API Reference</a></p>
   */
  class InsightSelector
  {
  public:
    AWS_CLOUDTRAIL_API InsightSelector() = default;
    AWS_CLOUDTRAIL_API InsightSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API InsightSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of Insights events to log on a trail or event data store.
     * <code>ApiCallRateInsight</code> and <code>ApiErrorRateInsight</code> are valid
     * Insight types.</p> <p>The <code>ApiCallRateInsight</code> Insights type analyzes
     * write-only management API calls that are aggregated per minute against a
     * baseline API call volume.</p> <p>The <code>ApiErrorRateInsight</code> Insights
     * type analyzes management API calls that result in error codes. The error is
     * shown if the API call is unsuccessful.</p>
     */
    inline InsightType GetInsightType() const { return m_insightType; }
    inline bool InsightTypeHasBeenSet() const { return m_insightTypeHasBeenSet; }
    inline void SetInsightType(InsightType value) { m_insightTypeHasBeenSet = true; m_insightType = value; }
    inline InsightSelector& WithInsightType(InsightType value) { SetInsightType(value); return *this;}
    ///@}
  private:

    InsightType m_insightType{InsightType::NOT_SET};
    bool m_insightTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
