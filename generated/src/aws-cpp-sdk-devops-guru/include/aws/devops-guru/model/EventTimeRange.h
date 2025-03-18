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
   * <p> The time range during which an Amazon Web Services event occurred. Amazon
   * Web Services resource events and metrics are analyzed by DevOps Guru to find
   * anomalous behavior and provide recommendations to improve your operational
   * solutions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/EventTimeRange">AWS
   * API Reference</a></p>
   */
  class EventTimeRange
  {
  public:
    AWS_DEVOPSGURU_API EventTimeRange() = default;
    AWS_DEVOPSGURU_API EventTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API EventTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The time when the event started. </p>
     */
    inline const Aws::Utils::DateTime& GetFromTime() const { return m_fromTime; }
    inline bool FromTimeHasBeenSet() const { return m_fromTimeHasBeenSet; }
    template<typename FromTimeT = Aws::Utils::DateTime>
    void SetFromTime(FromTimeT&& value) { m_fromTimeHasBeenSet = true; m_fromTime = std::forward<FromTimeT>(value); }
    template<typename FromTimeT = Aws::Utils::DateTime>
    EventTimeRange& WithFromTime(FromTimeT&& value) { SetFromTime(std::forward<FromTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the event ended. </p>
     */
    inline const Aws::Utils::DateTime& GetToTime() const { return m_toTime; }
    inline bool ToTimeHasBeenSet() const { return m_toTimeHasBeenSet; }
    template<typename ToTimeT = Aws::Utils::DateTime>
    void SetToTime(ToTimeT&& value) { m_toTimeHasBeenSet = true; m_toTime = std::forward<ToTimeT>(value); }
    template<typename ToTimeT = Aws::Utils::DateTime>
    EventTimeRange& WithToTime(ToTimeT&& value) { SetToTime(std::forward<ToTimeT>(value)); return *this;}
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
