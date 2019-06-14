/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateStreamingDistributionWithTagsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CreateStreamingDistributionWithTags2019_03_26Request : public CloudFrontRequest
  {
  public:
    CreateStreamingDistributionWithTags2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamingDistributionWithTags"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The streaming distribution's configuration information. </p>
     */
    inline const StreamingDistributionConfigWithTags& GetStreamingDistributionConfigWithTags() const{ return m_streamingDistributionConfigWithTags; }

    /**
     * <p> The streaming distribution's configuration information. </p>
     */
    inline bool StreamingDistributionConfigWithTagsHasBeenSet() const { return m_streamingDistributionConfigWithTagsHasBeenSet; }

    /**
     * <p> The streaming distribution's configuration information. </p>
     */
    inline void SetStreamingDistributionConfigWithTags(const StreamingDistributionConfigWithTags& value) { m_streamingDistributionConfigWithTagsHasBeenSet = true; m_streamingDistributionConfigWithTags = value; }

    /**
     * <p> The streaming distribution's configuration information. </p>
     */
    inline void SetStreamingDistributionConfigWithTags(StreamingDistributionConfigWithTags&& value) { m_streamingDistributionConfigWithTagsHasBeenSet = true; m_streamingDistributionConfigWithTags = std::move(value); }

    /**
     * <p> The streaming distribution's configuration information. </p>
     */
    inline CreateStreamingDistributionWithTags2019_03_26Request& WithStreamingDistributionConfigWithTags(const StreamingDistributionConfigWithTags& value) { SetStreamingDistributionConfigWithTags(value); return *this;}

    /**
     * <p> The streaming distribution's configuration information. </p>
     */
    inline CreateStreamingDistributionWithTags2019_03_26Request& WithStreamingDistributionConfigWithTags(StreamingDistributionConfigWithTags&& value) { SetStreamingDistributionConfigWithTags(std::move(value)); return *this;}

  private:

    StreamingDistributionConfigWithTags m_streamingDistributionConfigWithTags;
    bool m_streamingDistributionConfigWithTagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
