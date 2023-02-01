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
  class DeleteArchiveRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API DeleteArchiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteArchive"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the archive to delete.</p>
     */
    inline const Aws::String& GetArchiveName() const{ return m_archiveName; }

    /**
     * <p>The name of the archive to delete.</p>
     */
    inline bool ArchiveNameHasBeenSet() const { return m_archiveNameHasBeenSet; }

    /**
     * <p>The name of the archive to delete.</p>
     */
    inline void SetArchiveName(const Aws::String& value) { m_archiveNameHasBeenSet = true; m_archiveName = value; }

    /**
     * <p>The name of the archive to delete.</p>
     */
    inline void SetArchiveName(Aws::String&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::move(value); }

    /**
     * <p>The name of the archive to delete.</p>
     */
    inline void SetArchiveName(const char* value) { m_archiveNameHasBeenSet = true; m_archiveName.assign(value); }

    /**
     * <p>The name of the archive to delete.</p>
     */
    inline DeleteArchiveRequest& WithArchiveName(const Aws::String& value) { SetArchiveName(value); return *this;}

    /**
     * <p>The name of the archive to delete.</p>
     */
    inline DeleteArchiveRequest& WithArchiveName(Aws::String&& value) { SetArchiveName(std::move(value)); return *this;}

    /**
     * <p>The name of the archive to delete.</p>
     */
    inline DeleteArchiveRequest& WithArchiveName(const char* value) { SetArchiveName(value); return *this;}

  private:

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
