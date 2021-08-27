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
  class AWS_IOTWIRELESS_API OtaaV1_0_x
  {
  public:
    OtaaV1_0_x();
    OtaaV1_0_x(Aws::Utils::Json::JsonView jsonValue);
    OtaaV1_0_x& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AppKey value.</p>
     */
    inline const Aws::String& GetAppKey() const{ return m_appKey; }

    /**
     * <p>The AppKey value.</p>
     */
    inline bool AppKeyHasBeenSet() const { return m_appKeyHasBeenSet; }

    /**
     * <p>The AppKey value.</p>
     */
    inline void SetAppKey(const Aws::String& value) { m_appKeyHasBeenSet = true; m_appKey = value; }

    /**
     * <p>The AppKey value.</p>
     */
    inline void SetAppKey(Aws::String&& value) { m_appKeyHasBeenSet = true; m_appKey = std::move(value); }

    /**
     * <p>The AppKey value.</p>
     */
    inline void SetAppKey(const char* value) { m_appKeyHasBeenSet = true; m_appKey.assign(value); }

    /**
     * <p>The AppKey value.</p>
     */
    inline OtaaV1_0_x& WithAppKey(const Aws::String& value) { SetAppKey(value); return *this;}

    /**
     * <p>The AppKey value.</p>
     */
    inline OtaaV1_0_x& WithAppKey(Aws::String&& value) { SetAppKey(std::move(value)); return *this;}

    /**
     * <p>The AppKey value.</p>
     */
    inline OtaaV1_0_x& WithAppKey(const char* value) { SetAppKey(value); return *this;}


    /**
     * <p>The AppEUI value.</p>
     */
    inline const Aws::String& GetAppEui() const{ return m_appEui; }

    /**
     * <p>The AppEUI value.</p>
     */
    inline bool AppEuiHasBeenSet() const { return m_appEuiHasBeenSet; }

    /**
     * <p>The AppEUI value.</p>
     */
    inline void SetAppEui(const Aws::String& value) { m_appEuiHasBeenSet = true; m_appEui = value; }

    /**
     * <p>The AppEUI value.</p>
     */
    inline void SetAppEui(Aws::String&& value) { m_appEuiHasBeenSet = true; m_appEui = std::move(value); }

    /**
     * <p>The AppEUI value.</p>
     */
    inline void SetAppEui(const char* value) { m_appEuiHasBeenSet = true; m_appEui.assign(value); }

    /**
     * <p>The AppEUI value.</p>
     */
    inline OtaaV1_0_x& WithAppEui(const Aws::String& value) { SetAppEui(value); return *this;}

    /**
     * <p>The AppEUI value.</p>
     */
    inline OtaaV1_0_x& WithAppEui(Aws::String&& value) { SetAppEui(std::move(value)); return *this;}

    /**
     * <p>The AppEUI value.</p>
     */
    inline OtaaV1_0_x& WithAppEui(const char* value) { SetAppEui(value); return *this;}

  private:

    Aws::String m_appKey;
    bool m_appKeyHasBeenSet;

    Aws::String m_appEui;
    bool m_appEuiHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
