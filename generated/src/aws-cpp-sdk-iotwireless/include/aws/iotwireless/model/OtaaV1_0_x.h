/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>OTAA device object for v1.0.x</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/OtaaV1_0_x">AWS
   * API Reference</a></p>
   */
  class OtaaV1_0_x
  {
  public:
    AWS_IOTWIRELESS_API OtaaV1_0_x() = default;
    AWS_IOTWIRELESS_API OtaaV1_0_x(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API OtaaV1_0_x& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AppKey value.</p>
     */
    inline const Aws::String& GetAppKey() const { return m_appKey; }
    inline bool AppKeyHasBeenSet() const { return m_appKeyHasBeenSet; }
    template<typename AppKeyT = Aws::String>
    void SetAppKey(AppKeyT&& value) { m_appKeyHasBeenSet = true; m_appKey = std::forward<AppKeyT>(value); }
    template<typename AppKeyT = Aws::String>
    OtaaV1_0_x& WithAppKey(AppKeyT&& value) { SetAppKey(std::forward<AppKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AppEUI value. You specify this value when using LoRaWAN versions v1.0.2
     * or v1.0.3.</p>
     */
    inline const Aws::String& GetAppEui() const { return m_appEui; }
    inline bool AppEuiHasBeenSet() const { return m_appEuiHasBeenSet; }
    template<typename AppEuiT = Aws::String>
    void SetAppEui(AppEuiT&& value) { m_appEuiHasBeenSet = true; m_appEui = std::forward<AppEuiT>(value); }
    template<typename AppEuiT = Aws::String>
    OtaaV1_0_x& WithAppEui(AppEuiT&& value) { SetAppEui(std::forward<AppEuiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JoinEUI value. You specify this value instead of the AppEUI when using
     * LoRaWAN version v1.0.4.</p>
     */
    inline const Aws::String& GetJoinEui() const { return m_joinEui; }
    inline bool JoinEuiHasBeenSet() const { return m_joinEuiHasBeenSet; }
    template<typename JoinEuiT = Aws::String>
    void SetJoinEui(JoinEuiT&& value) { m_joinEuiHasBeenSet = true; m_joinEui = std::forward<JoinEuiT>(value); }
    template<typename JoinEuiT = Aws::String>
    OtaaV1_0_x& WithJoinEui(JoinEuiT&& value) { SetJoinEui(std::forward<JoinEuiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The GenAppKey value.</p>
     */
    inline const Aws::String& GetGenAppKey() const { return m_genAppKey; }
    inline bool GenAppKeyHasBeenSet() const { return m_genAppKeyHasBeenSet; }
    template<typename GenAppKeyT = Aws::String>
    void SetGenAppKey(GenAppKeyT&& value) { m_genAppKeyHasBeenSet = true; m_genAppKey = std::forward<GenAppKeyT>(value); }
    template<typename GenAppKeyT = Aws::String>
    OtaaV1_0_x& WithGenAppKey(GenAppKeyT&& value) { SetGenAppKey(std::forward<GenAppKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appKey;
    bool m_appKeyHasBeenSet = false;

    Aws::String m_appEui;
    bool m_appEuiHasBeenSet = false;

    Aws::String m_joinEui;
    bool m_joinEuiHasBeenSet = false;

    Aws::String m_genAppKey;
    bool m_genAppKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
