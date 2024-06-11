/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/EvidenceFinderEnablementStatus.h>
#include <aws/auditmanager/model/EvidenceFinderBackfillStatus.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p>The settings object that specifies whether evidence finder is enabled. This
   * object also describes the related event data store, and the backfill status for
   * populating the event data store with evidence data.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/EvidenceFinderEnablement">AWS
   * API Reference</a></p>
   */
  class EvidenceFinderEnablement
  {
  public:
    AWS_AUDITMANAGER_API EvidenceFinderEnablement();
    AWS_AUDITMANAGER_API EvidenceFinderEnablement(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API EvidenceFinderEnablement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudTrail Lake event data store that’s
     * used by evidence finder. The event data store is the lake of evidence data that
     * evidence finder runs queries against.</p>
     */
    inline const Aws::String& GetEventDataStoreArn() const{ return m_eventDataStoreArn; }
    inline bool EventDataStoreArnHasBeenSet() const { return m_eventDataStoreArnHasBeenSet; }
    inline void SetEventDataStoreArn(const Aws::String& value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn = value; }
    inline void SetEventDataStoreArn(Aws::String&& value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn = std::move(value); }
    inline void SetEventDataStoreArn(const char* value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn.assign(value); }
    inline EvidenceFinderEnablement& WithEventDataStoreArn(const Aws::String& value) { SetEventDataStoreArn(value); return *this;}
    inline EvidenceFinderEnablement& WithEventDataStoreArn(Aws::String&& value) { SetEventDataStoreArn(std::move(value)); return *this;}
    inline EvidenceFinderEnablement& WithEventDataStoreArn(const char* value) { SetEventDataStoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the evidence finder feature and the related event data
     * store. </p> <ul> <li> <p> <code>ENABLE_IN_PROGRESS</code> means that you
     * requested to enable evidence finder. An event data store is currently being
     * created to support evidence finder queries.</p> </li> <li> <p>
     * <code>ENABLED</code> means that an event data store was successfully created and
     * evidence finder is enabled. We recommend that you wait 7 days until the event
     * data store is backfilled with your past two years’ worth of evidence data. You
     * can use evidence finder in the meantime, but not all data might be available
     * until the backfill is complete.</p> </li> <li> <p>
     * <code>DISABLE_IN_PROGRESS</code> means that you requested to disable evidence
     * finder, and your request is pending the deletion of the event data store.</p>
     * </li> <li> <p> <code>DISABLED</code> means that you have permanently disabled
     * evidence finder and the event data store has been deleted. You can't re-enable
     * evidence finder after this point.</p> </li> </ul>
     */
    inline const EvidenceFinderEnablementStatus& GetEnablementStatus() const{ return m_enablementStatus; }
    inline bool EnablementStatusHasBeenSet() const { return m_enablementStatusHasBeenSet; }
    inline void SetEnablementStatus(const EvidenceFinderEnablementStatus& value) { m_enablementStatusHasBeenSet = true; m_enablementStatus = value; }
    inline void SetEnablementStatus(EvidenceFinderEnablementStatus&& value) { m_enablementStatusHasBeenSet = true; m_enablementStatus = std::move(value); }
    inline EvidenceFinderEnablement& WithEnablementStatus(const EvidenceFinderEnablementStatus& value) { SetEnablementStatus(value); return *this;}
    inline EvidenceFinderEnablement& WithEnablementStatus(EvidenceFinderEnablementStatus&& value) { SetEnablementStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the evidence data backfill process. </p> <p>The
     * backfill starts after you enable evidence finder. During this task, Audit
     * Manager populates an event data store with your past two years’ worth of
     * evidence data so that your evidence can be queried.</p> <ul> <li> <p>
     * <code>NOT_STARTED</code> means that the backfill hasn’t started yet. </p> </li>
     * <li> <p> <code>IN_PROGRESS</code> means that the backfill is in progress. This
     * can take up to 7 days to complete, depending on the amount of evidence data.
     * </p> </li> <li> <p> <code>COMPLETED</code> means that the backfill is complete.
     * All of your past evidence is now queryable. </p> </li> </ul>
     */
    inline const EvidenceFinderBackfillStatus& GetBackfillStatus() const{ return m_backfillStatus; }
    inline bool BackfillStatusHasBeenSet() const { return m_backfillStatusHasBeenSet; }
    inline void SetBackfillStatus(const EvidenceFinderBackfillStatus& value) { m_backfillStatusHasBeenSet = true; m_backfillStatus = value; }
    inline void SetBackfillStatus(EvidenceFinderBackfillStatus&& value) { m_backfillStatusHasBeenSet = true; m_backfillStatus = std::move(value); }
    inline EvidenceFinderEnablement& WithBackfillStatus(const EvidenceFinderBackfillStatus& value) { SetBackfillStatus(value); return *this;}
    inline EvidenceFinderEnablement& WithBackfillStatus(EvidenceFinderBackfillStatus&& value) { SetBackfillStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents any errors that occurred when enabling or disabling evidence
     * finder. </p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline EvidenceFinderEnablement& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline EvidenceFinderEnablement& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline EvidenceFinderEnablement& WithError(const char* value) { SetError(value); return *this;}
    ///@}
  private:

    Aws::String m_eventDataStoreArn;
    bool m_eventDataStoreArnHasBeenSet = false;

    EvidenceFinderEnablementStatus m_enablementStatus;
    bool m_enablementStatusHasBeenSet = false;

    EvidenceFinderBackfillStatus m_backfillStatus;
    bool m_backfillStatusHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
