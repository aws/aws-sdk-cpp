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
#include <aws/cloudfront/model/DistributionConfigWithTags.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to create a new distribution with tags. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateDistributionWithTagsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CreateDistributionWithTags2019_03_26Request : public CloudFrontRequest
  {
  public:
    CreateDistributionWithTags2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDistributionWithTags"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The distribution's configuration information. </p>
     */
    inline const DistributionConfigWithTags& GetDistributionConfigWithTags() const{ return m_distributionConfigWithTags; }

    /**
     * <p>The distribution's configuration information. </p>
     */
    inline bool DistributionConfigWithTagsHasBeenSet() const { return m_distributionConfigWithTagsHasBeenSet; }

    /**
     * <p>The distribution's configuration information. </p>
     */
    inline void SetDistributionConfigWithTags(const DistributionConfigWithTags& value) { m_distributionConfigWithTagsHasBeenSet = true; m_distributionConfigWithTags = value; }

    /**
     * <p>The distribution's configuration information. </p>
     */
    inline void SetDistributionConfigWithTags(DistributionConfigWithTags&& value) { m_distributionConfigWithTagsHasBeenSet = true; m_distributionConfigWithTags = std::move(value); }

    /**
     * <p>The distribution's configuration information. </p>
     */
    inline CreateDistributionWithTags2019_03_26Request& WithDistributionConfigWithTags(const DistributionConfigWithTags& value) { SetDistributionConfigWithTags(value); return *this;}

    /**
     * <p>The distribution's configuration information. </p>
     */
    inline CreateDistributionWithTags2019_03_26Request& WithDistributionConfigWithTags(DistributionConfigWithTags&& value) { SetDistributionConfigWithTags(std::move(value)); return *this;}

  private:

    DistributionConfigWithTags m_distributionConfigWithTags;
    bool m_distributionConfigWithTagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
