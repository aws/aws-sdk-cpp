/**
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
    AWS_APPCONFIG_API DeploymentEvent() = default;
    AWS_APPCONFIG_API DeploymentEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API DeploymentEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of deployment event. Deployment event types include the start, stop,
     * or completion of a deployment; a percentage update; the start or stop of a bake
     * period; and the start or completion of a rollback.</p>
     */
    inline DeploymentEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(DeploymentEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline DeploymentEvent& WithEventType(DeploymentEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that triggered the deployment event. Events can be triggered by a
     * user, AppConfig, an Amazon CloudWatch alarm, or an internal error.</p>
     */
    inline TriggeredBy GetTriggeredBy() const { return m_triggeredBy; }
    inline bool TriggeredByHasBeenSet() const { return m_triggeredByHasBeenSet; }
    inline void SetTriggeredBy(TriggeredBy value) { m_triggeredByHasBeenSet = true; m_triggeredBy = value; }
    inline DeploymentEvent& WithTriggeredBy(TriggeredBy value) { SetTriggeredBy(value); return *this;}
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
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DeploymentEvent& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of extensions that were invoked as part of the deployment.</p>
     */
    inline const Aws::Vector<ActionInvocation>& GetActionInvocations() const { return m_actionInvocations; }
    inline bool ActionInvocationsHasBeenSet() const { return m_actionInvocationsHasBeenSet; }
    template<typename ActionInvocationsT = Aws::Vector<ActionInvocation>>
    void SetActionInvocations(ActionInvocationsT&& value) { m_actionInvocationsHasBeenSet = true; m_actionInvocations = std::forward<ActionInvocationsT>(value); }
    template<typename ActionInvocationsT = Aws::Vector<ActionInvocation>>
    DeploymentEvent& WithActionInvocations(ActionInvocationsT&& value) { SetActionInvocations(std::forward<ActionInvocationsT>(value)); return *this;}
    template<typename ActionInvocationsT = ActionInvocation>
    DeploymentEvent& AddActionInvocations(ActionInvocationsT&& value) { m_actionInvocationsHasBeenSet = true; m_actionInvocations.emplace_back(std::forward<ActionInvocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetOccurredAt() const { return m_occurredAt; }
    inline bool OccurredAtHasBeenSet() const { return m_occurredAtHasBeenSet; }
    template<typename OccurredAtT = Aws::Utils::DateTime>
    void SetOccurredAt(OccurredAtT&& value) { m_occurredAtHasBeenSet = true; m_occurredAt = std::forward<OccurredAtT>(value); }
    template<typename OccurredAtT = Aws::Utils::DateTime>
    DeploymentEvent& WithOccurredAt(OccurredAtT&& value) { SetOccurredAt(std::forward<OccurredAtT>(value)); return *this;}
    ///@}
  private:

    DeploymentEventType m_eventType{DeploymentEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    TriggeredBy m_triggeredBy{TriggeredBy::NOT_SET};
    bool m_triggeredByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ActionInvocation> m_actionInvocations;
    bool m_actionInvocationsHasBeenSet = false;

    Aws::Utils::DateTime m_occurredAt{};
    bool m_occurredAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
