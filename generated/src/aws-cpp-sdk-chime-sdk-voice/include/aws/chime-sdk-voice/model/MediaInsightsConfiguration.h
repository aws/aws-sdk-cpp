/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The configuration for a call analytics task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/MediaInsightsConfiguration">AWS
   * API Reference</a></p>
   */
  class MediaInsightsConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API MediaInsightsConfiguration() = default;
    AWS_CHIMESDKVOICE_API MediaInsightsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API MediaInsightsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Denotes the configuration as enabled or disabled.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline MediaInsightsConfiguration& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration's ARN.</p>
     */
    inline const Aws::String& GetConfigurationArn() const { return m_configurationArn; }
    inline bool ConfigurationArnHasBeenSet() const { return m_configurationArnHasBeenSet; }
    template<typename ConfigurationArnT = Aws::String>
    void SetConfigurationArn(ConfigurationArnT&& value) { m_configurationArnHasBeenSet = true; m_configurationArn = std::forward<ConfigurationArnT>(value); }
    template<typename ConfigurationArnT = Aws::String>
    MediaInsightsConfiguration& WithConfigurationArn(ConfigurationArnT&& value) { SetConfigurationArn(std::forward<ConfigurationArnT>(value)); return *this;}
    ///@}
  private:

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;

    Aws::String m_configurationArn;
    bool m_configurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
