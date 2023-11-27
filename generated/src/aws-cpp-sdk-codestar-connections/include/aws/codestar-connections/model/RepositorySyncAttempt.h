/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codestar-connections/model/RepositorySyncStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-connections/model/RepositorySyncEvent.h>
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
   * <p>Information about a repository sync attempt for a repository with a sync
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/RepositorySyncAttempt">AWS
   * API Reference</a></p>
   */
  class RepositorySyncAttempt
  {
  public:
    AWS_CODESTARCONNECTIONS_API RepositorySyncAttempt();
    AWS_CODESTARCONNECTIONS_API RepositorySyncAttempt(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API RepositorySyncAttempt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time of a specific sync attempt.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The start time of a specific sync attempt.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The start time of a specific sync attempt.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The start time of a specific sync attempt.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The start time of a specific sync attempt.</p>
     */
    inline RepositorySyncAttempt& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The start time of a specific sync attempt.</p>
     */
    inline RepositorySyncAttempt& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


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
    inline const RepositorySyncStatus& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const RepositorySyncStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(RepositorySyncStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline RepositorySyncAttempt& WithStatus(const RepositorySyncStatus& value) { SetStatus(value); return *this;}

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
    inline RepositorySyncAttempt& WithStatus(RepositorySyncStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The events associated with a specific sync attempt.</p>
     */
    inline const Aws::Vector<RepositorySyncEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>The events associated with a specific sync attempt.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>The events associated with a specific sync attempt.</p>
     */
    inline void SetEvents(const Aws::Vector<RepositorySyncEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The events associated with a specific sync attempt.</p>
     */
    inline void SetEvents(Aws::Vector<RepositorySyncEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>The events associated with a specific sync attempt.</p>
     */
    inline RepositorySyncAttempt& WithEvents(const Aws::Vector<RepositorySyncEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>The events associated with a specific sync attempt.</p>
     */
    inline RepositorySyncAttempt& WithEvents(Aws::Vector<RepositorySyncEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The events associated with a specific sync attempt.</p>
     */
    inline RepositorySyncAttempt& AddEvents(const RepositorySyncEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The events associated with a specific sync attempt.</p>
     */
    inline RepositorySyncAttempt& AddEvents(RepositorySyncEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    RepositorySyncStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<RepositorySyncEvent> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
