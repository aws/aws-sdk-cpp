/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/lookoutmetrics/model/SampleDataS3SourceConfig.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class GetSampleDataRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API GetSampleDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSampleData"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    /**
     * <p>A datasource bucket in Amazon S3.</p>
     */
    inline const SampleDataS3SourceConfig& GetS3SourceConfig() const{ return m_s3SourceConfig; }

    /**
     * <p>A datasource bucket in Amazon S3.</p>
     */
    inline bool S3SourceConfigHasBeenSet() const { return m_s3SourceConfigHasBeenSet; }

    /**
     * <p>A datasource bucket in Amazon S3.</p>
     */
    inline void SetS3SourceConfig(const SampleDataS3SourceConfig& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = value; }

    /**
     * <p>A datasource bucket in Amazon S3.</p>
     */
    inline void SetS3SourceConfig(SampleDataS3SourceConfig&& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = std::move(value); }

    /**
     * <p>A datasource bucket in Amazon S3.</p>
     */
    inline GetSampleDataRequest& WithS3SourceConfig(const SampleDataS3SourceConfig& value) { SetS3SourceConfig(value); return *this;}

    /**
     * <p>A datasource bucket in Amazon S3.</p>
     */
    inline GetSampleDataRequest& WithS3SourceConfig(SampleDataS3SourceConfig&& value) { SetS3SourceConfig(std::move(value)); return *this;}

  private:

    SampleDataS3SourceConfig m_s3SourceConfig;
    bool m_s3SourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
