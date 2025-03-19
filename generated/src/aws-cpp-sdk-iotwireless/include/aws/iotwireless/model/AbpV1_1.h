/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/SessionKeysAbpV1_1.h>
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
   * <p>ABP device object for LoRaWAN specification v1.1</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AbpV1_1">AWS
   * API Reference</a></p>
   */
  class AbpV1_1
  {
  public:
    AWS_IOTWIRELESS_API AbpV1_1() = default;
    AWS_IOTWIRELESS_API AbpV1_1(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API AbpV1_1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DevAddr value.</p>
     */
    inline const Aws::String& GetDevAddr() const { return m_devAddr; }
    inline bool DevAddrHasBeenSet() const { return m_devAddrHasBeenSet; }
    template<typename DevAddrT = Aws::String>
    void SetDevAddr(DevAddrT&& value) { m_devAddrHasBeenSet = true; m_devAddr = std::forward<DevAddrT>(value); }
    template<typename DevAddrT = Aws::String>
    AbpV1_1& WithDevAddr(DevAddrT&& value) { SetDevAddr(std::forward<DevAddrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Session keys for ABP v1.1</p>
     */
    inline const SessionKeysAbpV1_1& GetSessionKeys() const { return m_sessionKeys; }
    inline bool SessionKeysHasBeenSet() const { return m_sessionKeysHasBeenSet; }
    template<typename SessionKeysT = SessionKeysAbpV1_1>
    void SetSessionKeys(SessionKeysT&& value) { m_sessionKeysHasBeenSet = true; m_sessionKeys = std::forward<SessionKeysT>(value); }
    template<typename SessionKeysT = SessionKeysAbpV1_1>
    AbpV1_1& WithSessionKeys(SessionKeysT&& value) { SetSessionKeys(std::forward<SessionKeysT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The FCnt init value.</p>
     */
    inline int GetFCntStart() const { return m_fCntStart; }
    inline bool FCntStartHasBeenSet() const { return m_fCntStartHasBeenSet; }
    inline void SetFCntStart(int value) { m_fCntStartHasBeenSet = true; m_fCntStart = value; }
    inline AbpV1_1& WithFCntStart(int value) { SetFCntStart(value); return *this;}
    ///@}
  private:

    Aws::String m_devAddr;
    bool m_devAddrHasBeenSet = false;

    SessionKeysAbpV1_1 m_sessionKeys;
    bool m_sessionKeysHasBeenSet = false;

    int m_fCntStart{0};
    bool m_fCntStartHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
