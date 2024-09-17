/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ActionFailurePolicy.h>
#include <aws/mailmanager/model/MailFrom.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The action relays the email via SMTP to another specific SMTP
   * server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RelayAction">AWS
   * API Reference</a></p>
   */
  class RelayAction
  {
  public:
    AWS_MAILMANAGER_API RelayAction();
    AWS_MAILMANAGER_API RelayAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RelayAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, the specified relay has been
     * deleted.</p>
     */
    inline const ActionFailurePolicy& GetActionFailurePolicy() const{ return m_actionFailurePolicy; }
    inline bool ActionFailurePolicyHasBeenSet() const { return m_actionFailurePolicyHasBeenSet; }
    inline void SetActionFailurePolicy(const ActionFailurePolicy& value) { m_actionFailurePolicyHasBeenSet = true; m_actionFailurePolicy = value; }
    inline void SetActionFailurePolicy(ActionFailurePolicy&& value) { m_actionFailurePolicyHasBeenSet = true; m_actionFailurePolicy = std::move(value); }
    inline RelayAction& WithActionFailurePolicy(const ActionFailurePolicy& value) { SetActionFailurePolicy(value); return *this;}
    inline RelayAction& WithActionFailurePolicy(ActionFailurePolicy&& value) { SetActionFailurePolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This action specifies whether to preserve or replace original mail from
     * address while relaying received emails to a destination server.</p>
     */
    inline const MailFrom& GetMailFrom() const{ return m_mailFrom; }
    inline bool MailFromHasBeenSet() const { return m_mailFromHasBeenSet; }
    inline void SetMailFrom(const MailFrom& value) { m_mailFromHasBeenSet = true; m_mailFrom = value; }
    inline void SetMailFrom(MailFrom&& value) { m_mailFromHasBeenSet = true; m_mailFrom = std::move(value); }
    inline RelayAction& WithMailFrom(const MailFrom& value) { SetMailFrom(value); return *this;}
    inline RelayAction& WithMailFrom(MailFrom&& value) { SetMailFrom(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the relay resource to be used when relaying an email.</p>
     */
    inline const Aws::String& GetRelay() const{ return m_relay; }
    inline bool RelayHasBeenSet() const { return m_relayHasBeenSet; }
    inline void SetRelay(const Aws::String& value) { m_relayHasBeenSet = true; m_relay = value; }
    inline void SetRelay(Aws::String&& value) { m_relayHasBeenSet = true; m_relay = std::move(value); }
    inline void SetRelay(const char* value) { m_relayHasBeenSet = true; m_relay.assign(value); }
    inline RelayAction& WithRelay(const Aws::String& value) { SetRelay(value); return *this;}
    inline RelayAction& WithRelay(Aws::String&& value) { SetRelay(std::move(value)); return *this;}
    inline RelayAction& WithRelay(const char* value) { SetRelay(value); return *this;}
    ///@}
  private:

    ActionFailurePolicy m_actionFailurePolicy;
    bool m_actionFailurePolicyHasBeenSet = false;

    MailFrom m_mailFrom;
    bool m_mailFromHasBeenSet = false;

    Aws::String m_relay;
    bool m_relayHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
