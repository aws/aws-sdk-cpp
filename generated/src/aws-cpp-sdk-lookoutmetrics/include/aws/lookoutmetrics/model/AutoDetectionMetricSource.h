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
    AWS_LOOKOUTMETRICS_API AutoDetectionMetricSource() = default;
    AWS_LOOKOUTMETRICS_API AutoDetectionMetricSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AutoDetectionMetricSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source's source config.</p>
     */
    inline const AutoDetectionS3SourceConfig& GetS3SourceConfig() const { return m_s3SourceConfig; }
    inline bool S3SourceConfigHasBeenSet() const { return m_s3SourceConfigHasBeenSet; }
    template<typename S3SourceConfigT = AutoDetectionS3SourceConfig>
    void SetS3SourceConfig(S3SourceConfigT&& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = std::forward<S3SourceConfigT>(value); }
    template<typename S3SourceConfigT = AutoDetectionS3SourceConfig>
    AutoDetectionMetricSource& WithS3SourceConfig(S3SourceConfigT&& value) { SetS3SourceConfig(std::forward<S3SourceConfigT>(value)); return *this;}
    ///@}
  private:

    AutoDetectionS3SourceConfig m_s3SourceConfig;
    bool m_s3SourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
