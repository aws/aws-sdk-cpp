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
    AWS_CUSTOMERPROFILES_API TriggerProperties();
    AWS_CUSTOMERPROFILES_API TriggerProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API TriggerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the configuration details of a schedule-triggered flow that you
     * define.</p>
     */
    inline const ScheduledTriggerProperties& GetScheduled() const{ return m_scheduled; }

    /**
     * <p>Specifies the configuration details of a schedule-triggered flow that you
     * define.</p>
     */
    inline bool ScheduledHasBeenSet() const { return m_scheduledHasBeenSet; }

    /**
     * <p>Specifies the configuration details of a schedule-triggered flow that you
     * define.</p>
     */
    inline void SetScheduled(const ScheduledTriggerProperties& value) { m_scheduledHasBeenSet = true; m_scheduled = value; }

    /**
     * <p>Specifies the configuration details of a schedule-triggered flow that you
     * define.</p>
     */
    inline void SetScheduled(ScheduledTriggerProperties&& value) { m_scheduledHasBeenSet = true; m_scheduled = std::move(value); }

    /**
     * <p>Specifies the configuration details of a schedule-triggered flow that you
     * define.</p>
     */
    inline TriggerProperties& WithScheduled(const ScheduledTriggerProperties& value) { SetScheduled(value); return *this;}

    /**
     * <p>Specifies the configuration details of a schedule-triggered flow that you
     * define.</p>
     */
    inline TriggerProperties& WithScheduled(ScheduledTriggerProperties&& value) { SetScheduled(std::move(value)); return *this;}

  private:

    ScheduledTriggerProperties m_scheduled;
    bool m_scheduledHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
