/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/EventSummary.h>
#include <aws/datazone/model/LineageEventProcessingStatus.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The data lineage event summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LineageEventSummary">AWS
   * API Reference</a></p>
   */
  class LineageEventSummary
  {
  public:
    AWS_DATAZONE_API LineageEventSummary() = default;
    AWS_DATAZONE_API LineageEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp at which data lineage event was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LineageEventSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the data lineage event.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    LineageEventSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain ID of the lineage event.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    LineageEventSummary& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the data lineate event.</p>
     */
    inline const EventSummary& GetEventSummary() const { return m_eventSummary; }
    inline bool EventSummaryHasBeenSet() const { return m_eventSummaryHasBeenSet; }
    template<typename EventSummaryT = EventSummary>
    void SetEventSummary(EventSummaryT&& value) { m_eventSummaryHasBeenSet = true; m_eventSummary = std::forward<EventSummaryT>(value); }
    template<typename EventSummaryT = EventSummary>
    LineageEventSummary& WithEventSummary(EventSummaryT&& value) { SetEventSummary(std::forward<EventSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the data lineage event.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    LineageEventSummary& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data lineage event.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    LineageEventSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing status of the data lineage event.</p>
     */
    inline LineageEventProcessingStatus GetProcessingStatus() const { return m_processingStatus; }
    inline bool ProcessingStatusHasBeenSet() const { return m_processingStatusHasBeenSet; }
    inline void SetProcessingStatus(LineageEventProcessingStatus value) { m_processingStatusHasBeenSet = true; m_processingStatus = value; }
    inline LineageEventSummary& WithProcessingStatus(LineageEventProcessingStatus value) { SetProcessingStatus(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    EventSummary m_eventSummary;
    bool m_eventSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    LineageEventProcessingStatus m_processingStatus{LineageEventProcessingStatus::NOT_SET};
    bool m_processingStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
