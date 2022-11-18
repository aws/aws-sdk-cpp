/**
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

  class AWS_CHIMESDKVOICE_API LoggingConfiguration
  {
  public:
    LoggingConfiguration();
    LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline bool GetEnableSIPLogs() const{ return m_enableSIPLogs; }

    
    inline bool EnableSIPLogsHasBeenSet() const { return m_enableSIPLogsHasBeenSet; }

    
    inline void SetEnableSIPLogs(bool value) { m_enableSIPLogsHasBeenSet = true; m_enableSIPLogs = value; }

    
    inline LoggingConfiguration& WithEnableSIPLogs(bool value) { SetEnableSIPLogs(value); return *this;}

  private:

    bool m_enableSIPLogs;
    bool m_enableSIPLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
