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
    AWS_IOT_API AssetPropertyValue() = default;
    AWS_IOT_API AssetPropertyValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AssetPropertyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the asset property.</p>
     */
    inline const AssetPropertyVariant& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = AssetPropertyVariant>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = AssetPropertyVariant>
    AssetPropertyValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset property value timestamp.</p>
     */
    inline const AssetPropertyTimestamp& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = AssetPropertyTimestamp>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = AssetPropertyTimestamp>
    AssetPropertyValue& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. A string that describes the quality of the value. Accepts
     * substitution templates. Must be <code>GOOD</code>, <code>BAD</code>, or
     * <code>UNCERTAIN</code>.</p>
     */
    inline const Aws::String& GetQuality() const { return m_quality; }
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }
    template<typename QualityT = Aws::String>
    void SetQuality(QualityT&& value) { m_qualityHasBeenSet = true; m_quality = std::forward<QualityT>(value); }
    template<typename QualityT = Aws::String>
    AssetPropertyValue& WithQuality(QualityT&& value) { SetQuality(std::forward<QualityT>(value)); return *this;}
    ///@}
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
