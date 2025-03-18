/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/DistributionConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to create a new distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateDistributionRequest">AWS
   * API Reference</a></p>
   */
  class CreateDistribution2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateDistribution2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDistribution"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The distribution's configuration information.</p>
     */
    inline const DistributionConfig& GetDistributionConfig() const { return m_distributionConfig; }
    inline bool DistributionConfigHasBeenSet() const { return m_distributionConfigHasBeenSet; }
    template<typename DistributionConfigT = DistributionConfig>
    void SetDistributionConfig(DistributionConfigT&& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = std::forward<DistributionConfigT>(value); }
    template<typename DistributionConfigT = DistributionConfig>
    CreateDistribution2020_05_31Request& WithDistributionConfig(DistributionConfigT&& value) { SetDistributionConfig(std::forward<DistributionConfigT>(value)); return *this;}
    ///@}
  private:

    DistributionConfig m_distributionConfig;
    bool m_distributionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
