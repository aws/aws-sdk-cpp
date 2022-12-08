/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HubS3StorageConfig.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateHubRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateHubRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHub"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the hub to create.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }

    /**
     * <p>The name of the hub to create.</p>
     */
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }

    /**
     * <p>The name of the hub to create.</p>
     */
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }

    /**
     * <p>The name of the hub to create.</p>
     */
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }

    /**
     * <p>The name of the hub to create.</p>
     */
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }

    /**
     * <p>The name of the hub to create.</p>
     */
    inline CreateHubRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}

    /**
     * <p>The name of the hub to create.</p>
     */
    inline CreateHubRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}

    /**
     * <p>The name of the hub to create.</p>
     */
    inline CreateHubRequest& WithHubName(const char* value) { SetHubName(value); return *this;}


    /**
     * <p>A description of the hub.</p>
     */
    inline const Aws::String& GetHubDescription() const{ return m_hubDescription; }

    /**
     * <p>A description of the hub.</p>
     */
    inline bool HubDescriptionHasBeenSet() const { return m_hubDescriptionHasBeenSet; }

    /**
     * <p>A description of the hub.</p>
     */
    inline void SetHubDescription(const Aws::String& value) { m_hubDescriptionHasBeenSet = true; m_hubDescription = value; }

    /**
     * <p>A description of the hub.</p>
     */
    inline void SetHubDescription(Aws::String&& value) { m_hubDescriptionHasBeenSet = true; m_hubDescription = std::move(value); }

    /**
     * <p>A description of the hub.</p>
     */
    inline void SetHubDescription(const char* value) { m_hubDescriptionHasBeenSet = true; m_hubDescription.assign(value); }

    /**
     * <p>A description of the hub.</p>
     */
    inline CreateHubRequest& WithHubDescription(const Aws::String& value) { SetHubDescription(value); return *this;}

    /**
     * <p>A description of the hub.</p>
     */
    inline CreateHubRequest& WithHubDescription(Aws::String&& value) { SetHubDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the hub.</p>
     */
    inline CreateHubRequest& WithHubDescription(const char* value) { SetHubDescription(value); return *this;}


    /**
     * <p>The display name of the hub.</p>
     */
    inline const Aws::String& GetHubDisplayName() const{ return m_hubDisplayName; }

    /**
     * <p>The display name of the hub.</p>
     */
    inline bool HubDisplayNameHasBeenSet() const { return m_hubDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the hub.</p>
     */
    inline void SetHubDisplayName(const Aws::String& value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName = value; }

    /**
     * <p>The display name of the hub.</p>
     */
    inline void SetHubDisplayName(Aws::String&& value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName = std::move(value); }

    /**
     * <p>The display name of the hub.</p>
     */
    inline void SetHubDisplayName(const char* value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName.assign(value); }

    /**
     * <p>The display name of the hub.</p>
     */
    inline CreateHubRequest& WithHubDisplayName(const Aws::String& value) { SetHubDisplayName(value); return *this;}

    /**
     * <p>The display name of the hub.</p>
     */
    inline CreateHubRequest& WithHubDisplayName(Aws::String&& value) { SetHubDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the hub.</p>
     */
    inline CreateHubRequest& WithHubDisplayName(const char* value) { SetHubDisplayName(value); return *this;}


    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubSearchKeywords() const{ return m_hubSearchKeywords; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline bool HubSearchKeywordsHasBeenSet() const { return m_hubSearchKeywordsHasBeenSet; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline void SetHubSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords = value; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline void SetHubSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords = std::move(value); }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline CreateHubRequest& WithHubSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubSearchKeywords(value); return *this;}

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline CreateHubRequest& WithHubSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubSearchKeywords(std::move(value)); return *this;}

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline CreateHubRequest& AddHubSearchKeywords(const Aws::String& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(value); return *this; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline CreateHubRequest& AddHubSearchKeywords(Aws::String&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(std::move(value)); return *this; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline CreateHubRequest& AddHubSearchKeywords(const char* value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(value); return *this; }


    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline const HubS3StorageConfig& GetS3StorageConfig() const{ return m_s3StorageConfig; }

    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline bool S3StorageConfigHasBeenSet() const { return m_s3StorageConfigHasBeenSet; }

    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline void SetS3StorageConfig(const HubS3StorageConfig& value) { m_s3StorageConfigHasBeenSet = true; m_s3StorageConfig = value; }

    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline void SetS3StorageConfig(HubS3StorageConfig&& value) { m_s3StorageConfigHasBeenSet = true; m_s3StorageConfig = std::move(value); }

    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline CreateHubRequest& WithS3StorageConfig(const HubS3StorageConfig& value) { SetS3StorageConfig(value); return *this;}

    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline CreateHubRequest& WithS3StorageConfig(HubS3StorageConfig&& value) { SetS3StorageConfig(std::move(value)); return *this;}


    /**
     * <p>Any tags to associate with the hub.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags to associate with the hub.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags to associate with the hub.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags to associate with the hub.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags to associate with the hub.</p>
     */
    inline CreateHubRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags to associate with the hub.</p>
     */
    inline CreateHubRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags to associate with the hub.</p>
     */
    inline CreateHubRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags to associate with the hub.</p>
     */
    inline CreateHubRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    Aws::String m_hubDescription;
    bool m_hubDescriptionHasBeenSet = false;

    Aws::String m_hubDisplayName;
    bool m_hubDisplayNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_hubSearchKeywords;
    bool m_hubSearchKeywordsHasBeenSet = false;

    HubS3StorageConfig m_s3StorageConfig;
    bool m_s3StorageConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
