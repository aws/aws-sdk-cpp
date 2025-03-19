/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeconnections/model/RepositorySyncStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeconnections/model/RepositorySyncEvent.h>
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
namespace CodeConnections
{
namespace Model
{

  /**
   * <p>Information about a repository sync attempt for a repository with a sync
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/RepositorySyncAttempt">AWS
   * API Reference</a></p>
   */
  class RepositorySyncAttempt
  {
  public:
    AWS_CODECONNECTIONS_API RepositorySyncAttempt() = default;
    AWS_CODECONNECTIONS_API RepositorySyncAttempt(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API RepositorySyncAttempt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time of a specific sync attempt.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    RepositorySyncAttempt& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a specific sync attempt. The following are valid statuses:</p>
     * <ul> <li> <p>INITIATED - A repository sync attempt has been created and will
     * begin soon.</p> </li> <li> <p>IN_PROGRESS - A repository sync attempt has
     * started and work is being done to reconcile the branch.</p> </li> <li>
     * <p>SUCCEEDED - The repository sync attempt has completed successfully.</p> </li>
     * <li> <p>FAILED - The repository sync attempt has failed.</p> </li> <li>
     * <p>QUEUED - The repository sync attempt didn't execute and was queued.</p> </li>
     * </ul>
     */
    inline RepositorySyncStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RepositorySyncStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RepositorySyncAttempt& WithStatus(RepositorySyncStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The events associated with a specific sync attempt.</p>
     */
    inline const Aws::Vector<RepositorySyncEvent>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<RepositorySyncEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<RepositorySyncEvent>>
    RepositorySyncAttempt& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = RepositorySyncEvent>
    RepositorySyncAttempt& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    RepositorySyncStatus m_status{RepositorySyncStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<RepositorySyncEvent> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
