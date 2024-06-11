/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/Variant.h>
#include <aws/iotsitewise/model/TimeInNanos.h>
#include <aws/iotsitewise/model/Quality.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains asset property value information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetPropertyValue">AWS
   * API Reference</a></p>
   */
  class AssetPropertyValue
  {
  public:
    AWS_IOTSITEWISE_API AssetPropertyValue();
    AWS_IOTSITEWISE_API AssetPropertyValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetPropertyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the asset property (see <code>Variant</code>).</p>
     */
    inline const Variant& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Variant& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Variant&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline AssetPropertyValue& WithValue(const Variant& value) { SetValue(value); return *this;}
    inline AssetPropertyValue& WithValue(Variant&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the asset property value.</p>
     */
    inline const TimeInNanos& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const TimeInNanos& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(TimeInNanos&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline AssetPropertyValue& WithTimestamp(const TimeInNanos& value) { SetTimestamp(value); return *this;}
    inline AssetPropertyValue& WithTimestamp(TimeInNanos&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quality of the asset property value.</p>
     */
    inline const Quality& GetQuality() const{ return m_quality; }
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }
    inline void SetQuality(const Quality& value) { m_qualityHasBeenSet = true; m_quality = value; }
    inline void SetQuality(Quality&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }
    inline AssetPropertyValue& WithQuality(const Quality& value) { SetQuality(value); return *this;}
    inline AssetPropertyValue& WithQuality(Quality&& value) { SetQuality(std::move(value)); return *this;}
    ///@}
  private:

    Variant m_value;
    bool m_valueHasBeenSet = false;

    TimeInNanos m_timestamp;
    bool m_timestampHasBeenSet = false;

    Quality m_quality;
    bool m_qualityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
