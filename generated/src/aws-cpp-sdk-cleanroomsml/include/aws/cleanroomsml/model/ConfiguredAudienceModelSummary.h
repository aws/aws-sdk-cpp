/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelOutputConfig.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Information about the configured audience model.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ConfiguredAudienceModelSummary">AWS
   * API Reference</a></p>
   */
  class ConfiguredAudienceModelSummary
  {
  public:
    AWS_CLEANROOMSML_API ConfiguredAudienceModelSummary() = default;
    AWS_CLEANROOMSML_API ConfiguredAudienceModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ConfiguredAudienceModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the configured audience model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ConfiguredAudienceModelSummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the configured audience model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    ConfiguredAudienceModelSummary& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configured audience model.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConfiguredAudienceModelSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that was used to create
     * the configured audience model.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const { return m_audienceModelArn; }
    inline bool AudienceModelArnHasBeenSet() const { return m_audienceModelArnHasBeenSet; }
    template<typename AudienceModelArnT = Aws::String>
    void SetAudienceModelArn(AudienceModelArnT&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::forward<AudienceModelArnT>(value); }
    template<typename AudienceModelArnT = Aws::String>
    ConfiguredAudienceModelSummary& WithAudienceModelArn(AudienceModelArnT&& value) { SetAudienceModelArn(std::forward<AudienceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration of the configured audience model.</p>
     */
    inline const ConfiguredAudienceModelOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = ConfiguredAudienceModelOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = ConfiguredAudienceModelOutputConfig>
    ConfiguredAudienceModelSummary& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configured audience model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConfiguredAudienceModelSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you are
     * interested in.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const { return m_configuredAudienceModelArn; }
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    void SetConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::forward<ConfiguredAudienceModelArnT>(value); }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    ConfiguredAudienceModelSummary& WithConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { SetConfiguredAudienceModelArn(std::forward<ConfiguredAudienceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the configured audience model.</p>
     */
    inline ConfiguredAudienceModelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConfiguredAudienceModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ConfiguredAudienceModelSummary& WithStatus(ConfiguredAudienceModelStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_audienceModelArn;
    bool m_audienceModelArnHasBeenSet = false;

    ConfiguredAudienceModelOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    ConfiguredAudienceModelStatus m_status{ConfiguredAudienceModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
