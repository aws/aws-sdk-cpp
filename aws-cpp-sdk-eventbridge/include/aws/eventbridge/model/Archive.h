/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ArchiveState.h>
#include <aws/core/utils/DateTime.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>An <code>Archive</code> object that contains details about an
   * archive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/Archive">AWS
   * API Reference</a></p>
   */
  class Archive
  {
  public:
    AWS_EVENTBRIDGE_API Archive();
    AWS_EVENTBRIDGE_API Archive(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Archive& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the archive.</p>
     */
    inline const Aws::String& GetArchiveName() const{ return m_archiveName; }

    /**
     * <p>The name of the archive.</p>
     */
    inline bool ArchiveNameHasBeenSet() const { return m_archiveNameHasBeenSet; }

    /**
     * <p>The name of the archive.</p>
     */
    inline void SetArchiveName(const Aws::String& value) { m_archiveNameHasBeenSet = true; m_archiveName = value; }

    /**
     * <p>The name of the archive.</p>
     */
    inline void SetArchiveName(Aws::String&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::move(value); }

    /**
     * <p>The name of the archive.</p>
     */
    inline void SetArchiveName(const char* value) { m_archiveNameHasBeenSet = true; m_archiveName.assign(value); }

    /**
     * <p>The name of the archive.</p>
     */
    inline Archive& WithArchiveName(const Aws::String& value) { SetArchiveName(value); return *this;}

    /**
     * <p>The name of the archive.</p>
     */
    inline Archive& WithArchiveName(Aws::String&& value) { SetArchiveName(std::move(value)); return *this;}

    /**
     * <p>The name of the archive.</p>
     */
    inline Archive& WithArchiveName(const char* value) { SetArchiveName(value); return *this;}


    /**
     * <p>The ARN of the event bus associated with the archive. Only events from this
     * event bus are sent to the archive.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The ARN of the event bus associated with the archive. Only events from this
     * event bus are sent to the archive.</p>
     */
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }

    /**
     * <p>The ARN of the event bus associated with the archive. Only events from this
     * event bus are sent to the archive.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The ARN of the event bus associated with the archive. Only events from this
     * event bus are sent to the archive.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::move(value); }

    /**
     * <p>The ARN of the event bus associated with the archive. Only events from this
     * event bus are sent to the archive.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }

    /**
     * <p>The ARN of the event bus associated with the archive. Only events from this
     * event bus are sent to the archive.</p>
     */
    inline Archive& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The ARN of the event bus associated with the archive. Only events from this
     * event bus are sent to the archive.</p>
     */
    inline Archive& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event bus associated with the archive. Only events from this
     * event bus are sent to the archive.</p>
     */
    inline Archive& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>The current state of the archive.</p>
     */
    inline const ArchiveState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the archive.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the archive.</p>
     */
    inline void SetState(const ArchiveState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the archive.</p>
     */
    inline void SetState(ArchiveState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the archive.</p>
     */
    inline Archive& WithState(const ArchiveState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the archive.</p>
     */
    inline Archive& WithState(ArchiveState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A description for the reason that the archive is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>A description for the reason that the archive is in the current state.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>A description for the reason that the archive is in the current state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>A description for the reason that the archive is in the current state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>A description for the reason that the archive is in the current state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>A description for the reason that the archive is in the current state.</p>
     */
    inline Archive& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>A description for the reason that the archive is in the current state.</p>
     */
    inline Archive& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>A description for the reason that the archive is in the current state.</p>
     */
    inline Archive& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The number of days to retain events in the archive before they are
     * deleted.</p>
     */
    inline int GetRetentionDays() const{ return m_retentionDays; }

    /**
     * <p>The number of days to retain events in the archive before they are
     * deleted.</p>
     */
    inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }

    /**
     * <p>The number of days to retain events in the archive before they are
     * deleted.</p>
     */
    inline void SetRetentionDays(int value) { m_retentionDaysHasBeenSet = true; m_retentionDays = value; }

    /**
     * <p>The number of days to retain events in the archive before they are
     * deleted.</p>
     */
    inline Archive& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}


    /**
     * <p>The size of the archive, in bytes.</p>
     */
    inline long long GetSizeBytes() const{ return m_sizeBytes; }

    /**
     * <p>The size of the archive, in bytes.</p>
     */
    inline bool SizeBytesHasBeenSet() const { return m_sizeBytesHasBeenSet; }

    /**
     * <p>The size of the archive, in bytes.</p>
     */
    inline void SetSizeBytes(long long value) { m_sizeBytesHasBeenSet = true; m_sizeBytes = value; }

    /**
     * <p>The size of the archive, in bytes.</p>
     */
    inline Archive& WithSizeBytes(long long value) { SetSizeBytes(value); return *this;}


    /**
     * <p>The number of events in the archive.</p>
     */
    inline long long GetEventCount() const{ return m_eventCount; }

    /**
     * <p>The number of events in the archive.</p>
     */
    inline bool EventCountHasBeenSet() const { return m_eventCountHasBeenSet; }

    /**
     * <p>The number of events in the archive.</p>
     */
    inline void SetEventCount(long long value) { m_eventCountHasBeenSet = true; m_eventCount = value; }

    /**
     * <p>The number of events in the archive.</p>
     */
    inline Archive& WithEventCount(long long value) { SetEventCount(value); return *this;}


    /**
     * <p>The time stamp for the time that the archive was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time stamp for the time that the archive was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time stamp for the time that the archive was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time stamp for the time that the archive was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time stamp for the time that the archive was created.</p>
     */
    inline Archive& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time stamp for the time that the archive was created.</p>
     */
    inline Archive& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet = false;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    ArchiveState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    int m_retentionDays;
    bool m_retentionDaysHasBeenSet = false;

    long long m_sizeBytes;
    bool m_sizeBytesHasBeenSet = false;

    long long m_eventCount;
    bool m_eventCountHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
