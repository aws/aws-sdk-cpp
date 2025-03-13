/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> A range of time that specifies when anomalous behavior in an anomaly or
   * insight ended. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/EndTimeRange">AWS
   * API Reference</a></p>
   */
  class EndTimeRange
  {
  public:
    AWS_DEVOPSGURU_API EndTimeRange() = default;
    AWS_DEVOPSGURU_API EndTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API EndTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The earliest end time in the time range. </p>
     */
    inline const Aws::Utils::DateTime& GetFromTime() const { return m_fromTime; }
    inline bool FromTimeHasBeenSet() const { return m_fromTimeHasBeenSet; }
    template<typename FromTimeT = Aws::Utils::DateTime>
    void SetFromTime(FromTimeT&& value) { m_fromTimeHasBeenSet = true; m_fromTime = std::forward<FromTimeT>(value); }
    template<typename FromTimeT = Aws::Utils::DateTime>
    EndTimeRange& WithFromTime(FromTimeT&& value) { SetFromTime(std::forward<FromTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The latest end time in the time range. </p>
     */
    inline const Aws::Utils::DateTime& GetToTime() const { return m_toTime; }
    inline bool ToTimeHasBeenSet() const { return m_toTimeHasBeenSet; }
    template<typename ToTimeT = Aws::Utils::DateTime>
    void SetToTime(ToTimeT&& value) { m_toTimeHasBeenSet = true; m_toTime = std::forward<ToTimeT>(value); }
    template<typename ToTimeT = Aws::Utils::DateTime>
    EndTimeRange& WithToTime(ToTimeT&& value) { SetToTime(std::forward<ToTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_fromTime{};
    bool m_fromTimeHasBeenSet = false;

    Aws::Utils::DateTime m_toTime{};
    bool m_toTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
