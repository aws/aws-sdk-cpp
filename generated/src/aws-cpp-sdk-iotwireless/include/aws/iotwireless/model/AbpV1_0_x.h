/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/SessionKeysAbpV1_0_x.h>
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
   * <p>ABP device object for LoRaWAN specification v1.0.x</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AbpV1_0_x">AWS
   * API Reference</a></p>
   */
  class AbpV1_0_x
  {
  public:
    AWS_IOTWIRELESS_API AbpV1_0_x();
    AWS_IOTWIRELESS_API AbpV1_0_x(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API AbpV1_0_x& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DevAddr value.</p>
     */
    inline const Aws::String& GetDevAddr() const{ return m_devAddr; }
    inline bool DevAddrHasBeenSet() const { return m_devAddrHasBeenSet; }
    inline void SetDevAddr(const Aws::String& value) { m_devAddrHasBeenSet = true; m_devAddr = value; }
    inline void SetDevAddr(Aws::String&& value) { m_devAddrHasBeenSet = true; m_devAddr = std::move(value); }
    inline void SetDevAddr(const char* value) { m_devAddrHasBeenSet = true; m_devAddr.assign(value); }
    inline AbpV1_0_x& WithDevAddr(const Aws::String& value) { SetDevAddr(value); return *this;}
    inline AbpV1_0_x& WithDevAddr(Aws::String&& value) { SetDevAddr(std::move(value)); return *this;}
    inline AbpV1_0_x& WithDevAddr(const char* value) { SetDevAddr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Session keys for ABP v1.0.x</p>
     */
    inline const SessionKeysAbpV1_0_x& GetSessionKeys() const{ return m_sessionKeys; }
    inline bool SessionKeysHasBeenSet() const { return m_sessionKeysHasBeenSet; }
    inline void SetSessionKeys(const SessionKeysAbpV1_0_x& value) { m_sessionKeysHasBeenSet = true; m_sessionKeys = value; }
    inline void SetSessionKeys(SessionKeysAbpV1_0_x&& value) { m_sessionKeysHasBeenSet = true; m_sessionKeys = std::move(value); }
    inline AbpV1_0_x& WithSessionKeys(const SessionKeysAbpV1_0_x& value) { SetSessionKeys(value); return *this;}
    inline AbpV1_0_x& WithSessionKeys(SessionKeysAbpV1_0_x&& value) { SetSessionKeys(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The FCnt init value.</p>
     */
    inline int GetFCntStart() const{ return m_fCntStart; }
    inline bool FCntStartHasBeenSet() const { return m_fCntStartHasBeenSet; }
    inline void SetFCntStart(int value) { m_fCntStartHasBeenSet = true; m_fCntStart = value; }
    inline AbpV1_0_x& WithFCntStart(int value) { SetFCntStart(value); return *this;}
    ///@}
  private:

    Aws::String m_devAddr;
    bool m_devAddrHasBeenSet = false;

    SessionKeysAbpV1_0_x m_sessionKeys;
    bool m_sessionKeysHasBeenSet = false;

    int m_fCntStart;
    bool m_fCntStartHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
