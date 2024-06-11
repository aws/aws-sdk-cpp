/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class CreateArchiveRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API CreateArchiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateArchive"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the archive to create.</p>
     */
    inline const Aws::String& GetArchiveName() const{ return m_archiveName; }
    inline bool ArchiveNameHasBeenSet() const { return m_archiveNameHasBeenSet; }
    inline void SetArchiveName(const Aws::String& value) { m_archiveNameHasBeenSet = true; m_archiveName = value; }
    inline void SetArchiveName(Aws::String&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::move(value); }
    inline void SetArchiveName(const char* value) { m_archiveNameHasBeenSet = true; m_archiveName.assign(value); }
    inline CreateArchiveRequest& WithArchiveName(const Aws::String& value) { SetArchiveName(value); return *this;}
    inline CreateArchiveRequest& WithArchiveName(Aws::String&& value) { SetArchiveName(std::move(value)); return *this;}
    inline CreateArchiveRequest& WithArchiveName(const char* value) { SetArchiveName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the event bus that sends events to the archive.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::move(value); }
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }
    inline CreateArchiveRequest& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}
    inline CreateArchiveRequest& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}
    inline CreateArchiveRequest& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the archive.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateArchiveRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateArchiveRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateArchiveRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An event pattern to use to filter events sent to the archive.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }
    inline CreateArchiveRequest& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}
    inline CreateArchiveRequest& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}
    inline CreateArchiveRequest& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain events for. Default value is 0. If set to 0,
     * events are retained indefinitely</p>
     */
    inline int GetRetentionDays() const{ return m_retentionDays; }
    inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }
    inline void SetRetentionDays(int value) { m_retentionDaysHasBeenSet = true; m_retentionDays = value; }
    inline CreateArchiveRequest& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}
    ///@}
  private:

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet = false;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    int m_retentionDays;
    bool m_retentionDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
