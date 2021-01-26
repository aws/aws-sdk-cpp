/**
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
   * <p>A JSON string that contains a list of insight types that are logged on a
   * trail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/InsightSelector">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API InsightSelector
  {
  public:
    InsightSelector();
    InsightSelector(Aws::Utils::Json::JsonView jsonValue);
    InsightSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of insights to log on a trail. In this release, only
     * <code>ApiCallRateInsight</code> is supported as an insight type.</p>
     */
    inline const InsightType& GetInsightType() const{ return m_insightType; }

    /**
     * <p>The type of insights to log on a trail. In this release, only
     * <code>ApiCallRateInsight</code> is supported as an insight type.</p>
     */
    inline bool InsightTypeHasBeenSet() const { return m_insightTypeHasBeenSet; }

    /**
     * <p>The type of insights to log on a trail. In this release, only
     * <code>ApiCallRateInsight</code> is supported as an insight type.</p>
     */
    inline void SetInsightType(const InsightType& value) { m_insightTypeHasBeenSet = true; m_insightType = value; }

    /**
     * <p>The type of insights to log on a trail. In this release, only
     * <code>ApiCallRateInsight</code> is supported as an insight type.</p>
     */
    inline void SetInsightType(InsightType&& value) { m_insightTypeHasBeenSet = true; m_insightType = std::move(value); }

    /**
     * <p>The type of insights to log on a trail. In this release, only
     * <code>ApiCallRateInsight</code> is supported as an insight type.</p>
     */
    inline InsightSelector& WithInsightType(const InsightType& value) { SetInsightType(value); return *this;}

    /**
     * <p>The type of insights to log on a trail. In this release, only
     * <code>ApiCallRateInsight</code> is supported as an insight type.</p>
     */
    inline InsightSelector& WithInsightType(InsightType&& value) { SetInsightType(std::move(value)); return *this;}

  private:

    InsightType m_insightType;
    bool m_insightTypeHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
