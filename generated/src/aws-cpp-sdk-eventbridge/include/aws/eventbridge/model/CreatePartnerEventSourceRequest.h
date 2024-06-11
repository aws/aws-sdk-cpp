﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class CreatePartnerEventSourceRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API CreatePartnerEventSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePartnerEventSource"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the partner event source. This name must be unique and must be in
     * the format <code> <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
     * </code>. The Amazon Web Services account that wants to use this partner event
     * source must create a partner event bus with a name that matches the name of the
     * partner event source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreatePartnerEventSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePartnerEventSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePartnerEventSourceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that is permitted to create a matching
     * partner event bus for this partner event source.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }
    inline CreatePartnerEventSourceRequest& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}
    inline CreatePartnerEventSourceRequest& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}
    inline CreatePartnerEventSourceRequest& WithAccount(const char* value) { SetAccount(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_account;
    bool m_accountHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
