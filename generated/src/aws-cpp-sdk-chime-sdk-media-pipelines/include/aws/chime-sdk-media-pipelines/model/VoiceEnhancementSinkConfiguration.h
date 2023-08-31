/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>

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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>A static structure that contains the configuration data for a
   * <code>VoiceEnhancementSinkConfiguration</code> element.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/VoiceEnhancementSinkConfiguration">AWS
   * API Reference</a></p>
   */
  class VoiceEnhancementSinkConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceEnhancementSinkConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceEnhancementSinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceEnhancementSinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Disables the <code>VoiceEnhancementSinkConfiguration</code> element.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>Disables the <code>VoiceEnhancementSinkConfiguration</code> element.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>Disables the <code>VoiceEnhancementSinkConfiguration</code> element.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>Disables the <code>VoiceEnhancementSinkConfiguration</code> element.</p>
     */
    inline VoiceEnhancementSinkConfiguration& WithDisabled(bool value) { SetDisabled(value); return *this;}

  private:

    bool m_disabled;
    bool m_disabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
