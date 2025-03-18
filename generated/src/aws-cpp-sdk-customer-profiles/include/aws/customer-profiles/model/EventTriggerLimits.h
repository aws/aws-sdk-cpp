/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/Period.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Defines limits controlling whether an event triggers the destination, based
   * on ingestion latency and the number of invocations per profile over specific
   * time periods.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/EventTriggerLimits">AWS
   * API Reference</a></p>
   */
  class EventTriggerLimits
  {
  public:
    AWS_CUSTOMERPROFILES_API EventTriggerLimits() = default;
    AWS_CUSTOMERPROFILES_API EventTriggerLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EventTriggerLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>In milliseconds. Specifies that an event will only trigger the destination if
     * it is processed within a certain latency period.</p>
     */
    inline long long GetEventExpiration() const { return m_eventExpiration; }
    inline bool EventExpirationHasBeenSet() const { return m_eventExpirationHasBeenSet; }
    inline void SetEventExpiration(long long value) { m_eventExpirationHasBeenSet = true; m_eventExpiration = value; }
    inline EventTriggerLimits& WithEventExpiration(long long value) { SetEventExpiration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of time periods during which the limits apply.</p>
     */
    inline const Aws::Vector<Period>& GetPeriods() const { return m_periods; }
    inline bool PeriodsHasBeenSet() const { return m_periodsHasBeenSet; }
    template<typename PeriodsT = Aws::Vector<Period>>
    void SetPeriods(PeriodsT&& value) { m_periodsHasBeenSet = true; m_periods = std::forward<PeriodsT>(value); }
    template<typename PeriodsT = Aws::Vector<Period>>
    EventTriggerLimits& WithPeriods(PeriodsT&& value) { SetPeriods(std::forward<PeriodsT>(value)); return *this;}
    template<typename PeriodsT = Period>
    EventTriggerLimits& AddPeriods(PeriodsT&& value) { m_periodsHasBeenSet = true; m_periods.emplace_back(std::forward<PeriodsT>(value)); return *this; }
    ///@}
  private:

    long long m_eventExpiration{0};
    bool m_eventExpirationHasBeenSet = false;

    Aws::Vector<Period> m_periods;
    bool m_periodsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
