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
    AWS_CLEANROOMSML_API UpdateConfiguredAudienceModelRequest() = default;

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
    inline const Aws::String& GetConfiguredAudienceModelArn() const { return m_configuredAudienceModelArn; }
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    void SetConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::forward<ConfiguredAudienceModelArnT>(value); }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    UpdateConfiguredAudienceModelRequest& WithConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { SetConfiguredAudienceModelArn(std::forward<ConfiguredAudienceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new output configuration.</p>
     */
    inline const ConfiguredAudienceModelOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = ConfiguredAudienceModelOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = ConfiguredAudienceModelOutputConfig>
    UpdateConfiguredAudienceModelRequest& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the new audience model that you want to
     * use.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const { return m_audienceModelArn; }
    inline bool AudienceModelArnHasBeenSet() const { return m_audienceModelArnHasBeenSet; }
    template<typename AudienceModelArnT = Aws::String>
    void SetAudienceModelArn(AudienceModelArnT&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::forward<AudienceModelArnT>(value); }
    template<typename AudienceModelArnT = Aws::String>
    UpdateConfiguredAudienceModelRequest& WithAudienceModelArn(AudienceModelArnT&& value) { SetAudienceModelArn(std::forward<AudienceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value for whether to share audience metrics.</p>
     */
    inline const Aws::Vector<SharedAudienceMetrics>& GetSharedAudienceMetrics() const { return m_sharedAudienceMetrics; }
    inline bool SharedAudienceMetricsHasBeenSet() const { return m_sharedAudienceMetricsHasBeenSet; }
    template<typename SharedAudienceMetricsT = Aws::Vector<SharedAudienceMetrics>>
    void SetSharedAudienceMetrics(SharedAudienceMetricsT&& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics = std::forward<SharedAudienceMetricsT>(value); }
    template<typename SharedAudienceMetricsT = Aws::Vector<SharedAudienceMetrics>>
    UpdateConfiguredAudienceModelRequest& WithSharedAudienceMetrics(SharedAudienceMetricsT&& value) { SetSharedAudienceMetrics(std::forward<SharedAudienceMetricsT>(value)); return *this;}
    inline UpdateConfiguredAudienceModelRequest& AddSharedAudienceMetrics(SharedAudienceMetrics value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model.</p>
     */
    inline int GetMinMatchingSeedSize() const { return m_minMatchingSeedSize; }
    inline bool MinMatchingSeedSizeHasBeenSet() const { return m_minMatchingSeedSizeHasBeenSet; }
    inline void SetMinMatchingSeedSize(int value) { m_minMatchingSeedSizeHasBeenSet = true; m_minMatchingSeedSize = value; }
    inline UpdateConfiguredAudienceModelRequest& WithMinMatchingSeedSize(int value) { SetMinMatchingSeedSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new audience size configuration.</p>
     */
    inline const AudienceSizeConfig& GetAudienceSizeConfig() const { return m_audienceSizeConfig; }
    inline bool AudienceSizeConfigHasBeenSet() const { return m_audienceSizeConfigHasBeenSet; }
    template<typename AudienceSizeConfigT = AudienceSizeConfig>
    void SetAudienceSizeConfig(AudienceSizeConfigT&& value) { m_audienceSizeConfigHasBeenSet = true; m_audienceSizeConfig = std::forward<AudienceSizeConfigT>(value); }
    template<typename AudienceSizeConfigT = AudienceSizeConfig>
    UpdateConfiguredAudienceModelRequest& WithAudienceSizeConfig(AudienceSizeConfigT&& value) { SetAudienceSizeConfig(std::forward<AudienceSizeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description of the configured audience model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConfiguredAudienceModelRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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

    int m_minMatchingSeedSize{0};
    bool m_minMatchingSeedSizeHasBeenSet = false;

    AudienceSizeConfig m_audienceSizeConfig;
    bool m_audienceSizeConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
