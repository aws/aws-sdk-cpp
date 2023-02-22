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

  class LoggingConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API LoggingConfiguration();
    AWS_CHIMESDKVOICE_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline bool GetEnableSIPLogs() const{ return m_enableSIPLogs; }

    
    inline bool EnableSIPLogsHasBeenSet() const { return m_enableSIPLogsHasBeenSet; }

    
    inline void SetEnableSIPLogs(bool value) { m_enableSIPLogsHasBeenSet = true; m_enableSIPLogs = value; }

    
    inline LoggingConfiguration& WithEnableSIPLogs(bool value) { SetEnableSIPLogs(value); return *this;}


    
    inline bool GetEnableMediaMetricLogs() const{ return m_enableMediaMetricLogs; }

    
    inline bool EnableMediaMetricLogsHasBeenSet() const { return m_enableMediaMetricLogsHasBeenSet; }

    
    inline void SetEnableMediaMetricLogs(bool value) { m_enableMediaMetricLogsHasBeenSet = true; m_enableMediaMetricLogs = value; }

    
    inline LoggingConfiguration& WithEnableMediaMetricLogs(bool value) { SetEnableMediaMetricLogs(value); return *this;}

  private:

    bool m_enableSIPLogs;
    bool m_enableSIPLogsHasBeenSet = false;

    bool m_enableMediaMetricLogs;
    bool m_enableMediaMetricLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
