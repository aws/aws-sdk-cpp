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
    AWS_IOTWIRELESS_API SessionKeysAbpV1_0_x();
    AWS_IOTWIRELESS_API SessionKeysAbpV1_0_x(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SessionKeysAbpV1_0_x& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The NwkSKey value.</p>
     */
    inline const Aws::String& GetNwkSKey() const{ return m_nwkSKey; }

    /**
     * <p>The NwkSKey value.</p>
     */
    inline bool NwkSKeyHasBeenSet() const { return m_nwkSKeyHasBeenSet; }

    /**
     * <p>The NwkSKey value.</p>
     */
    inline void SetNwkSKey(const Aws::String& value) { m_nwkSKeyHasBeenSet = true; m_nwkSKey = value; }

    /**
     * <p>The NwkSKey value.</p>
     */
    inline void SetNwkSKey(Aws::String&& value) { m_nwkSKeyHasBeenSet = true; m_nwkSKey = std::move(value); }

    /**
     * <p>The NwkSKey value.</p>
     */
    inline void SetNwkSKey(const char* value) { m_nwkSKeyHasBeenSet = true; m_nwkSKey.assign(value); }

    /**
     * <p>The NwkSKey value.</p>
     */
    inline SessionKeysAbpV1_0_x& WithNwkSKey(const Aws::String& value) { SetNwkSKey(value); return *this;}

    /**
     * <p>The NwkSKey value.</p>
     */
    inline SessionKeysAbpV1_0_x& WithNwkSKey(Aws::String&& value) { SetNwkSKey(std::move(value)); return *this;}

    /**
     * <p>The NwkSKey value.</p>
     */
    inline SessionKeysAbpV1_0_x& WithNwkSKey(const char* value) { SetNwkSKey(value); return *this;}


    /**
     * <p>The AppSKey value.</p>
     */
    inline const Aws::String& GetAppSKey() const{ return m_appSKey; }

    /**
     * <p>The AppSKey value.</p>
     */
    inline bool AppSKeyHasBeenSet() const { return m_appSKeyHasBeenSet; }

    /**
     * <p>The AppSKey value.</p>
     */
    inline void SetAppSKey(const Aws::String& value) { m_appSKeyHasBeenSet = true; m_appSKey = value; }

    /**
     * <p>The AppSKey value.</p>
     */
    inline void SetAppSKey(Aws::String&& value) { m_appSKeyHasBeenSet = true; m_appSKey = std::move(value); }

    /**
     * <p>The AppSKey value.</p>
     */
    inline void SetAppSKey(const char* value) { m_appSKeyHasBeenSet = true; m_appSKey.assign(value); }

    /**
     * <p>The AppSKey value.</p>
     */
    inline SessionKeysAbpV1_0_x& WithAppSKey(const Aws::String& value) { SetAppSKey(value); return *this;}

    /**
     * <p>The AppSKey value.</p>
     */
    inline SessionKeysAbpV1_0_x& WithAppSKey(Aws::String&& value) { SetAppSKey(std::move(value)); return *this;}

    /**
     * <p>The AppSKey value.</p>
     */
    inline SessionKeysAbpV1_0_x& WithAppSKey(const char* value) { SetAppSKey(value); return *this;}

  private:

    Aws::String m_nwkSKey;
    bool m_nwkSKeyHasBeenSet = false;

    Aws::String m_appSKey;
    bool m_appSKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
