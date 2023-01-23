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


    /**
     * <p>The value of the asset property (see <code>Variant</code>).</p>
     */
    inline const Variant& GetValue() const{ return m_value; }

    /**
     * <p>The value of the asset property (see <code>Variant</code>).</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the asset property (see <code>Variant</code>).</p>
     */
    inline void SetValue(const Variant& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the asset property (see <code>Variant</code>).</p>
     */
    inline void SetValue(Variant&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the asset property (see <code>Variant</code>).</p>
     */
    inline AssetPropertyValue& WithValue(const Variant& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the asset property (see <code>Variant</code>).</p>
     */
    inline AssetPropertyValue& WithValue(Variant&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the asset property value.</p>
     */
    inline const TimeInNanos& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp of the asset property value.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The timestamp of the asset property value.</p>
     */
    inline void SetTimestamp(const TimeInNanos& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The timestamp of the asset property value.</p>
     */
    inline void SetTimestamp(TimeInNanos&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The timestamp of the asset property value.</p>
     */
    inline AssetPropertyValue& WithTimestamp(const TimeInNanos& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the asset property value.</p>
     */
    inline AssetPropertyValue& WithTimestamp(TimeInNanos&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The quality of the asset property value.</p>
     */
    inline const Quality& GetQuality() const{ return m_quality; }

    /**
     * <p>The quality of the asset property value.</p>
     */
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }

    /**
     * <p>The quality of the asset property value.</p>
     */
    inline void SetQuality(const Quality& value) { m_qualityHasBeenSet = true; m_quality = value; }

    /**
     * <p>The quality of the asset property value.</p>
     */
    inline void SetQuality(Quality&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }

    /**
     * <p>The quality of the asset property value.</p>
     */
    inline AssetPropertyValue& WithQuality(const Quality& value) { SetQuality(value); return *this;}

    /**
     * <p>The quality of the asset property value.</p>
     */
    inline AssetPropertyValue& WithQuality(Quality&& value) { SetQuality(std::move(value)); return *this;}

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
