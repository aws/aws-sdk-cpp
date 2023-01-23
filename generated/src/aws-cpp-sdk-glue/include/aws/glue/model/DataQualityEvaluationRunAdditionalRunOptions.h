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
   * <p>Additional run options you can specify for an evaluation run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityEvaluationRunAdditionalRunOptions">AWS
   * API Reference</a></p>
   */
  class DataQualityEvaluationRunAdditionalRunOptions
  {
  public:
    AWS_GLUE_API DataQualityEvaluationRunAdditionalRunOptions();
    AWS_GLUE_API DataQualityEvaluationRunAdditionalRunOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityEvaluationRunAdditionalRunOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether or not to enable CloudWatch metrics.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const{ return m_cloudWatchMetricsEnabled; }

    /**
     * <p>Whether or not to enable CloudWatch metrics.</p>
     */
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }

    /**
     * <p>Whether or not to enable CloudWatch metrics.</p>
     */
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }

    /**
     * <p>Whether or not to enable CloudWatch metrics.</p>
     */
    inline DataQualityEvaluationRunAdditionalRunOptions& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}


    /**
     * <p>Prefix for Amazon S3 to store results.</p>
     */
    inline const Aws::String& GetResultsS3Prefix() const{ return m_resultsS3Prefix; }

    /**
     * <p>Prefix for Amazon S3 to store results.</p>
     */
    inline bool ResultsS3PrefixHasBeenSet() const { return m_resultsS3PrefixHasBeenSet; }

    /**
     * <p>Prefix for Amazon S3 to store results.</p>
     */
    inline void SetResultsS3Prefix(const Aws::String& value) { m_resultsS3PrefixHasBeenSet = true; m_resultsS3Prefix = value; }

    /**
     * <p>Prefix for Amazon S3 to store results.</p>
     */
    inline void SetResultsS3Prefix(Aws::String&& value) { m_resultsS3PrefixHasBeenSet = true; m_resultsS3Prefix = std::move(value); }

    /**
     * <p>Prefix for Amazon S3 to store results.</p>
     */
    inline void SetResultsS3Prefix(const char* value) { m_resultsS3PrefixHasBeenSet = true; m_resultsS3Prefix.assign(value); }

    /**
     * <p>Prefix for Amazon S3 to store results.</p>
     */
    inline DataQualityEvaluationRunAdditionalRunOptions& WithResultsS3Prefix(const Aws::String& value) { SetResultsS3Prefix(value); return *this;}

    /**
     * <p>Prefix for Amazon S3 to store results.</p>
     */
    inline DataQualityEvaluationRunAdditionalRunOptions& WithResultsS3Prefix(Aws::String&& value) { SetResultsS3Prefix(std::move(value)); return *this;}

    /**
     * <p>Prefix for Amazon S3 to store results.</p>
     */
    inline DataQualityEvaluationRunAdditionalRunOptions& WithResultsS3Prefix(const char* value) { SetResultsS3Prefix(value); return *this;}

  private:

    bool m_cloudWatchMetricsEnabled;
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    Aws::String m_resultsS3Prefix;
    bool m_resultsS3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
