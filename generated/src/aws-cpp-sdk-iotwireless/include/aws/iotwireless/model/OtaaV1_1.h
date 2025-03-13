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
   * <p>OTAA device object for v1.1</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/OtaaV1_1">AWS
   * API Reference</a></p>
   */
  class OtaaV1_1
  {
  public:
    AWS_IOTWIRELESS_API OtaaV1_1() = default;
    AWS_IOTWIRELESS_API OtaaV1_1(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API OtaaV1_1& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    OtaaV1_1& WithAppKey(AppKeyT&& value) { SetAppKey(std::forward<AppKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NwkKey value.</p>
     */
    inline const Aws::String& GetNwkKey() const { return m_nwkKey; }
    inline bool NwkKeyHasBeenSet() const { return m_nwkKeyHasBeenSet; }
    template<typename NwkKeyT = Aws::String>
    void SetNwkKey(NwkKeyT&& value) { m_nwkKeyHasBeenSet = true; m_nwkKey = std::forward<NwkKeyT>(value); }
    template<typename NwkKeyT = Aws::String>
    OtaaV1_1& WithNwkKey(NwkKeyT&& value) { SetNwkKey(std::forward<NwkKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JoinEUI value.</p>
     */
    inline const Aws::String& GetJoinEui() const { return m_joinEui; }
    inline bool JoinEuiHasBeenSet() const { return m_joinEuiHasBeenSet; }
    template<typename JoinEuiT = Aws::String>
    void SetJoinEui(JoinEuiT&& value) { m_joinEuiHasBeenSet = true; m_joinEui = std::forward<JoinEuiT>(value); }
    template<typename JoinEuiT = Aws::String>
    OtaaV1_1& WithJoinEui(JoinEuiT&& value) { SetJoinEui(std::forward<JoinEuiT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appKey;
    bool m_appKeyHasBeenSet = false;

    Aws::String m_nwkKey;
    bool m_nwkKeyHasBeenSet = false;

    Aws::String m_joinEui;
    bool m_joinEuiHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
