/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AssetPropertyVariant.h>
#include <aws/iot/model/AssetPropertyTimestamp.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An asset property value entry containing the following
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AssetPropertyValue">AWS
   * API Reference</a></p>
   */
  class AssetPropertyValue
  {
  public:
    AWS_IOT_API AssetPropertyValue();
    AWS_IOT_API AssetPropertyValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AssetPropertyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the asset property.</p>
     */
    inline const AssetPropertyVariant& GetValue() const{ return m_value; }

    /**
     * <p>The value of the asset property.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the asset property.</p>
     */
    inline void SetValue(const AssetPropertyVariant& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the asset property.</p>
     */
    inline void SetValue(AssetPropertyVariant&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the asset property.</p>
     */
    inline AssetPropertyValue& WithValue(const AssetPropertyVariant& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the asset property.</p>
     */
    inline AssetPropertyValue& WithValue(AssetPropertyVariant&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>The asset property value timestamp.</p>
     */
    inline const AssetPropertyTimestamp& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The asset property value timestamp.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The asset property value timestamp.</p>
     */
    inline void SetTimestamp(const AssetPropertyTimestamp& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The asset property value timestamp.</p>
     */
    inline void SetTimestamp(AssetPropertyTimestamp&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The asset property value timestamp.</p>
     */
    inline AssetPropertyValue& WithTimestamp(const AssetPropertyTimestamp& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The asset property value timestamp.</p>
     */
    inline AssetPropertyValue& WithTimestamp(AssetPropertyTimestamp&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>Optional. A string that describes the quality of the value. Accepts
     * substitution templates. Must be <code>GOOD</code>, <code>BAD</code>, or
     * <code>UNCERTAIN</code>.</p>
     */
    inline const Aws::String& GetQuality() const{ return m_quality; }

    /**
     * <p>Optional. A string that describes the quality of the value. Accepts
     * substitution templates. Must be <code>GOOD</code>, <code>BAD</code>, or
     * <code>UNCERTAIN</code>.</p>
     */
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }

    /**
     * <p>Optional. A string that describes the quality of the value. Accepts
     * substitution templates. Must be <code>GOOD</code>, <code>BAD</code>, or
     * <code>UNCERTAIN</code>.</p>
     */
    inline void SetQuality(const Aws::String& value) { m_qualityHasBeenSet = true; m_quality = value; }

    /**
     * <p>Optional. A string that describes the quality of the value. Accepts
     * substitution templates. Must be <code>GOOD</code>, <code>BAD</code>, or
     * <code>UNCERTAIN</code>.</p>
     */
    inline void SetQuality(Aws::String&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }

    /**
     * <p>Optional. A string that describes the quality of the value. Accepts
     * substitution templates. Must be <code>GOOD</code>, <code>BAD</code>, or
     * <code>UNCERTAIN</code>.</p>
     */
    inline void SetQuality(const char* value) { m_qualityHasBeenSet = true; m_quality.assign(value); }

    /**
     * <p>Optional. A string that describes the quality of the value. Accepts
     * substitution templates. Must be <code>GOOD</code>, <code>BAD</code>, or
     * <code>UNCERTAIN</code>.</p>
     */
    inline AssetPropertyValue& WithQuality(const Aws::String& value) { SetQuality(value); return *this;}

    /**
     * <p>Optional. A string that describes the quality of the value. Accepts
     * substitution templates. Must be <code>GOOD</code>, <code>BAD</code>, or
     * <code>UNCERTAIN</code>.</p>
     */
    inline AssetPropertyValue& WithQuality(Aws::String&& value) { SetQuality(std::move(value)); return *this;}

    /**
     * <p>Optional. A string that describes the quality of the value. Accepts
     * substitution templates. Must be <code>GOOD</code>, <code>BAD</code>, or
     * <code>UNCERTAIN</code>.</p>
     */
    inline AssetPropertyValue& WithQuality(const char* value) { SetQuality(value); return *this;}

  private:

    AssetPropertyVariant m_value;
    bool m_valueHasBeenSet = false;

    AssetPropertyTimestamp m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_quality;
    bool m_qualityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
