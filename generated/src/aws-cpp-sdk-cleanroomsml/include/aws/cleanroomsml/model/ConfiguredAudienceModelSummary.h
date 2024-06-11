﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_CLEANROOMSML_API ConfiguredAudienceModelSummary();
    AWS_CLEANROOMSML_API ConfiguredAudienceModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ConfiguredAudienceModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that was used to create
     * the configured audience model.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const{ return m_audienceModelArn; }
    inline bool AudienceModelArnHasBeenSet() const { return m_audienceModelArnHasBeenSet; }
    inline void SetAudienceModelArn(const Aws::String& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = value; }
    inline void SetAudienceModelArn(Aws::String&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::move(value); }
    inline void SetAudienceModelArn(const char* value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn.assign(value); }
    inline ConfiguredAudienceModelSummary& WithAudienceModelArn(const Aws::String& value) { SetAudienceModelArn(value); return *this;}
    inline ConfiguredAudienceModelSummary& WithAudienceModelArn(Aws::String&& value) { SetAudienceModelArn(std::move(value)); return *this;}
    inline ConfiguredAudienceModelSummary& WithAudienceModelArn(const char* value) { SetAudienceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that you are
     * interested in.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = value; }
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::move(value); }
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn.assign(value); }
    inline ConfiguredAudienceModelSummary& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}
    inline ConfiguredAudienceModelSummary& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}
    inline ConfiguredAudienceModelSummary& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configured audience model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline ConfiguredAudienceModelSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ConfiguredAudienceModelSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configured audience model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ConfiguredAudienceModelSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ConfiguredAudienceModelSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ConfiguredAudienceModelSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configured audience model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConfiguredAudienceModelSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConfiguredAudienceModelSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConfiguredAudienceModelSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration of the configured audience model.</p>
     */
    inline const ConfiguredAudienceModelOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const ConfiguredAudienceModelOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(ConfiguredAudienceModelOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline ConfiguredAudienceModelSummary& WithOutputConfig(const ConfiguredAudienceModelOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline ConfiguredAudienceModelSummary& WithOutputConfig(ConfiguredAudienceModelOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the configured audience model.</p>
     */
    inline const ConfiguredAudienceModelStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ConfiguredAudienceModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ConfiguredAudienceModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ConfiguredAudienceModelSummary& WithStatus(const ConfiguredAudienceModelStatus& value) { SetStatus(value); return *this;}
    inline ConfiguredAudienceModelSummary& WithStatus(ConfiguredAudienceModelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the configured audience model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline ConfiguredAudienceModelSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline ConfiguredAudienceModelSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_audienceModelArn;
    bool m_audienceModelArnHasBeenSet = false;

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConfiguredAudienceModelOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    ConfiguredAudienceModelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
