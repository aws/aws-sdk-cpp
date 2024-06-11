/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/Distribution.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class UpdateDistributionConfigurationRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API UpdateDistributionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDistributionConfiguration"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that you
     * want to update.</p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const{ return m_distributionConfigurationArn; }
    inline bool DistributionConfigurationArnHasBeenSet() const { return m_distributionConfigurationArnHasBeenSet; }
    inline void SetDistributionConfigurationArn(const Aws::String& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = value; }
    inline void SetDistributionConfigurationArn(Aws::String&& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = std::move(value); }
    inline void SetDistributionConfigurationArn(const char* value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn.assign(value); }
    inline UpdateDistributionConfigurationRequest& WithDistributionConfigurationArn(const Aws::String& value) { SetDistributionConfigurationArn(value); return *this;}
    inline UpdateDistributionConfigurationRequest& WithDistributionConfigurationArn(Aws::String&& value) { SetDistributionConfigurationArn(std::move(value)); return *this;}
    inline UpdateDistributionConfigurationRequest& WithDistributionConfigurationArn(const char* value) { SetDistributionConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateDistributionConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDistributionConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDistributionConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distributions of the distribution configuration.</p>
     */
    inline const Aws::Vector<Distribution>& GetDistributions() const{ return m_distributions; }
    inline bool DistributionsHasBeenSet() const { return m_distributionsHasBeenSet; }
    inline void SetDistributions(const Aws::Vector<Distribution>& value) { m_distributionsHasBeenSet = true; m_distributions = value; }
    inline void SetDistributions(Aws::Vector<Distribution>&& value) { m_distributionsHasBeenSet = true; m_distributions = std::move(value); }
    inline UpdateDistributionConfigurationRequest& WithDistributions(const Aws::Vector<Distribution>& value) { SetDistributions(value); return *this;}
    inline UpdateDistributionConfigurationRequest& WithDistributions(Aws::Vector<Distribution>&& value) { SetDistributions(std::move(value)); return *this;}
    inline UpdateDistributionConfigurationRequest& AddDistributions(const Distribution& value) { m_distributionsHasBeenSet = true; m_distributions.push_back(value); return *this; }
    inline UpdateDistributionConfigurationRequest& AddDistributions(Distribution&& value) { m_distributionsHasBeenSet = true; m_distributions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateDistributionConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateDistributionConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateDistributionConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_distributionConfigurationArn;
    bool m_distributionConfigurationArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Distribution> m_distributions;
    bool m_distributionsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
