/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The request to create a new distribution with tags.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateDistributionWithTagsRequest">AWS
   * API Reference</a></p>
   */
  class CreateDistributionWithTags2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateDistributionWithTags2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDistributionWithTags"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The distribution's configuration information.</p>
     */
    inline const DistributionConfigWithTags& GetDistributionConfigWithTags() const { return m_distributionConfigWithTags; }
    inline bool DistributionConfigWithTagsHasBeenSet() const { return m_distributionConfigWithTagsHasBeenSet; }
    template<typename DistributionConfigWithTagsT = DistributionConfigWithTags>
    void SetDistributionConfigWithTags(DistributionConfigWithTagsT&& value) { m_distributionConfigWithTagsHasBeenSet = true; m_distributionConfigWithTags = std::forward<DistributionConfigWithTagsT>(value); }
    template<typename DistributionConfigWithTagsT = DistributionConfigWithTags>
    CreateDistributionWithTags2020_05_31Request& WithDistributionConfigWithTags(DistributionConfigWithTagsT&& value) { SetDistributionConfigWithTags(std::forward<DistributionConfigWithTagsT>(value)); return *this;}
    ///@}
  private:

    DistributionConfigWithTags m_distributionConfigWithTags;
    bool m_distributionConfigWithTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
