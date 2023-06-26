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
  class GetEventStreamRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API GetEventStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEventStream"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetEventStreamRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetEventStreamRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetEventStreamRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name of the event stream provided during create operations.</p>
     */
    inline const Aws::String& GetEventStreamName() const{ return m_eventStreamName; }

    /**
     * <p>The name of the event stream provided during create operations.</p>
     */
    inline bool EventStreamNameHasBeenSet() const { return m_eventStreamNameHasBeenSet; }

    /**
     * <p>The name of the event stream provided during create operations.</p>
     */
    inline void SetEventStreamName(const Aws::String& value) { m_eventStreamNameHasBeenSet = true; m_eventStreamName = value; }

    /**
     * <p>The name of the event stream provided during create operations.</p>
     */
    inline void SetEventStreamName(Aws::String&& value) { m_eventStreamNameHasBeenSet = true; m_eventStreamName = std::move(value); }

    /**
     * <p>The name of the event stream provided during create operations.</p>
     */
    inline void SetEventStreamName(const char* value) { m_eventStreamNameHasBeenSet = true; m_eventStreamName.assign(value); }

    /**
     * <p>The name of the event stream provided during create operations.</p>
     */
    inline GetEventStreamRequest& WithEventStreamName(const Aws::String& value) { SetEventStreamName(value); return *this;}

    /**
     * <p>The name of the event stream provided during create operations.</p>
     */
    inline GetEventStreamRequest& WithEventStreamName(Aws::String&& value) { SetEventStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the event stream provided during create operations.</p>
     */
    inline GetEventStreamRequest& WithEventStreamName(const char* value) { SetEventStreamName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_eventStreamName;
    bool m_eventStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
