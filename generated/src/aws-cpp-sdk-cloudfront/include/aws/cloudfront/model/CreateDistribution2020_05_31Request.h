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
    AWS_CLOUDFRONT_API CreateDistribution2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDistribution"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>The distribution's configuration information.</p>
     */
    inline const DistributionConfig& GetDistributionConfig() const{ return m_distributionConfig; }

    /**
     * <p>The distribution's configuration information.</p>
     */
    inline bool DistributionConfigHasBeenSet() const { return m_distributionConfigHasBeenSet; }

    /**
     * <p>The distribution's configuration information.</p>
     */
    inline void SetDistributionConfig(const DistributionConfig& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = value; }

    /**
     * <p>The distribution's configuration information.</p>
     */
    inline void SetDistributionConfig(DistributionConfig&& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = std::move(value); }

    /**
     * <p>The distribution's configuration information.</p>
     */
    inline CreateDistribution2020_05_31Request& WithDistributionConfig(const DistributionConfig& value) { SetDistributionConfig(value); return *this;}

    /**
     * <p>The distribution's configuration information.</p>
     */
    inline CreateDistribution2020_05_31Request& WithDistributionConfig(DistributionConfig&& value) { SetDistributionConfig(std::move(value)); return *this;}

  private:

    DistributionConfig m_distributionConfig;
    bool m_distributionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
