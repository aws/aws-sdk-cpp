/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingPublishingFrequency.h>
#include <aws/guardduty/model/DataSourceConfigurations.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class CreateDetectorRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API CreateDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDetector"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>A Boolean value that specifies whether the detector is to be enabled.</p>
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * <p>A Boolean value that specifies whether the detector is to be enabled.</p>
     */
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether the detector is to be enabled.</p>
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * <p>A Boolean value that specifies whether the detector is to be enabled.</p>
     */
    inline CreateDetectorRequest& WithEnable(bool value) { SetEnable(value); return *this;}


    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateDetectorRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateDetectorRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateDetectorRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A value that specifies how frequently updated findings are exported.</p>
     */
    inline const FindingPublishingFrequency& GetFindingPublishingFrequency() const{ return m_findingPublishingFrequency; }

    /**
     * <p>A value that specifies how frequently updated findings are exported.</p>
     */
    inline bool FindingPublishingFrequencyHasBeenSet() const { return m_findingPublishingFrequencyHasBeenSet; }

    /**
     * <p>A value that specifies how frequently updated findings are exported.</p>
     */
    inline void SetFindingPublishingFrequency(const FindingPublishingFrequency& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = value; }

    /**
     * <p>A value that specifies how frequently updated findings are exported.</p>
     */
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency&& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = std::move(value); }

    /**
     * <p>A value that specifies how frequently updated findings are exported.</p>
     */
    inline CreateDetectorRequest& WithFindingPublishingFrequency(const FindingPublishingFrequency& value) { SetFindingPublishingFrequency(value); return *this;}

    /**
     * <p>A value that specifies how frequently updated findings are exported.</p>
     */
    inline CreateDetectorRequest& WithFindingPublishingFrequency(FindingPublishingFrequency&& value) { SetFindingPublishingFrequency(std::move(value)); return *this;}


    /**
     * <p>Describes which data sources will be enabled for the detector.</p>
     */
    inline const DataSourceConfigurations& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>Describes which data sources will be enabled for the detector.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>Describes which data sources will be enabled for the detector.</p>
     */
    inline void SetDataSources(const DataSourceConfigurations& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>Describes which data sources will be enabled for the detector.</p>
     */
    inline void SetDataSources(DataSourceConfigurations&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>Describes which data sources will be enabled for the detector.</p>
     */
    inline CreateDetectorRequest& WithDataSources(const DataSourceConfigurations& value) { SetDataSources(value); return *this;}

    /**
     * <p>Describes which data sources will be enabled for the detector.</p>
     */
    inline CreateDetectorRequest& WithDataSources(DataSourceConfigurations&& value) { SetDataSources(std::move(value)); return *this;}


    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline CreateDetectorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline CreateDetectorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline CreateDetectorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline CreateDetectorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline CreateDetectorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline CreateDetectorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline CreateDetectorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline CreateDetectorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be added to a new detector resource.</p>
     */
    inline CreateDetectorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    bool m_enable;
    bool m_enableHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    FindingPublishingFrequency m_findingPublishingFrequency;
    bool m_findingPublishingFrequencyHasBeenSet = false;

    DataSourceConfigurations m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
