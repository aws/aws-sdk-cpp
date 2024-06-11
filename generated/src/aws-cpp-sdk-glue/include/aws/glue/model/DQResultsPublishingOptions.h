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
    AWS_GLUE_API DQResultsPublishingOptions();
    AWS_GLUE_API DQResultsPublishingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DQResultsPublishingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The context of the evaluation.</p>
     */
    inline const Aws::String& GetEvaluationContext() const{ return m_evaluationContext; }
    inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
    inline void SetEvaluationContext(const Aws::String& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = value; }
    inline void SetEvaluationContext(Aws::String&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::move(value); }
    inline void SetEvaluationContext(const char* value) { m_evaluationContextHasBeenSet = true; m_evaluationContext.assign(value); }
    inline DQResultsPublishingOptions& WithEvaluationContext(const Aws::String& value) { SetEvaluationContext(value); return *this;}
    inline DQResultsPublishingOptions& WithEvaluationContext(Aws::String&& value) { SetEvaluationContext(std::move(value)); return *this;}
    inline DQResultsPublishingOptions& WithEvaluationContext(const char* value) { SetEvaluationContext(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 prefix prepended to the results.</p>
     */
    inline const Aws::String& GetResultsS3Prefix() const{ return m_resultsS3Prefix; }
    inline bool ResultsS3PrefixHasBeenSet() const { return m_resultsS3PrefixHasBeenSet; }
    inline void SetResultsS3Prefix(const Aws::String& value) { m_resultsS3PrefixHasBeenSet = true; m_resultsS3Prefix = value; }
    inline void SetResultsS3Prefix(Aws::String&& value) { m_resultsS3PrefixHasBeenSet = true; m_resultsS3Prefix = std::move(value); }
    inline void SetResultsS3Prefix(const char* value) { m_resultsS3PrefixHasBeenSet = true; m_resultsS3Prefix.assign(value); }
    inline DQResultsPublishingOptions& WithResultsS3Prefix(const Aws::String& value) { SetResultsS3Prefix(value); return *this;}
    inline DQResultsPublishingOptions& WithResultsS3Prefix(Aws::String&& value) { SetResultsS3Prefix(std::move(value)); return *this;}
    inline DQResultsPublishingOptions& WithResultsS3Prefix(const char* value) { SetResultsS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable metrics for your data quality results.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const{ return m_cloudWatchMetricsEnabled; }
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }
    inline DQResultsPublishingOptions& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable publishing for your data quality results.</p>
     */
    inline bool GetResultsPublishingEnabled() const{ return m_resultsPublishingEnabled; }
    inline bool ResultsPublishingEnabledHasBeenSet() const { return m_resultsPublishingEnabledHasBeenSet; }
    inline void SetResultsPublishingEnabled(bool value) { m_resultsPublishingEnabledHasBeenSet = true; m_resultsPublishingEnabled = value; }
    inline DQResultsPublishingOptions& WithResultsPublishingEnabled(bool value) { SetResultsPublishingEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_evaluationContext;
    bool m_evaluationContextHasBeenSet = false;

    Aws::String m_resultsS3Prefix;
    bool m_resultsS3PrefixHasBeenSet = false;

    bool m_cloudWatchMetricsEnabled;
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    bool m_resultsPublishingEnabled;
    bool m_resultsPublishingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
