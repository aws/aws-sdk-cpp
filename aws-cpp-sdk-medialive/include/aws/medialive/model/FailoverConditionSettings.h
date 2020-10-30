/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputLossFailoverSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for one failover condition.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FailoverConditionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API FailoverConditionSettings
  {
  public:
    FailoverConditionSettings();
    FailoverConditionSettings(Aws::Utils::Json::JsonView jsonValue);
    FailoverConditionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline const InputLossFailoverSettings& GetInputLossSettings() const{ return m_inputLossSettings; }

    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline bool InputLossSettingsHasBeenSet() const { return m_inputLossSettingsHasBeenSet; }

    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline void SetInputLossSettings(const InputLossFailoverSettings& value) { m_inputLossSettingsHasBeenSet = true; m_inputLossSettings = value; }

    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline void SetInputLossSettings(InputLossFailoverSettings&& value) { m_inputLossSettingsHasBeenSet = true; m_inputLossSettings = std::move(value); }

    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline FailoverConditionSettings& WithInputLossSettings(const InputLossFailoverSettings& value) { SetInputLossSettings(value); return *this;}

    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline FailoverConditionSettings& WithInputLossSettings(InputLossFailoverSettings&& value) { SetInputLossSettings(std::move(value)); return *this;}

  private:

    InputLossFailoverSettings m_inputLossSettings;
    bool m_inputLossSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
