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
    AWS_CUSTOMERPROFILES_API EventTriggerLimits();
    AWS_CUSTOMERPROFILES_API EventTriggerLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EventTriggerLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>In milliseconds. Specifies that an event will only trigger the destination if
     * it is processed within a certain latency period.</p>
     */
    inline long long GetEventExpiration() const{ return m_eventExpiration; }
    inline bool EventExpirationHasBeenSet() const { return m_eventExpirationHasBeenSet; }
    inline void SetEventExpiration(long long value) { m_eventExpirationHasBeenSet = true; m_eventExpiration = value; }
    inline EventTriggerLimits& WithEventExpiration(long long value) { SetEventExpiration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of time periods during which the limits apply.</p>
     */
    inline const Aws::Vector<Period>& GetPeriods() const{ return m_periods; }
    inline bool PeriodsHasBeenSet() const { return m_periodsHasBeenSet; }
    inline void SetPeriods(const Aws::Vector<Period>& value) { m_periodsHasBeenSet = true; m_periods = value; }
    inline void SetPeriods(Aws::Vector<Period>&& value) { m_periodsHasBeenSet = true; m_periods = std::move(value); }
    inline EventTriggerLimits& WithPeriods(const Aws::Vector<Period>& value) { SetPeriods(value); return *this;}
    inline EventTriggerLimits& WithPeriods(Aws::Vector<Period>&& value) { SetPeriods(std::move(value)); return *this;}
    inline EventTriggerLimits& AddPeriods(const Period& value) { m_periodsHasBeenSet = true; m_periods.push_back(value); return *this; }
    inline EventTriggerLimits& AddPeriods(Period&& value) { m_periodsHasBeenSet = true; m_periods.push_back(std::move(value)); return *this; }
    ///@}
  private:

    long long m_eventExpiration;
    bool m_eventExpirationHasBeenSet = false;

    Aws::Vector<Period> m_periods;
    bool m_periodsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
