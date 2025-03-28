﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Sets the start date and end date for retrieving a cost estimate. The start
   * date is inclusive, but the end date is exclusive. For example, if
   * <code>start</code> is <code>2017-01-01</code> and <code>end</code> is
   * <code>2017-05-01</code>, then the cost and usage data is retrieved from
   * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
   * including <code>2017-05-01</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/TimePeriod">AWS
   * API Reference</a></p>
   */
  class TimePeriod
  {
  public:
    AWS_LIGHTSAIL_API TimePeriod() = default;
    AWS_LIGHTSAIL_API TimePeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API TimePeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The beginning of the time period. The start date is inclusive. For example,
     * if <code>start</code> is <code>2017-01-01</code>, Lightsail for Research
     * retrieves cost and usage data starting at <code>2017-01-01</code> up to the end
     * date. The start date must be equal to or no later than the current date to avoid
     * a validation error.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::Utils::DateTime>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::Utils::DateTime>
    TimePeriod& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time period. The end date is exclusive. For example, if
     * <code>end</code> is <code>2017-05-01</code>, Lightsail for Research retrieves
     * cost and usage data from the start date up to, but not including,
     * <code>2017-05-01</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::Utils::DateTime>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::Utils::DateTime>
    TimePeriod& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_start{};
    bool m_startHasBeenSet = false;

    Aws::Utils::DateTime m_end{};
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
