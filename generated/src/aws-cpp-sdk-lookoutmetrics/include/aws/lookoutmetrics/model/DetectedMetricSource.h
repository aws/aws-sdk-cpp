/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/DetectedS3SourceConfig.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>An inferred data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DetectedMetricSource">AWS
   * API Reference</a></p>
   */
  class DetectedMetricSource
  {
  public:
    AWS_LOOKOUTMETRICS_API DetectedMetricSource();
    AWS_LOOKOUTMETRICS_API DetectedMetricSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedMetricSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data source's source configuration.</p>
     */
    inline const DetectedS3SourceConfig& GetS3SourceConfig() const{ return m_s3SourceConfig; }

    /**
     * <p>The data source's source configuration.</p>
     */
    inline bool S3SourceConfigHasBeenSet() const { return m_s3SourceConfigHasBeenSet; }

    /**
     * <p>The data source's source configuration.</p>
     */
    inline void SetS3SourceConfig(const DetectedS3SourceConfig& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = value; }

    /**
     * <p>The data source's source configuration.</p>
     */
    inline void SetS3SourceConfig(DetectedS3SourceConfig&& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = std::move(value); }

    /**
     * <p>The data source's source configuration.</p>
     */
    inline DetectedMetricSource& WithS3SourceConfig(const DetectedS3SourceConfig& value) { SetS3SourceConfig(value); return *this;}

    /**
     * <p>The data source's source configuration.</p>
     */
    inline DetectedMetricSource& WithS3SourceConfig(DetectedS3SourceConfig&& value) { SetS3SourceConfig(std::move(value)); return *this;}

  private:

    DetectedS3SourceConfig m_s3SourceConfig;
    bool m_s3SourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
