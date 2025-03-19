/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/RuntimeSettings.h>
#include <aws/lexv2-models/model/BuildtimeSettings.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains specifications about the generative AI capabilities from Amazon
   * Bedrock that you can turn on for your bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/GenerativeAISettings">AWS
   * API Reference</a></p>
   */
  class GenerativeAISettings
  {
  public:
    AWS_LEXMODELSV2_API GenerativeAISettings() = default;
    AWS_LEXMODELSV2_API GenerativeAISettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API GenerativeAISettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const RuntimeSettings& GetRuntimeSettings() const { return m_runtimeSettings; }
    inline bool RuntimeSettingsHasBeenSet() const { return m_runtimeSettingsHasBeenSet; }
    template<typename RuntimeSettingsT = RuntimeSettings>
    void SetRuntimeSettings(RuntimeSettingsT&& value) { m_runtimeSettingsHasBeenSet = true; m_runtimeSettings = std::forward<RuntimeSettingsT>(value); }
    template<typename RuntimeSettingsT = RuntimeSettings>
    GenerativeAISettings& WithRuntimeSettings(RuntimeSettingsT&& value) { SetRuntimeSettings(std::forward<RuntimeSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BuildtimeSettings& GetBuildtimeSettings() const { return m_buildtimeSettings; }
    inline bool BuildtimeSettingsHasBeenSet() const { return m_buildtimeSettingsHasBeenSet; }
    template<typename BuildtimeSettingsT = BuildtimeSettings>
    void SetBuildtimeSettings(BuildtimeSettingsT&& value) { m_buildtimeSettingsHasBeenSet = true; m_buildtimeSettings = std::forward<BuildtimeSettingsT>(value); }
    template<typename BuildtimeSettingsT = BuildtimeSettings>
    GenerativeAISettings& WithBuildtimeSettings(BuildtimeSettingsT&& value) { SetBuildtimeSettings(std::forward<BuildtimeSettingsT>(value)); return *this;}
    ///@}
  private:

    RuntimeSettings m_runtimeSettings;
    bool m_runtimeSettingsHasBeenSet = false;

    BuildtimeSettings m_buildtimeSettings;
    bool m_buildtimeSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
