/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/TimeInNanos.h>
#include <aws/iotsitewise/model/Variant.h>
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
   * <p>Contains information about an interpolated asset property
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/InterpolatedAssetPropertyValue">AWS
   * API Reference</a></p>
   */
  class InterpolatedAssetPropertyValue
  {
  public:
    AWS_IOTSITEWISE_API InterpolatedAssetPropertyValue();
    AWS_IOTSITEWISE_API InterpolatedAssetPropertyValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API InterpolatedAssetPropertyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const TimeInNanos& GetTimestamp() const{ return m_timestamp; }

    
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    
    inline void SetTimestamp(const TimeInNanos& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    
    inline void SetTimestamp(TimeInNanos&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    
    inline InterpolatedAssetPropertyValue& WithTimestamp(const TimeInNanos& value) { SetTimestamp(value); return *this;}

    
    inline InterpolatedAssetPropertyValue& WithTimestamp(TimeInNanos&& value) { SetTimestamp(std::move(value)); return *this;}


    
    inline const Variant& GetValue() const{ return m_value; }

    
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    
    inline void SetValue(const Variant& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline void SetValue(Variant&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    
    inline InterpolatedAssetPropertyValue& WithValue(const Variant& value) { SetValue(value); return *this;}

    
    inline InterpolatedAssetPropertyValue& WithValue(Variant&& value) { SetValue(std::move(value)); return *this;}

  private:

    TimeInNanos m_timestamp;
    bool m_timestampHasBeenSet = false;

    Variant m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
