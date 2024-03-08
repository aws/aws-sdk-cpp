/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/AudienceSizeConfig.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/SharedAudienceMetrics.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class UpdateConfiguredAudienceModelRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API UpdateConfiguredAudienceModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguredAudienceModel"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the new audience model that you want to
     * use.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const{ return m_audienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new audience model that you want to
     * use.</p>
     */
    inline bool AudienceModelArnHasBeenSet() const { return m_audienceModelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new audience model that you want to
     * use.</p>
     */
    inline void SetAudienceModelArn(const Aws::String& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new audience model that you want to
     * use.</p>
     */
    inline void SetAudienceModelArn(Aws::String&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new audience model that you want to
     * use.</p>
     */
    inline void SetAudienceModelArn(const char* value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new audience model that you want to
     * use.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithAudienceModelArn(const Aws::String& value) { SetAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new audience model that you want to
     * use.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithAudienceModelArn(Aws::String&& value) { SetAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new audience model that you want to
     * use.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithAudienceModelArn(const char* value) { SetAudienceModelArn(value); return *this;}


    /**
     * <p>The new audience size configuration.</p>
     */
    inline const AudienceSizeConfig& GetAudienceSizeConfig() const{ return m_audienceSizeConfig; }

    /**
     * <p>The new audience size configuration.</p>
     */
    inline bool AudienceSizeConfigHasBeenSet() const { return m_audienceSizeConfigHasBeenSet; }

    /**
     * <p>The new audience size configuration.</p>
     */
    inline void SetAudienceSizeConfig(const AudienceSizeConfig& value) { m_audienceSizeConfigHasBeenSet = true; m_audienceSizeConfig = value; }

    /**
     * <p>The new audience size configuration.</p>
     */
    inline void SetAudienceSizeConfig(AudienceSizeConfig&& value) { m_audienceSizeConfigHasBeenSet = true; m_audienceSizeConfig = std::move(value); }

    /**
     * <p>The new audience size configuration.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithAudienceSizeConfig(const AudienceSizeConfig& value) { SetAudienceSizeConfig(value); return *this;}

    /**
     * <p>The new audience size configuration.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithAudienceSizeConfig(AudienceSizeConfig&& value) { SetAudienceSizeConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you want
     * to update.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you want
     * to update.</p>
     */
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you want
     * to update.</p>
     */
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you want
     * to update.</p>
     */
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you want
     * to update.</p>
     */
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you want
     * to update.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you want
     * to update.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you want
     * to update.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}


    /**
     * <p>The new description of the configured audience model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description of the configured audience model.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description of the configured audience model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description of the configured audience model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description of the configured audience model.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description of the configured audience model.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description of the configured audience model.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description of the configured audience model.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model.</p>
     */
    inline int GetMinMatchingSeedSize() const{ return m_minMatchingSeedSize; }

    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model.</p>
     */
    inline bool MinMatchingSeedSizeHasBeenSet() const { return m_minMatchingSeedSizeHasBeenSet; }

    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model.</p>
     */
    inline void SetMinMatchingSeedSize(int value) { m_minMatchingSeedSizeHasBeenSet = true; m_minMatchingSeedSize = value; }

    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithMinMatchingSeedSize(int value) { SetMinMatchingSeedSize(value); return *this;}


    /**
     * <p>The new output configuration.</p>
     */
    inline const ConfiguredAudienceModelOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The new output configuration.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>The new output configuration.</p>
     */
    inline void SetOutputConfig(const ConfiguredAudienceModelOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>The new output configuration.</p>
     */
    inline void SetOutputConfig(ConfiguredAudienceModelOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>The new output configuration.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithOutputConfig(const ConfiguredAudienceModelOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The new output configuration.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithOutputConfig(ConfiguredAudienceModelOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The new value for whether to share audience metrics.</p>
     */
    inline const Aws::Vector<SharedAudienceMetrics>& GetSharedAudienceMetrics() const{ return m_sharedAudienceMetrics; }

    /**
     * <p>The new value for whether to share audience metrics.</p>
     */
    inline bool SharedAudienceMetricsHasBeenSet() const { return m_sharedAudienceMetricsHasBeenSet; }

    /**
     * <p>The new value for whether to share audience metrics.</p>
     */
    inline void SetSharedAudienceMetrics(const Aws::Vector<SharedAudienceMetrics>& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics = value; }

    /**
     * <p>The new value for whether to share audience metrics.</p>
     */
    inline void SetSharedAudienceMetrics(Aws::Vector<SharedAudienceMetrics>&& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics = std::move(value); }

    /**
     * <p>The new value for whether to share audience metrics.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithSharedAudienceMetrics(const Aws::Vector<SharedAudienceMetrics>& value) { SetSharedAudienceMetrics(value); return *this;}

    /**
     * <p>The new value for whether to share audience metrics.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& WithSharedAudienceMetrics(Aws::Vector<SharedAudienceMetrics>&& value) { SetSharedAudienceMetrics(std::move(value)); return *this;}

    /**
     * <p>The new value for whether to share audience metrics.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& AddSharedAudienceMetrics(const SharedAudienceMetrics& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics.push_back(value); return *this; }

    /**
     * <p>The new value for whether to share audience metrics.</p>
     */
    inline UpdateConfiguredAudienceModelRequest& AddSharedAudienceMetrics(SharedAudienceMetrics&& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_audienceModelArn;
    bool m_audienceModelArnHasBeenSet = false;

    AudienceSizeConfig m_audienceSizeConfig;
    bool m_audienceSizeConfigHasBeenSet = false;

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_minMatchingSeedSize;
    bool m_minMatchingSeedSizeHasBeenSet = false;

    ConfiguredAudienceModelOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::Vector<SharedAudienceMetrics> m_sharedAudienceMetrics;
    bool m_sharedAudienceMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
