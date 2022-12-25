/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/StreamingDistributionConfigWithTags.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to create a new streaming distribution with tags.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistributionWithTagsRequest">AWS
   * API Reference</a></p>
   */
  class CreateStreamingDistributionWithTags2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateStreamingDistributionWithTags2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamingDistributionWithTags"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline const StreamingDistributionConfigWithTags& GetStreamingDistributionConfigWithTags() const{ return m_streamingDistributionConfigWithTags; }

    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline bool StreamingDistributionConfigWithTagsHasBeenSet() const { return m_streamingDistributionConfigWithTagsHasBeenSet; }

    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline void SetStreamingDistributionConfigWithTags(const StreamingDistributionConfigWithTags& value) { m_streamingDistributionConfigWithTagsHasBeenSet = true; m_streamingDistributionConfigWithTags = value; }

    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline void SetStreamingDistributionConfigWithTags(StreamingDistributionConfigWithTags&& value) { m_streamingDistributionConfigWithTagsHasBeenSet = true; m_streamingDistributionConfigWithTags = std::move(value); }

    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline CreateStreamingDistributionWithTags2020_05_31Request& WithStreamingDistributionConfigWithTags(const StreamingDistributionConfigWithTags& value) { SetStreamingDistributionConfigWithTags(value); return *this;}

    /**
     * <p>The streaming distribution's configuration information.</p>
     */
    inline CreateStreamingDistributionWithTags2020_05_31Request& WithStreamingDistributionConfigWithTags(StreamingDistributionConfigWithTags&& value) { SetStreamingDistributionConfigWithTags(std::move(value)); return *this;}

  private:

    StreamingDistributionConfigWithTags m_streamingDistributionConfigWithTags;
    bool m_streamingDistributionConfigWithTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
