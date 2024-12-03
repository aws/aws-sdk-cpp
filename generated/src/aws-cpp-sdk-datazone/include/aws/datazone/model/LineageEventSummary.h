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
    AWS_DATAZONE_API LineageEventSummary();
    AWS_DATAZONE_API LineageEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp at which data lineage event was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline LineageEventSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline LineageEventSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the data lineage event.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline LineageEventSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline LineageEventSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline LineageEventSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain ID of the lineage event.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline LineageEventSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline LineageEventSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline LineageEventSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the data lineate event.</p>
     */
    inline const EventSummary& GetEventSummary() const{ return m_eventSummary; }
    inline bool EventSummaryHasBeenSet() const { return m_eventSummaryHasBeenSet; }
    inline void SetEventSummary(const EventSummary& value) { m_eventSummaryHasBeenSet = true; m_eventSummary = value; }
    inline void SetEventSummary(EventSummary&& value) { m_eventSummaryHasBeenSet = true; m_eventSummary = std::move(value); }
    inline LineageEventSummary& WithEventSummary(const EventSummary& value) { SetEventSummary(value); return *this;}
    inline LineageEventSummary& WithEventSummary(EventSummary&& value) { SetEventSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the data lineage event.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }
    inline LineageEventSummary& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}
    inline LineageEventSummary& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data lineage event.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline LineageEventSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline LineageEventSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline LineageEventSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing status of the data lineage event.</p>
     */
    inline const LineageEventProcessingStatus& GetProcessingStatus() const{ return m_processingStatus; }
    inline bool ProcessingStatusHasBeenSet() const { return m_processingStatusHasBeenSet; }
    inline void SetProcessingStatus(const LineageEventProcessingStatus& value) { m_processingStatusHasBeenSet = true; m_processingStatus = value; }
    inline void SetProcessingStatus(LineageEventProcessingStatus&& value) { m_processingStatusHasBeenSet = true; m_processingStatus = std::move(value); }
    inline LineageEventSummary& WithProcessingStatus(const LineageEventProcessingStatus& value) { SetProcessingStatus(value); return *this;}
    inline LineageEventSummary& WithProcessingStatus(LineageEventProcessingStatus&& value) { SetProcessingStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    EventSummary m_eventSummary;
    bool m_eventSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    LineageEventProcessingStatus m_processingStatus;
    bool m_processingStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
