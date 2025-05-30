﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/AssetPropertyVariant.h>
#include <aws/iotevents/model/AssetPropertyTimestamp.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>A structure that contains value information. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_AssetPropertyValue.html">AssetPropertyValue</a>
   * in the <i>AWS IoT SiteWise API Reference</i>.</p> <p>You must use expressions
   * for all parameters in <code>AssetPropertyValue</code>. The expressions accept
   * literals, operators, functions, references, and substitution templates.</p> <p
   * class="title"> <b>Examples</b> </p> <ul> <li> <p>For literal values, the
   * expressions must contain single quotes. For example, the value for the
   * <code>quality</code> parameter can be <code>'GOOD'</code>.</p> </li> <li> <p>For
   * references, you must specify either variables or input values. For example, the
   * value for the <code>quality</code> parameter can be
   * <code>$input.TemperatureInput.sensorData.quality</code>.</p> </li> </ul> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-expressions.html">Expressions</a>
   * in the <i>AWS IoT Events Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AssetPropertyValue">AWS
   * API Reference</a></p>
   */
  class AssetPropertyValue
  {
  public:
    AWS_IOTEVENTS_API AssetPropertyValue() = default;
    AWS_IOTEVENTS_API AssetPropertyValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AssetPropertyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value to send to an asset property.</p>
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
     * <p>The timestamp associated with the asset property value. The default is the
     * current event time.</p>
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
     * <p>The quality of the asset property value. The value must be
     * <code>'GOOD'</code>, <code>'BAD'</code>, or <code>'UNCERTAIN'</code>.</p>
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
} // namespace IoTEvents
} // namespace Aws
