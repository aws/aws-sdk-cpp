/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-connections/model/Revision.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codestar-connections/model/ResourceSyncStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/ResourceSyncEvent.h>
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
namespace CodeStarconnections
{
namespace Model
{

  /**
   * <p>Information about a resource sync attempt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/ResourceSyncAttempt">AWS
   * API Reference</a></p>
   */
  class ResourceSyncAttempt
  {
  public:
    AWS_CODESTARCONNECTIONS_API ResourceSyncAttempt() = default;
    AWS_CODESTARCONNECTIONS_API ResourceSyncAttempt(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API ResourceSyncAttempt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The events related to a resource sync attempt.</p>
     */
    inline const Aws::Vector<ResourceSyncEvent>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<ResourceSyncEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<ResourceSyncEvent>>
    ResourceSyncAttempt& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = ResourceSyncEvent>
    ResourceSyncAttempt& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the resource as defined in the resource's
     * <code>config-file</code> in the linked repository.</p>
     */
    inline const Revision& GetInitialRevision() const { return m_initialRevision; }
    inline bool InitialRevisionHasBeenSet() const { return m_initialRevisionHasBeenSet; }
    template<typename InitialRevisionT = Revision>
    void SetInitialRevision(InitialRevisionT&& value) { m_initialRevisionHasBeenSet = true; m_initialRevision = std::forward<InitialRevisionT>(value); }
    template<typename InitialRevisionT = Revision>
    ResourceSyncAttempt& WithInitialRevision(InitialRevisionT&& value) { SetInitialRevision(std::forward<InitialRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time for a resource sync attempt.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    ResourceSyncAttempt& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for a resource sync attempt. The follow are valid statuses:</p>
     * <ul> <li> <p>SYNC-INITIATED - A resource sync attempt has been created and will
     * begin soon.</p> </li> <li> <p>SYNCING - Syncing has started and work is being
     * done to reconcile state.</p> </li> <li> <p>SYNCED - Syncing has completed
     * successfully.</p> </li> <li> <p>SYNC_FAILED - A resource sync attempt has
     * failed.</p> </li> </ul>
     */
    inline ResourceSyncStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceSyncStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResourceSyncAttempt& WithStatus(ResourceSyncStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired state of the resource as defined in the resource's
     * <code>config-file</code> in the linked repository. Git sync attempts to update
     * the resource to this state.</p>
     */
    inline const Revision& GetTargetRevision() const { return m_targetRevision; }
    inline bool TargetRevisionHasBeenSet() const { return m_targetRevisionHasBeenSet; }
    template<typename TargetRevisionT = Revision>
    void SetTargetRevision(TargetRevisionT&& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = std::forward<TargetRevisionT>(value); }
    template<typename TargetRevisionT = Revision>
    ResourceSyncAttempt& WithTargetRevision(TargetRevisionT&& value) { SetTargetRevision(std::forward<TargetRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services resource that is attempted to be
     * synchronized.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    ResourceSyncAttempt& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceSyncEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Revision m_initialRevision;
    bool m_initialRevisionHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    ResourceSyncStatus m_status{ResourceSyncStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Revision m_targetRevision;
    bool m_targetRevisionHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
