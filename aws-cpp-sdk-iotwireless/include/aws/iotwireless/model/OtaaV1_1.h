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
    AWS_IOTWIRELESS_API OtaaV1_1();
    AWS_IOTWIRELESS_API OtaaV1_1(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API OtaaV1_1& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline OtaaV1_1& WithAppKey(const Aws::String& value) { SetAppKey(value); return *this;}

    /**
     * <p>The AppKey value.</p>
     */
    inline OtaaV1_1& WithAppKey(Aws::String&& value) { SetAppKey(std::move(value)); return *this;}

    /**
     * <p>The AppKey value.</p>
     */
    inline OtaaV1_1& WithAppKey(const char* value) { SetAppKey(value); return *this;}


    /**
     * <p>The NwkKey value.</p>
     */
    inline const Aws::String& GetNwkKey() const{ return m_nwkKey; }

    /**
     * <p>The NwkKey value.</p>
     */
    inline bool NwkKeyHasBeenSet() const { return m_nwkKeyHasBeenSet; }

    /**
     * <p>The NwkKey value.</p>
     */
    inline void SetNwkKey(const Aws::String& value) { m_nwkKeyHasBeenSet = true; m_nwkKey = value; }

    /**
     * <p>The NwkKey value.</p>
     */
    inline void SetNwkKey(Aws::String&& value) { m_nwkKeyHasBeenSet = true; m_nwkKey = std::move(value); }

    /**
     * <p>The NwkKey value.</p>
     */
    inline void SetNwkKey(const char* value) { m_nwkKeyHasBeenSet = true; m_nwkKey.assign(value); }

    /**
     * <p>The NwkKey value.</p>
     */
    inline OtaaV1_1& WithNwkKey(const Aws::String& value) { SetNwkKey(value); return *this;}

    /**
     * <p>The NwkKey value.</p>
     */
    inline OtaaV1_1& WithNwkKey(Aws::String&& value) { SetNwkKey(std::move(value)); return *this;}

    /**
     * <p>The NwkKey value.</p>
     */
    inline OtaaV1_1& WithNwkKey(const char* value) { SetNwkKey(value); return *this;}


    /**
     * <p>The JoinEUI value.</p>
     */
    inline const Aws::String& GetJoinEui() const{ return m_joinEui; }

    /**
     * <p>The JoinEUI value.</p>
     */
    inline bool JoinEuiHasBeenSet() const { return m_joinEuiHasBeenSet; }

    /**
     * <p>The JoinEUI value.</p>
     */
    inline void SetJoinEui(const Aws::String& value) { m_joinEuiHasBeenSet = true; m_joinEui = value; }

    /**
     * <p>The JoinEUI value.</p>
     */
    inline void SetJoinEui(Aws::String&& value) { m_joinEuiHasBeenSet = true; m_joinEui = std::move(value); }

    /**
     * <p>The JoinEUI value.</p>
     */
    inline void SetJoinEui(const char* value) { m_joinEuiHasBeenSet = true; m_joinEui.assign(value); }

    /**
     * <p>The JoinEUI value.</p>
     */
    inline OtaaV1_1& WithJoinEui(const Aws::String& value) { SetJoinEui(value); return *this;}

    /**
     * <p>The JoinEUI value.</p>
     */
    inline OtaaV1_1& WithJoinEui(Aws::String&& value) { SetJoinEui(std::move(value)); return *this;}

    /**
     * <p>The JoinEUI value.</p>
     */
    inline OtaaV1_1& WithJoinEui(const char* value) { SetJoinEui(value); return *this;}

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
