﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/DeploymentEventType.h>
#include <aws/appconfig/model/TriggeredBy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appconfig/model/ActionInvocation.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>An object that describes a deployment event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeploymentEvent">AWS
   * API Reference</a></p>
   */
  class DeploymentEvent
  {
  public:
    AWS_APPCONFIG_API DeploymentEvent();
    AWS_APPCONFIG_API DeploymentEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API DeploymentEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of deployment event. Deployment event types include the start, stop,
     * or completion of a deployment; a percentage update; the start or stop of a bake
     * period; and the start or completion of a rollback.</p>
     */
    inline const DeploymentEventType& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const DeploymentEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(DeploymentEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline DeploymentEvent& WithEventType(const DeploymentEventType& value) { SetEventType(value); return *this;}
    inline DeploymentEvent& WithEventType(DeploymentEventType&& value) { SetEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that triggered the deployment event. Events can be triggered by a
     * user, AppConfig, an Amazon CloudWatch alarm, or an internal error.</p>
     */
    inline const TriggeredBy& GetTriggeredBy() const{ return m_triggeredBy; }
    inline bool TriggeredByHasBeenSet() const { return m_triggeredByHasBeenSet; }
    inline void SetTriggeredBy(const TriggeredBy& value) { m_triggeredByHasBeenSet = true; m_triggeredBy = value; }
    inline void SetTriggeredBy(TriggeredBy&& value) { m_triggeredByHasBeenSet = true; m_triggeredBy = std::move(value); }
    inline DeploymentEvent& WithTriggeredBy(const TriggeredBy& value) { SetTriggeredBy(value); return *this;}
    inline DeploymentEvent& WithTriggeredBy(TriggeredBy&& value) { SetTriggeredBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the deployment event. Descriptions include, but are not
     * limited to, the following:</p> <ul> <li> <p>The Amazon Web Services account or
     * the Amazon CloudWatch alarm ARN that initiated a rollback.</p> </li> <li> <p>The
     * percentage of hosts that received the deployment.</p> </li> <li> <p>A
     * recommendation to attempt a new deployment (in the case of an internal
     * error).</p> </li> </ul>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DeploymentEvent& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DeploymentEvent& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DeploymentEvent& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of extensions that were invoked as part of the deployment.</p>
     */
    inline const Aws::Vector<ActionInvocation>& GetActionInvocations() const{ return m_actionInvocations; }
    inline bool ActionInvocationsHasBeenSet() const { return m_actionInvocationsHasBeenSet; }
    inline void SetActionInvocations(const Aws::Vector<ActionInvocation>& value) { m_actionInvocationsHasBeenSet = true; m_actionInvocations = value; }
    inline void SetActionInvocations(Aws::Vector<ActionInvocation>&& value) { m_actionInvocationsHasBeenSet = true; m_actionInvocations = std::move(value); }
    inline DeploymentEvent& WithActionInvocations(const Aws::Vector<ActionInvocation>& value) { SetActionInvocations(value); return *this;}
    inline DeploymentEvent& WithActionInvocations(Aws::Vector<ActionInvocation>&& value) { SetActionInvocations(std::move(value)); return *this;}
    inline DeploymentEvent& AddActionInvocations(const ActionInvocation& value) { m_actionInvocationsHasBeenSet = true; m_actionInvocations.push_back(value); return *this; }
    inline DeploymentEvent& AddActionInvocations(ActionInvocation&& value) { m_actionInvocationsHasBeenSet = true; m_actionInvocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetOccurredAt() const{ return m_occurredAt; }
    inline bool OccurredAtHasBeenSet() const { return m_occurredAtHasBeenSet; }
    inline void SetOccurredAt(const Aws::Utils::DateTime& value) { m_occurredAtHasBeenSet = true; m_occurredAt = value; }
    inline void SetOccurredAt(Aws::Utils::DateTime&& value) { m_occurredAtHasBeenSet = true; m_occurredAt = std::move(value); }
    inline DeploymentEvent& WithOccurredAt(const Aws::Utils::DateTime& value) { SetOccurredAt(value); return *this;}
    inline DeploymentEvent& WithOccurredAt(Aws::Utils::DateTime&& value) { SetOccurredAt(std::move(value)); return *this;}
    ///@}
  private:

    DeploymentEventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    TriggeredBy m_triggeredBy;
    bool m_triggeredByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ActionInvocation> m_actionInvocations;
    bool m_actionInvocationsHasBeenSet = false;

    Aws::Utils::DateTime m_occurredAt;
    bool m_occurredAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
