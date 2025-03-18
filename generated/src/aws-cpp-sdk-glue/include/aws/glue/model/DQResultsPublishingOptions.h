/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
   * <p>Options to configure how your data quality evaluation results are
   * published.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DQResultsPublishingOptions">AWS
   * API Reference</a></p>
   */
  class DQResultsPublishingOptions
  {
  public:
    AWS_GLUE_API DQResultsPublishingOptions() = default;
    AWS_GLUE_API DQResultsPublishingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DQResultsPublishingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The context of the evaluation.</p>
     */
    inline const Aws::String& GetEvaluationContext() const { return m_evaluationContext; }
    inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
    template<typename EvaluationContextT = Aws::String>
    void SetEvaluationContext(EvaluationContextT&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::forward<EvaluationContextT>(value); }
    template<typename EvaluationContextT = Aws::String>
    DQResultsPublishingOptions& WithEvaluationContext(EvaluationContextT&& value) { SetEvaluationContext(std::forward<EvaluationContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 prefix prepended to the results.</p>
     */
    inline const Aws::String& GetResultsS3Prefix() const { return m_resultsS3Prefix; }
    inline bool ResultsS3PrefixHasBeenSet() const { return m_resultsS3PrefixHasBeenSet; }
    template<typename ResultsS3PrefixT = Aws::String>
    void SetResultsS3Prefix(ResultsS3PrefixT&& value) { m_resultsS3PrefixHasBeenSet = true; m_resultsS3Prefix = std::forward<ResultsS3PrefixT>(value); }
    template<typename ResultsS3PrefixT = Aws::String>
    DQResultsPublishingOptions& WithResultsS3Prefix(ResultsS3PrefixT&& value) { SetResultsS3Prefix(std::forward<ResultsS3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable metrics for your data quality results.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const { return m_cloudWatchMetricsEnabled; }
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }
    inline DQResultsPublishingOptions& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable publishing for your data quality results.</p>
     */
    inline bool GetResultsPublishingEnabled() const { return m_resultsPublishingEnabled; }
    inline bool ResultsPublishingEnabledHasBeenSet() const { return m_resultsPublishingEnabledHasBeenSet; }
    inline void SetResultsPublishingEnabled(bool value) { m_resultsPublishingEnabledHasBeenSet = true; m_resultsPublishingEnabled = value; }
    inline DQResultsPublishingOptions& WithResultsPublishingEnabled(bool value) { SetResultsPublishingEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_evaluationContext;
    bool m_evaluationContextHasBeenSet = false;

    Aws::String m_resultsS3Prefix;
    bool m_resultsS3PrefixHasBeenSet = false;

    bool m_cloudWatchMetricsEnabled{false};
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    bool m_resultsPublishingEnabled{false};
    bool m_resultsPublishingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
