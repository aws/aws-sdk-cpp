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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/events/model/EventSourceState.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>The AWS account that a partner event source has been offered
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PartnerEventSourceAccount">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API PartnerEventSourceAccount
  {
  public:
    PartnerEventSourceAccount();
    PartnerEventSourceAccount(Aws::Utils::Json::JsonView jsonValue);
    PartnerEventSourceAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID that the partner event source was offered to.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The AWS account ID that the partner event source was offered to.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The AWS account ID that the partner event source was offered to.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The AWS account ID that the partner event source was offered to.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The AWS account ID that the partner event source was offered to.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>The AWS account ID that the partner event source was offered to.</p>
     */
    inline PartnerEventSourceAccount& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The AWS account ID that the partner event source was offered to.</p>
     */
    inline PartnerEventSourceAccount& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID that the partner event source was offered to.</p>
     */
    inline PartnerEventSourceAccount& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline PartnerEventSourceAccount& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline PartnerEventSourceAccount& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }

    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline PartnerEventSourceAccount& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline PartnerEventSourceAccount& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}


    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline const EventSourceState& GetState() const{ return m_state; }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline void SetState(const EventSourceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline void SetState(EventSourceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline PartnerEventSourceAccount& WithState(const EventSourceState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline PartnerEventSourceAccount& WithState(EventSourceState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_account;
    bool m_accountHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet;

    EventSourceState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
