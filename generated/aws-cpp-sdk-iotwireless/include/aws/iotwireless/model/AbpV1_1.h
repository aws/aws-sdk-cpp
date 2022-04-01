﻿/**
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
  class AWS_IOTWIRELESS_API AbpV1_1
  {
  public:
    AbpV1_1();
    AbpV1_1(Aws::Utils::Json::JsonView jsonValue);
    AbpV1_1& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DevAddr value.</p>
     */
    inline const Aws::String& GetDevAddr() const{ return m_devAddr; }

    /**
     * <p>The DevAddr value.</p>
     */
    inline bool DevAddrHasBeenSet() const { return m_devAddrHasBeenSet; }

    /**
     * <p>The DevAddr value.</p>
     */
    inline void SetDevAddr(const Aws::String& value) { m_devAddrHasBeenSet = true; m_devAddr = value; }

    /**
     * <p>The DevAddr value.</p>
     */
    inline void SetDevAddr(Aws::String&& value) { m_devAddrHasBeenSet = true; m_devAddr = std::move(value); }

    /**
     * <p>The DevAddr value.</p>
     */
    inline void SetDevAddr(const char* value) { m_devAddrHasBeenSet = true; m_devAddr.assign(value); }

    /**
     * <p>The DevAddr value.</p>
     */
    inline AbpV1_1& WithDevAddr(const Aws::String& value) { SetDevAddr(value); return *this;}

    /**
     * <p>The DevAddr value.</p>
     */
    inline AbpV1_1& WithDevAddr(Aws::String&& value) { SetDevAddr(std::move(value)); return *this;}

    /**
     * <p>The DevAddr value.</p>
     */
    inline AbpV1_1& WithDevAddr(const char* value) { SetDevAddr(value); return *this;}


    /**
     * <p>Session keys for ABP v1.1</p>
     */
    inline const SessionKeysAbpV1_1& GetSessionKeys() const{ return m_sessionKeys; }

    /**
     * <p>Session keys for ABP v1.1</p>
     */
    inline bool SessionKeysHasBeenSet() const { return m_sessionKeysHasBeenSet; }

    /**
     * <p>Session keys for ABP v1.1</p>
     */
    inline void SetSessionKeys(const SessionKeysAbpV1_1& value) { m_sessionKeysHasBeenSet = true; m_sessionKeys = value; }

    /**
     * <p>Session keys for ABP v1.1</p>
     */
    inline void SetSessionKeys(SessionKeysAbpV1_1&& value) { m_sessionKeysHasBeenSet = true; m_sessionKeys = std::move(value); }

    /**
     * <p>Session keys for ABP v1.1</p>
     */
    inline AbpV1_1& WithSessionKeys(const SessionKeysAbpV1_1& value) { SetSessionKeys(value); return *this;}

    /**
     * <p>Session keys for ABP v1.1</p>
     */
    inline AbpV1_1& WithSessionKeys(SessionKeysAbpV1_1&& value) { SetSessionKeys(std::move(value)); return *this;}

  private:

    Aws::String m_devAddr;
    bool m_devAddrHasBeenSet;

    SessionKeysAbpV1_1 m_sessionKeys;
    bool m_sessionKeysHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
