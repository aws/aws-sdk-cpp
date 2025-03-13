/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class GetDistributionConfigurationRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetDistributionConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDistributionConfiguration"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that you
     * want to retrieve.</p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const { return m_distributionConfigurationArn; }
    inline bool DistributionConfigurationArnHasBeenSet() const { return m_distributionConfigurationArnHasBeenSet; }
    template<typename DistributionConfigurationArnT = Aws::String>
    void SetDistributionConfigurationArn(DistributionConfigurationArnT&& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = std::forward<DistributionConfigurationArnT>(value); }
    template<typename DistributionConfigurationArnT = Aws::String>
    GetDistributionConfigurationRequest& WithDistributionConfigurationArn(DistributionConfigurationArnT&& value) { SetDistributionConfigurationArn(std::forward<DistributionConfigurationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_distributionConfigurationArn;
    bool m_distributionConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
