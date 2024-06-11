﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>

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
   * <p>The logging configuration of a SIP media application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/SipMediaApplicationLoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class SipMediaApplicationLoggingConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API SipMediaApplicationLoggingConfiguration();
    AWS_CHIMESDKVOICE_API SipMediaApplicationLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SipMediaApplicationLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables message logging for the specified SIP media application.</p>
     */
    inline bool GetEnableSipMediaApplicationMessageLogs() const{ return m_enableSipMediaApplicationMessageLogs; }
    inline bool EnableSipMediaApplicationMessageLogsHasBeenSet() const { return m_enableSipMediaApplicationMessageLogsHasBeenSet; }
    inline void SetEnableSipMediaApplicationMessageLogs(bool value) { m_enableSipMediaApplicationMessageLogsHasBeenSet = true; m_enableSipMediaApplicationMessageLogs = value; }
    inline SipMediaApplicationLoggingConfiguration& WithEnableSipMediaApplicationMessageLogs(bool value) { SetEnableSipMediaApplicationMessageLogs(value); return *this;}
    ///@}
  private:

    bool m_enableSipMediaApplicationMessageLogs;
    bool m_enableSipMediaApplicationMessageLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
