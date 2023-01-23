/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class UpdateArchiveRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API UpdateArchiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateArchive"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the archive to update.</p>
     */
    inline const Aws::String& GetArchiveName() const{ return m_archiveName; }

    /**
     * <p>The name of the archive to update.</p>
     */
    inline bool ArchiveNameHasBeenSet() const { return m_archiveNameHasBeenSet; }

    /**
     * <p>The name of the archive to update.</p>
     */
    inline void SetArchiveName(const Aws::String& value) { m_archiveNameHasBeenSet = true; m_archiveName = value; }

    /**
     * <p>The name of the archive to update.</p>
     */
    inline void SetArchiveName(Aws::String&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::move(value); }

    /**
     * <p>The name of the archive to update.</p>
     */
    inline void SetArchiveName(const char* value) { m_archiveNameHasBeenSet = true; m_archiveName.assign(value); }

    /**
     * <p>The name of the archive to update.</p>
     */
    inline UpdateArchiveRequest& WithArchiveName(const Aws::String& value) { SetArchiveName(value); return *this;}

    /**
     * <p>The name of the archive to update.</p>
     */
    inline UpdateArchiveRequest& WithArchiveName(Aws::String&& value) { SetArchiveName(std::move(value)); return *this;}

    /**
     * <p>The name of the archive to update.</p>
     */
    inline UpdateArchiveRequest& WithArchiveName(const char* value) { SetArchiveName(value); return *this;}


    /**
     * <p>The description for the archive.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the archive.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the archive.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the archive.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the archive.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the archive.</p>
     */
    inline UpdateArchiveRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the archive.</p>
     */
    inline UpdateArchiveRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the archive.</p>
     */
    inline UpdateArchiveRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The event pattern to use to filter events sent to the archive.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <p>The event pattern to use to filter events sent to the archive.</p>
     */
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }

    /**
     * <p>The event pattern to use to filter events sent to the archive.</p>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <p>The event pattern to use to filter events sent to the archive.</p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }

    /**
     * <p>The event pattern to use to filter events sent to the archive.</p>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <p>The event pattern to use to filter events sent to the archive.</p>
     */
    inline UpdateArchiveRequest& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern to use to filter events sent to the archive.</p>
     */
    inline UpdateArchiveRequest& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}

    /**
     * <p>The event pattern to use to filter events sent to the archive.</p>
     */
    inline UpdateArchiveRequest& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}


    /**
     * <p>The number of days to retain events in the archive.</p>
     */
    inline int GetRetentionDays() const{ return m_retentionDays; }

    /**
     * <p>The number of days to retain events in the archive.</p>
     */
    inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }

    /**
     * <p>The number of days to retain events in the archive.</p>
     */
    inline void SetRetentionDays(int value) { m_retentionDaysHasBeenSet = true; m_retentionDays = value; }

    /**
     * <p>The number of days to retain events in the archive.</p>
     */
    inline UpdateArchiveRequest& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}

  private:

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    int m_retentionDays;
    bool m_retentionDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
