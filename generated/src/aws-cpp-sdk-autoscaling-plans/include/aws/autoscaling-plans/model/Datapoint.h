﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Represents a single value in the forecast data used for predictive
   * scaling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/Datapoint">AWS
   * API Reference</a></p>
   */
  class Datapoint
  {
  public:
    AWS_AUTOSCALINGPLANS_API Datapoint();
    AWS_AUTOSCALINGPLANS_API Datapoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Datapoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time stamp for the data point in UTC format.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline Datapoint& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline Datapoint& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the data point.</p>
     */
    inline double GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline Datapoint& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
