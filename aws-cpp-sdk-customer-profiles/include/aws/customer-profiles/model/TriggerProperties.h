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

  class AWS_CUSTOMERPROFILES_API TriggerProperties
  {
  public:
    TriggerProperties();
    TriggerProperties(Aws::Utils::Json::JsonView jsonValue);
    TriggerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ScheduledTriggerProperties& GetScheduled() const{ return m_scheduled; }

    
    inline bool ScheduledHasBeenSet() const { return m_scheduledHasBeenSet; }

    
    inline void SetScheduled(const ScheduledTriggerProperties& value) { m_scheduledHasBeenSet = true; m_scheduled = value; }

    
    inline void SetScheduled(ScheduledTriggerProperties&& value) { m_scheduledHasBeenSet = true; m_scheduled = std::move(value); }

    
    inline TriggerProperties& WithScheduled(const ScheduledTriggerProperties& value) { SetScheduled(value); return *this;}

    
    inline TriggerProperties& WithScheduled(ScheduledTriggerProperties&& value) { SetScheduled(std::move(value)); return *this;}

  private:

    ScheduledTriggerProperties m_scheduled;
    bool m_scheduledHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
