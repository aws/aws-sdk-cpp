/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/RepositorySyncStatus.h>
#include <aws/proton/model/RepositorySyncEvent.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>Detail data for a repository sync attempt activated by a push to a
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/RepositorySyncAttempt">AWS
   * API Reference</a></p>
   */
  class RepositorySyncAttempt
  {
  public:
    AWS_PROTON_API RepositorySyncAttempt();
    AWS_PROTON_API RepositorySyncAttempt(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API RepositorySyncAttempt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Detail data for sync attempt events.</p>
     */
    inline const Aws::Vector<RepositorySyncEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>Detail data for sync attempt events.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>Detail data for sync attempt events.</p>
     */
    inline void SetEvents(const Aws::Vector<RepositorySyncEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>Detail data for sync attempt events.</p>
     */
    inline void SetEvents(Aws::Vector<RepositorySyncEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>Detail data for sync attempt events.</p>
     */
    inline RepositorySyncAttempt& WithEvents(const Aws::Vector<RepositorySyncEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>Detail data for sync attempt events.</p>
     */
    inline RepositorySyncAttempt& WithEvents(Aws::Vector<RepositorySyncEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>Detail data for sync attempt events.</p>
     */
    inline RepositorySyncAttempt& AddEvents(const RepositorySyncEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>Detail data for sync attempt events.</p>
     */
    inline RepositorySyncAttempt& AddEvents(RepositorySyncEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the sync attempt started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time when the sync attempt started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The time when the sync attempt started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The time when the sync attempt started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The time when the sync attempt started.</p>
     */
    inline RepositorySyncAttempt& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time when the sync attempt started.</p>
     */
    inline RepositorySyncAttempt& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The sync attempt status.</p>
     */
    inline const RepositorySyncStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The sync attempt status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The sync attempt status.</p>
     */
    inline void SetStatus(const RepositorySyncStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The sync attempt status.</p>
     */
    inline void SetStatus(RepositorySyncStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The sync attempt status.</p>
     */
    inline RepositorySyncAttempt& WithStatus(const RepositorySyncStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The sync attempt status.</p>
     */
    inline RepositorySyncAttempt& WithStatus(RepositorySyncStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Vector<RepositorySyncEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    RepositorySyncStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
