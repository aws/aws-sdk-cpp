/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/StreamingDistributionConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to create a new streaming distribution.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistributionRequest">AWS
   * API Reference</a></p>
   */
  class CreateStreamingDistribution2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateStreamingDistribution2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamingDistribution"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline const StreamingDistributionConfig& GetStreamingDistributionConfig() const{ return m_streamingDistributionConfig; }

    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline bool StreamingDistributionConfigHasBeenSet() const { return m_streamingDistributionConfigHasBeenSet; }

    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline void SetStreamingDistributionConfig(const StreamingDistributionConfig& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = value; }

    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline void SetStreamingDistributionConfig(StreamingDistributionConfig&& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = std::move(value); }

    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline CreateStreamingDistribution2020_05_31Request& WithStreamingDistributionConfig(const StreamingDistributionConfig& value) { SetStreamingDistributionConfig(value); return *this;}

    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline CreateStreamingDistribution2020_05_31Request& WithStreamingDistributionConfig(StreamingDistributionConfig&& value) { SetStreamingDistributionConfig(std::move(value)); return *this;}

  private:

    StreamingDistributionConfig m_streamingDistributionConfig;
    bool m_streamingDistributionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
