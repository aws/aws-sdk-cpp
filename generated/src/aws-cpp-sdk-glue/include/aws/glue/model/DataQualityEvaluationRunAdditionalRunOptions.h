/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DQCompositeRuleEvaluationMethod.h>
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
   * <p>Additional run options you can specify for an evaluation run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityEvaluationRunAdditionalRunOptions">AWS
   * API Reference</a></p>
   */
  class DataQualityEvaluationRunAdditionalRunOptions
  {
  public:
    AWS_GLUE_API DataQualityEvaluationRunAdditionalRunOptions() = default;
    AWS_GLUE_API DataQualityEvaluationRunAdditionalRunOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityEvaluationRunAdditionalRunOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether or not to enable CloudWatch metrics.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const { return m_cloudWatchMetricsEnabled; }
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }
    inline DataQualityEvaluationRunAdditionalRunOptions& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prefix for Amazon S3 to store results.</p>
     */
    inline const Aws::String& GetResultsS3Prefix() const { return m_resultsS3Prefix; }
    inline bool ResultsS3PrefixHasBeenSet() const { return m_resultsS3PrefixHasBeenSet; }
    template<typename ResultsS3PrefixT = Aws::String>
    void SetResultsS3Prefix(ResultsS3PrefixT&& value) { m_resultsS3PrefixHasBeenSet = true; m_resultsS3Prefix = std::forward<ResultsS3PrefixT>(value); }
    template<typename ResultsS3PrefixT = Aws::String>
    DataQualityEvaluationRunAdditionalRunOptions& WithResultsS3Prefix(ResultsS3PrefixT&& value) { SetResultsS3Prefix(std::forward<ResultsS3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the evaluation method for composite rules in the ruleset to
     * ROW/COLUMN</p>
     */
    inline DQCompositeRuleEvaluationMethod GetCompositeRuleEvaluationMethod() const { return m_compositeRuleEvaluationMethod; }
    inline bool CompositeRuleEvaluationMethodHasBeenSet() const { return m_compositeRuleEvaluationMethodHasBeenSet; }
    inline void SetCompositeRuleEvaluationMethod(DQCompositeRuleEvaluationMethod value) { m_compositeRuleEvaluationMethodHasBeenSet = true; m_compositeRuleEvaluationMethod = value; }
    inline DataQualityEvaluationRunAdditionalRunOptions& WithCompositeRuleEvaluationMethod(DQCompositeRuleEvaluationMethod value) { SetCompositeRuleEvaluationMethod(value); return *this;}
    ///@}
  private:

    bool m_cloudWatchMetricsEnabled{false};
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    Aws::String m_resultsS3Prefix;
    bool m_resultsS3PrefixHasBeenSet = false;

    DQCompositeRuleEvaluationMethod m_compositeRuleEvaluationMethod{DQCompositeRuleEvaluationMethod::NOT_SET};
    bool m_compositeRuleEvaluationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
