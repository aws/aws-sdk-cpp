/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class GetEventTriggerRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API GetEventTriggerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEventTrigger"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline GetEventTriggerRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetEventTriggerRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetEventTriggerRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the event trigger.</p>
     */
    inline const Aws::String& GetEventTriggerName() const{ return m_eventTriggerName; }
    inline bool EventTriggerNameHasBeenSet() const { return m_eventTriggerNameHasBeenSet; }
    inline void SetEventTriggerName(const Aws::String& value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName = value; }
    inline void SetEventTriggerName(Aws::String&& value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName = std::move(value); }
    inline void SetEventTriggerName(const char* value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName.assign(value); }
    inline GetEventTriggerRequest& WithEventTriggerName(const Aws::String& value) { SetEventTriggerName(value); return *this;}
    inline GetEventTriggerRequest& WithEventTriggerName(Aws::String&& value) { SetEventTriggerName(std::move(value)); return *this;}
    inline GetEventTriggerRequest& WithEventTriggerName(const char* value) { SetEventTriggerName(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_eventTriggerName;
    bool m_eventTriggerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
