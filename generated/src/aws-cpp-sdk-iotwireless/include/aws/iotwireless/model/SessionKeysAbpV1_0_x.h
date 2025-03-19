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
   * <p>Session keys for ABP v1.1</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SessionKeysAbpV1_0_x">AWS
   * API Reference</a></p>
   */
  class SessionKeysAbpV1_0_x
  {
  public:
    AWS_IOTWIRELESS_API SessionKeysAbpV1_0_x() = default;
    AWS_IOTWIRELESS_API SessionKeysAbpV1_0_x(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SessionKeysAbpV1_0_x& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The NwkSKey value.</p>
     */
    inline const Aws::String& GetNwkSKey() const { return m_nwkSKey; }
    inline bool NwkSKeyHasBeenSet() const { return m_nwkSKeyHasBeenSet; }
    template<typename NwkSKeyT = Aws::String>
    void SetNwkSKey(NwkSKeyT&& value) { m_nwkSKeyHasBeenSet = true; m_nwkSKey = std::forward<NwkSKeyT>(value); }
    template<typename NwkSKeyT = Aws::String>
    SessionKeysAbpV1_0_x& WithNwkSKey(NwkSKeyT&& value) { SetNwkSKey(std::forward<NwkSKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AppSKey value.</p>
     */
    inline const Aws::String& GetAppSKey() const { return m_appSKey; }
    inline bool AppSKeyHasBeenSet() const { return m_appSKeyHasBeenSet; }
    template<typename AppSKeyT = Aws::String>
    void SetAppSKey(AppSKeyT&& value) { m_appSKeyHasBeenSet = true; m_appSKey = std::forward<AppSKeyT>(value); }
    template<typename AppSKeyT = Aws::String>
    SessionKeysAbpV1_0_x& WithAppSKey(AppSKeyT&& value) { SetAppSKey(std::forward<AppSKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nwkSKey;
    bool m_nwkSKeyHasBeenSet = false;

    Aws::String m_appSKey;
    bool m_appSKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
