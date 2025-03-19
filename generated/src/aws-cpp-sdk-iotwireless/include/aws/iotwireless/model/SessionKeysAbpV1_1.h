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
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SessionKeysAbpV1_1">AWS
   * API Reference</a></p>
   */
  class SessionKeysAbpV1_1
  {
  public:
    AWS_IOTWIRELESS_API SessionKeysAbpV1_1() = default;
    AWS_IOTWIRELESS_API SessionKeysAbpV1_1(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SessionKeysAbpV1_1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The FNwkSIntKey value.</p>
     */
    inline const Aws::String& GetFNwkSIntKey() const { return m_fNwkSIntKey; }
    inline bool FNwkSIntKeyHasBeenSet() const { return m_fNwkSIntKeyHasBeenSet; }
    template<typename FNwkSIntKeyT = Aws::String>
    void SetFNwkSIntKey(FNwkSIntKeyT&& value) { m_fNwkSIntKeyHasBeenSet = true; m_fNwkSIntKey = std::forward<FNwkSIntKeyT>(value); }
    template<typename FNwkSIntKeyT = Aws::String>
    SessionKeysAbpV1_1& WithFNwkSIntKey(FNwkSIntKeyT&& value) { SetFNwkSIntKey(std::forward<FNwkSIntKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SNwkSIntKey value.</p>
     */
    inline const Aws::String& GetSNwkSIntKey() const { return m_sNwkSIntKey; }
    inline bool SNwkSIntKeyHasBeenSet() const { return m_sNwkSIntKeyHasBeenSet; }
    template<typename SNwkSIntKeyT = Aws::String>
    void SetSNwkSIntKey(SNwkSIntKeyT&& value) { m_sNwkSIntKeyHasBeenSet = true; m_sNwkSIntKey = std::forward<SNwkSIntKeyT>(value); }
    template<typename SNwkSIntKeyT = Aws::String>
    SessionKeysAbpV1_1& WithSNwkSIntKey(SNwkSIntKeyT&& value) { SetSNwkSIntKey(std::forward<SNwkSIntKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NwkSEncKey value.</p>
     */
    inline const Aws::String& GetNwkSEncKey() const { return m_nwkSEncKey; }
    inline bool NwkSEncKeyHasBeenSet() const { return m_nwkSEncKeyHasBeenSet; }
    template<typename NwkSEncKeyT = Aws::String>
    void SetNwkSEncKey(NwkSEncKeyT&& value) { m_nwkSEncKeyHasBeenSet = true; m_nwkSEncKey = std::forward<NwkSEncKeyT>(value); }
    template<typename NwkSEncKeyT = Aws::String>
    SessionKeysAbpV1_1& WithNwkSEncKey(NwkSEncKeyT&& value) { SetNwkSEncKey(std::forward<NwkSEncKeyT>(value)); return *this;}
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
    SessionKeysAbpV1_1& WithAppSKey(AppSKeyT&& value) { SetAppSKey(std::forward<AppSKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fNwkSIntKey;
    bool m_fNwkSIntKeyHasBeenSet = false;

    Aws::String m_sNwkSIntKey;
    bool m_sNwkSIntKeyHasBeenSet = false;

    Aws::String m_nwkSEncKey;
    bool m_nwkSEncKeyHasBeenSet = false;

    Aws::String m_appSKey;
    bool m_appSKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
