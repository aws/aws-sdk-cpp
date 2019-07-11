/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EVENTBRIDGE_API CreatePartnerEventSourceRequest : public EventBridgeRequest
  {
  public:
    CreatePartnerEventSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePartnerEventSource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the partner event source. This name must be unique and must be in
     * the format <code> <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
     * </code>. The AWS account that wants to use this partner event source must create
     * a partner event bus with a name that matches the name of the partner event
     * source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the partner event source. This name must be unique and must be in
     * the format <code> <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
     * </code>. The AWS account that wants to use this partner event source must create
     * a partner event bus with a name that matches the name of the partner event
     * source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the partner event source. This name must be unique and must be in
     * the format <code> <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
     * </code>. The AWS account that wants to use this partner event source must create
     * a partner event bus with a name that matches the name of the partner event
     * source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the partner event source. This name must be unique and must be in
     * the format <code> <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
     * </code>. The AWS account that wants to use this partner event source must create
     * a partner event bus with a name that matches the name of the partner event
     * source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the partner event source. This name must be unique and must be in
     * the format <code> <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
     * </code>. The AWS account that wants to use this partner event source must create
     * a partner event bus with a name that matches the name of the partner event
     * source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the partner event source. This name must be unique and must be in
     * the format <code> <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
     * </code>. The AWS account that wants to use this partner event source must create
     * a partner event bus with a name that matches the name of the partner event
     * source.</p>
     */
    inline CreatePartnerEventSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the partner event source. This name must be unique and must be in
     * the format <code> <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
     * </code>. The AWS account that wants to use this partner event source must create
     * a partner event bus with a name that matches the name of the partner event
     * source.</p>
     */
    inline CreatePartnerEventSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the partner event source. This name must be unique and must be in
     * the format <code> <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
     * </code>. The AWS account that wants to use this partner event source must create
     * a partner event bus with a name that matches the name of the partner event
     * source.</p>
     */
    inline CreatePartnerEventSourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The AWS account ID of the customer who is permitted to create a matching
     * partner event bus for this partner event source.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The AWS account ID of the customer who is permitted to create a matching
     * partner event bus for this partner event source.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The AWS account ID of the customer who is permitted to create a matching
     * partner event bus for this partner event source.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The AWS account ID of the customer who is permitted to create a matching
     * partner event bus for this partner event source.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The AWS account ID of the customer who is permitted to create a matching
     * partner event bus for this partner event source.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>The AWS account ID of the customer who is permitted to create a matching
     * partner event bus for this partner event source.</p>
     */
    inline CreatePartnerEventSourceRequest& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The AWS account ID of the customer who is permitted to create a matching
     * partner event bus for this partner event source.</p>
     */
    inline CreatePartnerEventSourceRequest& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the customer who is permitted to create a matching
     * partner event bus for this partner event source.</p>
     */
    inline CreatePartnerEventSourceRequest& WithAccount(const char* value) { SetAccount(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_account;
    bool m_accountHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
