/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/MetricTransformation.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutMetricFilterRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutMetricFilterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMetricFilter"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    PutMetricFilterRequest& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the metric filter.</p>
     */
    inline const Aws::String& GetFilterName() const { return m_filterName; }
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
    template<typename FilterNameT = Aws::String>
    void SetFilterName(FilterNameT&& value) { m_filterNameHasBeenSet = true; m_filterName = std::forward<FilterNameT>(value); }
    template<typename FilterNameT = Aws::String>
    PutMetricFilterRequest& WithFilterName(FilterNameT&& value) { SetFilterName(std::forward<FilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter pattern for extracting metric data out of ingested log events.</p>
     */
    inline const Aws::String& GetFilterPattern() const { return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    template<typename FilterPatternT = Aws::String>
    void SetFilterPattern(FilterPatternT&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::forward<FilterPatternT>(value); }
    template<typename FilterPatternT = Aws::String>
    PutMetricFilterRequest& WithFilterPattern(FilterPatternT&& value) { SetFilterPattern(std::forward<FilterPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of information that defines how metric data gets emitted.</p>
     */
    inline const Aws::Vector<MetricTransformation>& GetMetricTransformations() const { return m_metricTransformations; }
    inline bool MetricTransformationsHasBeenSet() const { return m_metricTransformationsHasBeenSet; }
    template<typename MetricTransformationsT = Aws::Vector<MetricTransformation>>
    void SetMetricTransformations(MetricTransformationsT&& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations = std::forward<MetricTransformationsT>(value); }
    template<typename MetricTransformationsT = Aws::Vector<MetricTransformation>>
    PutMetricFilterRequest& WithMetricTransformations(MetricTransformationsT&& value) { SetMetricTransformations(std::forward<MetricTransformationsT>(value)); return *this;}
    template<typename MetricTransformationsT = MetricTransformation>
    PutMetricFilterRequest& AddMetricTransformations(MetricTransformationsT&& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations.emplace_back(std::forward<MetricTransformationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This parameter is valid only for log groups that have an active log
     * transformer. For more information about log transformers, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutTransformer.html">PutTransformer</a>.</p>
     * <p>If the log group uses either a log-group level or account-level transformer,
     * and you specify <code>true</code>, the metric filter will be applied on the
     * transformed version of the log events instead of the original ingested log
     * events.</p>
     */
    inline bool GetApplyOnTransformedLogs() const { return m_applyOnTransformedLogs; }
    inline bool ApplyOnTransformedLogsHasBeenSet() const { return m_applyOnTransformedLogsHasBeenSet; }
    inline void SetApplyOnTransformedLogs(bool value) { m_applyOnTransformedLogsHasBeenSet = true; m_applyOnTransformedLogs = value; }
    inline PutMetricFilterRequest& WithApplyOnTransformedLogs(bool value) { SetApplyOnTransformedLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter expression that specifies which log events should be processed by
     * this metric filter based on system fields such as source account and source
     * region. Uses selection criteria syntax with operators like <code>=</code>,
     * <code>!=</code>, <code>AND</code>, <code>OR</code>, <code>IN</code>, <code>NOT
     * IN</code>. Example: <code>@aws.region = "us-east-1"</code> or <code>@aws.account
     * IN ["123456789012", "987654321098"]</code>. Maximum length: 2000 characters.</p>
     */
    inline const Aws::String& GetFieldSelectionCriteria() const { return m_fieldSelectionCriteria; }
    inline bool FieldSelectionCriteriaHasBeenSet() const { return m_fieldSelectionCriteriaHasBeenSet; }
    template<typename FieldSelectionCriteriaT = Aws::String>
    void SetFieldSelectionCriteria(FieldSelectionCriteriaT&& value) { m_fieldSelectionCriteriaHasBeenSet = true; m_fieldSelectionCriteria = std::forward<FieldSelectionCriteriaT>(value); }
    template<typename FieldSelectionCriteriaT = Aws::String>
    PutMetricFilterRequest& WithFieldSelectionCriteria(FieldSelectionCriteriaT&& value) { SetFieldSelectionCriteria(std::forward<FieldSelectionCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of system fields to emit as additional dimensions in the generated
     * metrics. Valid values are <code>@aws.account</code> and
     * <code>@aws.region</code>. These dimensions help identify the source of
     * centralized log data and count toward the total dimension limit for metric
     * filters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmitSystemFieldDimensions() const { return m_emitSystemFieldDimensions; }
    inline bool EmitSystemFieldDimensionsHasBeenSet() const { return m_emitSystemFieldDimensionsHasBeenSet; }
    template<typename EmitSystemFieldDimensionsT = Aws::Vector<Aws::String>>
    void SetEmitSystemFieldDimensions(EmitSystemFieldDimensionsT&& value) { m_emitSystemFieldDimensionsHasBeenSet = true; m_emitSystemFieldDimensions = std::forward<EmitSystemFieldDimensionsT>(value); }
    template<typename EmitSystemFieldDimensionsT = Aws::Vector<Aws::String>>
    PutMetricFilterRequest& WithEmitSystemFieldDimensions(EmitSystemFieldDimensionsT&& value) { SetEmitSystemFieldDimensions(std::forward<EmitSystemFieldDimensionsT>(value)); return *this;}
    template<typename EmitSystemFieldDimensionsT = Aws::String>
    PutMetricFilterRequest& AddEmitSystemFieldDimensions(EmitSystemFieldDimensionsT&& value) { m_emitSystemFieldDimensionsHasBeenSet = true; m_emitSystemFieldDimensions.emplace_back(std::forward<EmitSystemFieldDimensionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::Vector<MetricTransformation> m_metricTransformations;
    bool m_metricTransformationsHasBeenSet = false;

    bool m_applyOnTransformedLogs{false};
    bool m_applyOnTransformedLogsHasBeenSet = false;

    Aws::String m_fieldSelectionCriteria;
    bool m_fieldSelectionCriteriaHasBeenSet = false;

    Aws::Vector<Aws::String> m_emitSystemFieldDimensions;
    bool m_emitSystemFieldDimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
