/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateDistributionConfigurationRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API CreateDistributionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDistributionConfiguration"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the distribution configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the distribution configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the distribution configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the distribution configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the distribution configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the distribution configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the distribution configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the distribution configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the distribution configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the distribution configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The distributions of the distribution configuration.</p>
     */
    inline const Aws::Vector<Distribution>& GetDistributions() const{ return m_distributions; }

    /**
     * <p> The distributions of the distribution configuration.</p>
     */
    inline bool DistributionsHasBeenSet() const { return m_distributionsHasBeenSet; }

    /**
     * <p> The distributions of the distribution configuration.</p>
     */
    inline void SetDistributions(const Aws::Vector<Distribution>& value) { m_distributionsHasBeenSet = true; m_distributions = value; }

    /**
     * <p> The distributions of the distribution configuration.</p>
     */
    inline void SetDistributions(Aws::Vector<Distribution>&& value) { m_distributionsHasBeenSet = true; m_distributions = std::move(value); }

    /**
     * <p> The distributions of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithDistributions(const Aws::Vector<Distribution>& value) { SetDistributions(value); return *this;}

    /**
     * <p> The distributions of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithDistributions(Aws::Vector<Distribution>&& value) { SetDistributions(std::move(value)); return *this;}

    /**
     * <p> The distributions of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& AddDistributions(const Distribution& value) { m_distributionsHasBeenSet = true; m_distributions.push_back(value); return *this; }

    /**
     * <p> The distributions of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& AddDistributions(Distribution&& value) { m_distributionsHasBeenSet = true; m_distributions.push_back(std::move(value)); return *this; }


    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> The idempotency token of the distribution configuration.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> The idempotency token of the distribution configuration.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> The idempotency token of the distribution configuration.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> The idempotency token of the distribution configuration.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> The idempotency token of the distribution configuration.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> The idempotency token of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> The idempotency token of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> The idempotency token of the distribution configuration.</p>
     */
    inline CreateDistributionConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Distribution> m_distributions;
    bool m_distributionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
