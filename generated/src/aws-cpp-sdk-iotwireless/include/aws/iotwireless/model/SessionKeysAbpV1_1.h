﻿/**
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
    AWS_IOTWIRELESS_API SessionKeysAbpV1_1();
    AWS_IOTWIRELESS_API SessionKeysAbpV1_1(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SessionKeysAbpV1_1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The FNwkSIntKey value.</p>
     */
    inline const Aws::String& GetFNwkSIntKey() const{ return m_fNwkSIntKey; }
    inline bool FNwkSIntKeyHasBeenSet() const { return m_fNwkSIntKeyHasBeenSet; }
    inline void SetFNwkSIntKey(const Aws::String& value) { m_fNwkSIntKeyHasBeenSet = true; m_fNwkSIntKey = value; }
    inline void SetFNwkSIntKey(Aws::String&& value) { m_fNwkSIntKeyHasBeenSet = true; m_fNwkSIntKey = std::move(value); }
    inline void SetFNwkSIntKey(const char* value) { m_fNwkSIntKeyHasBeenSet = true; m_fNwkSIntKey.assign(value); }
    inline SessionKeysAbpV1_1& WithFNwkSIntKey(const Aws::String& value) { SetFNwkSIntKey(value); return *this;}
    inline SessionKeysAbpV1_1& WithFNwkSIntKey(Aws::String&& value) { SetFNwkSIntKey(std::move(value)); return *this;}
    inline SessionKeysAbpV1_1& WithFNwkSIntKey(const char* value) { SetFNwkSIntKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SNwkSIntKey value.</p>
     */
    inline const Aws::String& GetSNwkSIntKey() const{ return m_sNwkSIntKey; }
    inline bool SNwkSIntKeyHasBeenSet() const { return m_sNwkSIntKeyHasBeenSet; }
    inline void SetSNwkSIntKey(const Aws::String& value) { m_sNwkSIntKeyHasBeenSet = true; m_sNwkSIntKey = value; }
    inline void SetSNwkSIntKey(Aws::String&& value) { m_sNwkSIntKeyHasBeenSet = true; m_sNwkSIntKey = std::move(value); }
    inline void SetSNwkSIntKey(const char* value) { m_sNwkSIntKeyHasBeenSet = true; m_sNwkSIntKey.assign(value); }
    inline SessionKeysAbpV1_1& WithSNwkSIntKey(const Aws::String& value) { SetSNwkSIntKey(value); return *this;}
    inline SessionKeysAbpV1_1& WithSNwkSIntKey(Aws::String&& value) { SetSNwkSIntKey(std::move(value)); return *this;}
    inline SessionKeysAbpV1_1& WithSNwkSIntKey(const char* value) { SetSNwkSIntKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NwkSEncKey value.</p>
     */
    inline const Aws::String& GetNwkSEncKey() const{ return m_nwkSEncKey; }
    inline bool NwkSEncKeyHasBeenSet() const { return m_nwkSEncKeyHasBeenSet; }
    inline void SetNwkSEncKey(const Aws::String& value) { m_nwkSEncKeyHasBeenSet = true; m_nwkSEncKey = value; }
    inline void SetNwkSEncKey(Aws::String&& value) { m_nwkSEncKeyHasBeenSet = true; m_nwkSEncKey = std::move(value); }
    inline void SetNwkSEncKey(const char* value) { m_nwkSEncKeyHasBeenSet = true; m_nwkSEncKey.assign(value); }
    inline SessionKeysAbpV1_1& WithNwkSEncKey(const Aws::String& value) { SetNwkSEncKey(value); return *this;}
    inline SessionKeysAbpV1_1& WithNwkSEncKey(Aws::String&& value) { SetNwkSEncKey(std::move(value)); return *this;}
    inline SessionKeysAbpV1_1& WithNwkSEncKey(const char* value) { SetNwkSEncKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AppSKey value.</p>
     */
    inline const Aws::String& GetAppSKey() const{ return m_appSKey; }
    inline bool AppSKeyHasBeenSet() const { return m_appSKeyHasBeenSet; }
    inline void SetAppSKey(const Aws::String& value) { m_appSKeyHasBeenSet = true; m_appSKey = value; }
    inline void SetAppSKey(Aws::String&& value) { m_appSKeyHasBeenSet = true; m_appSKey = std::move(value); }
    inline void SetAppSKey(const char* value) { m_appSKeyHasBeenSet = true; m_appSKey.assign(value); }
    inline SessionKeysAbpV1_1& WithAppSKey(const Aws::String& value) { SetAppSKey(value); return *this;}
    inline SessionKeysAbpV1_1& WithAppSKey(Aws::String&& value) { SetAppSKey(std::move(value)); return *this;}
    inline SessionKeysAbpV1_1& WithAppSKey(const char* value) { SetAppSKey(value); return *this;}
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
