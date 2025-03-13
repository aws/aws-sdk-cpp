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
  class UpdateArchiveRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API UpdateArchiveRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateArchive"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the archive to update.</p>
     */
    inline const Aws::String& GetArchiveName() const { return m_archiveName; }
    inline bool ArchiveNameHasBeenSet() const { return m_archiveNameHasBeenSet; }
    template<typename ArchiveNameT = Aws::String>
    void SetArchiveName(ArchiveNameT&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::forward<ArchiveNameT>(value); }
    template<typename ArchiveNameT = Aws::String>
    UpdateArchiveRequest& WithArchiveName(ArchiveNameT&& value) { SetArchiveName(std::forward<ArchiveNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the archive.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateArchiveRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event pattern to use to filter events sent to the archive.</p>
     */
    inline const Aws::String& GetEventPattern() const { return m_eventPattern; }
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }
    template<typename EventPatternT = Aws::String>
    void SetEventPattern(EventPatternT&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::forward<EventPatternT>(value); }
    template<typename EventPatternT = Aws::String>
    UpdateArchiveRequest& WithEventPattern(EventPatternT&& value) { SetEventPattern(std::forward<EventPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain events in the archive.</p>
     */
    inline int GetRetentionDays() const { return m_retentionDays; }
    inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }
    inline void SetRetentionDays(int value) { m_retentionDaysHasBeenSet = true; m_retentionDays = value; }
    inline UpdateArchiveRequest& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}
    ///@}
  private:

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    int m_retentionDays{0};
    bool m_retentionDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
