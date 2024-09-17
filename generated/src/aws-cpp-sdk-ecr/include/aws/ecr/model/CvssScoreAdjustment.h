/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>Details on adjustments Amazon Inspector made to the CVSS score for a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CvssScoreAdjustment">AWS
   * API Reference</a></p>
   */
  class CvssScoreAdjustment
  {
  public:
    AWS_ECR_API CvssScoreAdjustment();
    AWS_ECR_API CvssScoreAdjustment(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API CvssScoreAdjustment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric used to adjust the CVSS score.</p>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }
    inline CvssScoreAdjustment& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}
    inline CvssScoreAdjustment& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}
    inline CvssScoreAdjustment& WithMetric(const char* value) { SetMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the CVSS score has been adjustment.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline CvssScoreAdjustment& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline CvssScoreAdjustment& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline CvssScoreAdjustment& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
