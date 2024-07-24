/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/AudienceSizeConfig.h>
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you want
     * to update.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = value; }
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::move(value); }
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn.assign(value); }
    inline UpdateConfiguredAudienceModelRequest& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}
    inline UpdateConfiguredAudienceModelRequest& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}
    inline UpdateConfiguredAudienceModelRequest& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new output configuration.</p>
     */
    inline const ConfiguredAudienceModelOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const ConfiguredAudienceModelOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(ConfiguredAudienceModelOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline UpdateConfiguredAudienceModelRequest& WithOutputConfig(const ConfiguredAudienceModelOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline UpdateConfiguredAudienceModelRequest& WithOutputConfig(ConfiguredAudienceModelOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the new audience model that you want to
     * use.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const{ return m_audienceModelArn; }
    inline bool AudienceModelArnHasBeenSet() const { return m_audienceModelArnHasBeenSet; }
    inline void SetAudienceModelArn(const Aws::String& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = value; }
    inline void SetAudienceModelArn(Aws::String&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::move(value); }
    inline void SetAudienceModelArn(const char* value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn.assign(value); }
    inline UpdateConfiguredAudienceModelRequest& WithAudienceModelArn(const Aws::String& value) { SetAudienceModelArn(value); return *this;}
    inline UpdateConfiguredAudienceModelRequest& WithAudienceModelArn(Aws::String&& value) { SetAudienceModelArn(std::move(value)); return *this;}
    inline UpdateConfiguredAudienceModelRequest& WithAudienceModelArn(const char* value) { SetAudienceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value for whether to share audience metrics.</p>
     */
    inline const Aws::Vector<SharedAudienceMetrics>& GetSharedAudienceMetrics() const{ return m_sharedAudienceMetrics; }
    inline bool SharedAudienceMetricsHasBeenSet() const { return m_sharedAudienceMetricsHasBeenSet; }
    inline void SetSharedAudienceMetrics(const Aws::Vector<SharedAudienceMetrics>& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics = value; }
    inline void SetSharedAudienceMetrics(Aws::Vector<SharedAudienceMetrics>&& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics = std::move(value); }
    inline UpdateConfiguredAudienceModelRequest& WithSharedAudienceMetrics(const Aws::Vector<SharedAudienceMetrics>& value) { SetSharedAudienceMetrics(value); return *this;}
    inline UpdateConfiguredAudienceModelRequest& WithSharedAudienceMetrics(Aws::Vector<SharedAudienceMetrics>&& value) { SetSharedAudienceMetrics(std::move(value)); return *this;}
    inline UpdateConfiguredAudienceModelRequest& AddSharedAudienceMetrics(const SharedAudienceMetrics& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics.push_back(value); return *this; }
    inline UpdateConfiguredAudienceModelRequest& AddSharedAudienceMetrics(SharedAudienceMetrics&& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model.</p>
     */
    inline int GetMinMatchingSeedSize() const{ return m_minMatchingSeedSize; }
    inline bool MinMatchingSeedSizeHasBeenSet() const { return m_minMatchingSeedSizeHasBeenSet; }
    inline void SetMinMatchingSeedSize(int value) { m_minMatchingSeedSizeHasBeenSet = true; m_minMatchingSeedSize = value; }
    inline UpdateConfiguredAudienceModelRequest& WithMinMatchingSeedSize(int value) { SetMinMatchingSeedSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new audience size configuration.</p>
     */
    inline const AudienceSizeConfig& GetAudienceSizeConfig() const{ return m_audienceSizeConfig; }
    inline bool AudienceSizeConfigHasBeenSet() const { return m_audienceSizeConfigHasBeenSet; }
    inline void SetAudienceSizeConfig(const AudienceSizeConfig& value) { m_audienceSizeConfigHasBeenSet = true; m_audienceSizeConfig = value; }
    inline void SetAudienceSizeConfig(AudienceSizeConfig&& value) { m_audienceSizeConfigHasBeenSet = true; m_audienceSizeConfig = std::move(value); }
    inline UpdateConfiguredAudienceModelRequest& WithAudienceSizeConfig(const AudienceSizeConfig& value) { SetAudienceSizeConfig(value); return *this;}
    inline UpdateConfiguredAudienceModelRequest& WithAudienceSizeConfig(AudienceSizeConfig&& value) { SetAudienceSizeConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description of the configured audience model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateConfiguredAudienceModelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateConfiguredAudienceModelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateConfiguredAudienceModelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    ConfiguredAudienceModelOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_audienceModelArn;
    bool m_audienceModelArnHasBeenSet = false;

    Aws::Vector<SharedAudienceMetrics> m_sharedAudienceMetrics;
    bool m_sharedAudienceMetricsHasBeenSet = false;

    int m_minMatchingSeedSize;
    bool m_minMatchingSeedSizeHasBeenSet = false;

    AudienceSizeConfig m_audienceSizeConfig;
    bool m_audienceSizeConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
