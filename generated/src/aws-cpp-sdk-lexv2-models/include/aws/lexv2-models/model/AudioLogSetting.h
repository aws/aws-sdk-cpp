﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AudioLogDestination.h>
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
   * <p>Settings for logging audio of conversations between Amazon Lex and a user.
   * You specify whether to log audio and the Amazon S3 bucket where the audio file
   * is stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AudioLogSetting">AWS
   * API Reference</a></p>
   */
  class AudioLogSetting
  {
  public:
    AWS_LEXMODELSV2_API AudioLogSetting() = default;
    AWS_LEXMODELSV2_API AudioLogSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AudioLogSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether audio logging in enabled for the bot.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AudioLogSetting& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const AudioLogDestination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = AudioLogDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = AudioLogDestination>
    AudioLogSetting& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to enable selective conversation log capture for audio.</p>
     */
    inline bool GetSelectiveLoggingEnabled() const { return m_selectiveLoggingEnabled; }
    inline bool SelectiveLoggingEnabledHasBeenSet() const { return m_selectiveLoggingEnabledHasBeenSet; }
    inline void SetSelectiveLoggingEnabled(bool value) { m_selectiveLoggingEnabledHasBeenSet = true; m_selectiveLoggingEnabled = value; }
    inline AudioLogSetting& WithSelectiveLoggingEnabled(bool value) { SetSelectiveLoggingEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    AudioLogDestination m_destination;
    bool m_destinationHasBeenSet = false;

    bool m_selectiveLoggingEnabled{false};
    bool m_selectiveLoggingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
