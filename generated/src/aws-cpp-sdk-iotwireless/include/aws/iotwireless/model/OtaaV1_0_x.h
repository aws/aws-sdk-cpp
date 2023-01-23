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
    AWS_IOTWIRELESS_API OtaaV1_0_x();
    AWS_IOTWIRELESS_API OtaaV1_0_x(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API OtaaV1_0_x& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    /**
     * <p>The GenAppKey value.</p>
     */
    inline const Aws::String& GetGenAppKey() const{ return m_genAppKey; }

    /**
     * <p>The GenAppKey value.</p>
     */
    inline bool GenAppKeyHasBeenSet() const { return m_genAppKeyHasBeenSet; }

    /**
     * <p>The GenAppKey value.</p>
     */
    inline void SetGenAppKey(const Aws::String& value) { m_genAppKeyHasBeenSet = true; m_genAppKey = value; }

    /**
     * <p>The GenAppKey value.</p>
     */
    inline void SetGenAppKey(Aws::String&& value) { m_genAppKeyHasBeenSet = true; m_genAppKey = std::move(value); }

    /**
     * <p>The GenAppKey value.</p>
     */
    inline void SetGenAppKey(const char* value) { m_genAppKeyHasBeenSet = true; m_genAppKey.assign(value); }

    /**
     * <p>The GenAppKey value.</p>
     */
    inline OtaaV1_0_x& WithGenAppKey(const Aws::String& value) { SetGenAppKey(value); return *this;}

    /**
     * <p>The GenAppKey value.</p>
     */
    inline OtaaV1_0_x& WithGenAppKey(Aws::String&& value) { SetGenAppKey(std::move(value)); return *this;}

    /**
     * <p>The GenAppKey value.</p>
     */
    inline OtaaV1_0_x& WithGenAppKey(const char* value) { SetGenAppKey(value); return *this;}

  private:

    Aws::String m_appKey;
    bool m_appKeyHasBeenSet = false;

    Aws::String m_appEui;
    bool m_appEuiHasBeenSet = false;

    Aws::String m_genAppKey;
    bool m_genAppKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
