/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ScheduledTriggerProperties.h>
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
   * <p>Specifies the configuration details that control the trigger for a flow.
   * Currently, these settings only apply to the Scheduled trigger
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/TriggerProperties">AWS
   * API Reference</a></p>
   */
  class TriggerProperties
  {
  public:
    AWS_CUSTOMERPROFILES_API TriggerProperties() = default;
    AWS_CUSTOMERPROFILES_API TriggerProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API TriggerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the configuration details of a schedule-triggered flow that you
     * define.</p>
     */
    inline const ScheduledTriggerProperties& GetScheduled() const { return m_scheduled; }
    inline bool ScheduledHasBeenSet() const { return m_scheduledHasBeenSet; }
    template<typename ScheduledT = ScheduledTriggerProperties>
    void SetScheduled(ScheduledT&& value) { m_scheduledHasBeenSet = true; m_scheduled = std::forward<ScheduledT>(value); }
    template<typename ScheduledT = ScheduledTriggerProperties>
    TriggerProperties& WithScheduled(ScheduledT&& value) { SetScheduled(std::forward<ScheduledT>(value)); return *this;}
    ///@}
  private:

    ScheduledTriggerProperties m_scheduled;
    bool m_scheduledHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
