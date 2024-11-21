/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/TimeUnit.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The length of time between state template updates.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/TimePeriod">AWS
   * API Reference</a></p>
   */
  class TimePeriod
  {
  public:
    AWS_IOTFLEETWISE_API TimePeriod();
    AWS_IOTFLEETWISE_API TimePeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API TimePeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unit of time.</p>
     */
    inline const TimeUnit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const TimeUnit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(TimeUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline TimePeriod& WithUnit(const TimeUnit& value) { SetUnit(value); return *this;}
    inline TimePeriod& WithUnit(TimeUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number of time units.</p>
     */
    inline int GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline TimePeriod& WithValue(int value) { SetValue(value); return *this;}
    ///@}
  private:

    TimeUnit m_unit;
    bool m_unitHasBeenSet = false;

    int m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
