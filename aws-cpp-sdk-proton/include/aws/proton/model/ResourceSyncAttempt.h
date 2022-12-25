/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/Revision.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/ResourceSyncStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/ResourceSyncEvent.h>
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
   * <p>Detail data for a resource sync attempt activated by a push to a
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ResourceSyncAttempt">AWS
   * API Reference</a></p>
   */
  class ResourceSyncAttempt
  {
  public:
    AWS_PROTON_API ResourceSyncAttempt();
    AWS_PROTON_API ResourceSyncAttempt(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ResourceSyncAttempt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of events with detail data.</p>
     */
    inline const Aws::Vector<ResourceSyncEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>An array of events with detail data.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>An array of events with detail data.</p>
     */
    inline void SetEvents(const Aws::Vector<ResourceSyncEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>An array of events with detail data.</p>
     */
    inline void SetEvents(Aws::Vector<ResourceSyncEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>An array of events with detail data.</p>
     */
    inline ResourceSyncAttempt& WithEvents(const Aws::Vector<ResourceSyncEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>An array of events with detail data.</p>
     */
    inline ResourceSyncAttempt& WithEvents(Aws::Vector<ResourceSyncEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>An array of events with detail data.</p>
     */
    inline ResourceSyncAttempt& AddEvents(const ResourceSyncEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>An array of events with detail data.</p>
     */
    inline ResourceSyncAttempt& AddEvents(ResourceSyncEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>Detail data for the initial repository commit, path and push.</p>
     */
    inline const Revision& GetInitialRevision() const{ return m_initialRevision; }

    /**
     * <p>Detail data for the initial repository commit, path and push.</p>
     */
    inline bool InitialRevisionHasBeenSet() const { return m_initialRevisionHasBeenSet; }

    /**
     * <p>Detail data for the initial repository commit, path and push.</p>
     */
    inline void SetInitialRevision(const Revision& value) { m_initialRevisionHasBeenSet = true; m_initialRevision = value; }

    /**
     * <p>Detail data for the initial repository commit, path and push.</p>
     */
    inline void SetInitialRevision(Revision&& value) { m_initialRevisionHasBeenSet = true; m_initialRevision = std::move(value); }

    /**
     * <p>Detail data for the initial repository commit, path and push.</p>
     */
    inline ResourceSyncAttempt& WithInitialRevision(const Revision& value) { SetInitialRevision(value); return *this;}

    /**
     * <p>Detail data for the initial repository commit, path and push.</p>
     */
    inline ResourceSyncAttempt& WithInitialRevision(Revision&& value) { SetInitialRevision(std::move(value)); return *this;}


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
    inline ResourceSyncAttempt& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time when the sync attempt started.</p>
     */
    inline ResourceSyncAttempt& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the sync attempt.</p>
     */
    inline const ResourceSyncStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the sync attempt.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the sync attempt.</p>
     */
    inline void SetStatus(const ResourceSyncStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the sync attempt.</p>
     */
    inline void SetStatus(ResourceSyncStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the sync attempt.</p>
     */
    inline ResourceSyncAttempt& WithStatus(const ResourceSyncStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the sync attempt.</p>
     */
    inline ResourceSyncAttempt& WithStatus(ResourceSyncStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The resource that is synced to.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The resource that is synced to.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The resource that is synced to.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The resource that is synced to.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The resource that is synced to.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The resource that is synced to.</p>
     */
    inline ResourceSyncAttempt& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The resource that is synced to.</p>
     */
    inline ResourceSyncAttempt& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The resource that is synced to.</p>
     */
    inline ResourceSyncAttempt& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>Detail data for the target revision.</p>
     */
    inline const Revision& GetTargetRevision() const{ return m_targetRevision; }

    /**
     * <p>Detail data for the target revision.</p>
     */
    inline bool TargetRevisionHasBeenSet() const { return m_targetRevisionHasBeenSet; }

    /**
     * <p>Detail data for the target revision.</p>
     */
    inline void SetTargetRevision(const Revision& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = value; }

    /**
     * <p>Detail data for the target revision.</p>
     */
    inline void SetTargetRevision(Revision&& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = std::move(value); }

    /**
     * <p>Detail data for the target revision.</p>
     */
    inline ResourceSyncAttempt& WithTargetRevision(const Revision& value) { SetTargetRevision(value); return *this;}

    /**
     * <p>Detail data for the target revision.</p>
     */
    inline ResourceSyncAttempt& WithTargetRevision(Revision&& value) { SetTargetRevision(std::move(value)); return *this;}

  private:

    Aws::Vector<ResourceSyncEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Revision m_initialRevision;
    bool m_initialRevisionHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    ResourceSyncStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Revision m_targetRevision;
    bool m_targetRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
