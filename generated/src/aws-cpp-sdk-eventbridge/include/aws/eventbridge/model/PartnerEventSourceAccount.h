/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eventbridge/model/EventSourceState.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The Amazon Web Services account that a partner event source has been offered
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PartnerEventSourceAccount">AWS
   * API Reference</a></p>
   */
  class PartnerEventSourceAccount
  {
  public:
    AWS_EVENTBRIDGE_API PartnerEventSourceAccount();
    AWS_EVENTBRIDGE_API PartnerEventSourceAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API PartnerEventSourceAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that the partner event source was offered
     * to.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }
    inline PartnerEventSourceAccount& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}
    inline PartnerEventSourceAccount& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}
    inline PartnerEventSourceAccount& WithAccount(const char* value) { SetAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the event source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline PartnerEventSourceAccount& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline PartnerEventSourceAccount& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the event source will expire, if the Amazon Web
     * Services account doesn't create a matching event bus for it.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }
    inline PartnerEventSourceAccount& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}
    inline PartnerEventSourceAccount& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the event source. If it is ACTIVE, you have already created a
     * matching event bus for this event source, and that event bus is active. If it is
     * PENDING, either you haven't yet created a matching event bus, or that event bus
     * is deactivated. If it is DELETED, you have created a matching event bus, but the
     * event source has since been deleted.</p>
     */
    inline const EventSourceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const EventSourceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(EventSourceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline PartnerEventSourceAccount& WithState(const EventSourceState& value) { SetState(value); return *this;}
    inline PartnerEventSourceAccount& WithState(EventSourceState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    EventSourceState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
