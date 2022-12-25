/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The LoRaWAN information used with the multicast session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANMulticastSession">AWS
   * API Reference</a></p>
   */
  class LoRaWANMulticastSession
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANMulticastSession();
    AWS_IOTWIRELESS_API LoRaWANMulticastSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANMulticastSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetDlDr() const{ return m_dlDr; }

    
    inline bool DlDrHasBeenSet() const { return m_dlDrHasBeenSet; }

    
    inline void SetDlDr(int value) { m_dlDrHasBeenSet = true; m_dlDr = value; }

    
    inline LoRaWANMulticastSession& WithDlDr(int value) { SetDlDr(value); return *this;}


    
    inline int GetDlFreq() const{ return m_dlFreq; }

    
    inline bool DlFreqHasBeenSet() const { return m_dlFreqHasBeenSet; }

    
    inline void SetDlFreq(int value) { m_dlFreqHasBeenSet = true; m_dlFreq = value; }

    
    inline LoRaWANMulticastSession& WithDlFreq(int value) { SetDlFreq(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetSessionStartTime() const{ return m_sessionStartTime; }

    
    inline bool SessionStartTimeHasBeenSet() const { return m_sessionStartTimeHasBeenSet; }

    
    inline void SetSessionStartTime(const Aws::Utils::DateTime& value) { m_sessionStartTimeHasBeenSet = true; m_sessionStartTime = value; }

    
    inline void SetSessionStartTime(Aws::Utils::DateTime&& value) { m_sessionStartTimeHasBeenSet = true; m_sessionStartTime = std::move(value); }

    
    inline LoRaWANMulticastSession& WithSessionStartTime(const Aws::Utils::DateTime& value) { SetSessionStartTime(value); return *this;}

    
    inline LoRaWANMulticastSession& WithSessionStartTime(Aws::Utils::DateTime&& value) { SetSessionStartTime(std::move(value)); return *this;}


    
    inline int GetSessionTimeout() const{ return m_sessionTimeout; }

    
    inline bool SessionTimeoutHasBeenSet() const { return m_sessionTimeoutHasBeenSet; }

    
    inline void SetSessionTimeout(int value) { m_sessionTimeoutHasBeenSet = true; m_sessionTimeout = value; }

    
    inline LoRaWANMulticastSession& WithSessionTimeout(int value) { SetSessionTimeout(value); return *this;}

  private:

    int m_dlDr;
    bool m_dlDrHasBeenSet = false;

    int m_dlFreq;
    bool m_dlFreqHasBeenSet = false;

    Aws::Utils::DateTime m_sessionStartTime;
    bool m_sessionStartTimeHasBeenSet = false;

    int m_sessionTimeout;
    bool m_sessionTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
