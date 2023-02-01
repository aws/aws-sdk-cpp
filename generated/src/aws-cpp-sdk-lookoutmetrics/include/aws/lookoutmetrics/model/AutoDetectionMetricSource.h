/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/AutoDetectionS3SourceConfig.h>
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
   * <p>An auto detection metric source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AutoDetectionMetricSource">AWS
   * API Reference</a></p>
   */
  class AutoDetectionMetricSource
  {
  public:
    AWS_LOOKOUTMETRICS_API AutoDetectionMetricSource();
    AWS_LOOKOUTMETRICS_API AutoDetectionMetricSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AutoDetectionMetricSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source's source config.</p>
     */
    inline const AutoDetectionS3SourceConfig& GetS3SourceConfig() const{ return m_s3SourceConfig; }

    /**
     * <p>The source's source config.</p>
     */
    inline bool S3SourceConfigHasBeenSet() const { return m_s3SourceConfigHasBeenSet; }

    /**
     * <p>The source's source config.</p>
     */
    inline void SetS3SourceConfig(const AutoDetectionS3SourceConfig& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = value; }

    /**
     * <p>The source's source config.</p>
     */
    inline void SetS3SourceConfig(AutoDetectionS3SourceConfig&& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = std::move(value); }

    /**
     * <p>The source's source config.</p>
     */
    inline AutoDetectionMetricSource& WithS3SourceConfig(const AutoDetectionS3SourceConfig& value) { SetS3SourceConfig(value); return *this;}

    /**
     * <p>The source's source config.</p>
     */
    inline AutoDetectionMetricSource& WithS3SourceConfig(AutoDetectionS3SourceConfig&& value) { SetS3SourceConfig(std::move(value)); return *this;}

  private:

    AutoDetectionS3SourceConfig m_s3SourceConfig;
    bool m_s3SourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
