﻿/**
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
  class AWS_CLOUDWATCHEVENTS_API DescribeArchiveRequest : public CloudWatchEventsRequest
  {
  public:
    DescribeArchiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeArchive"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the archive to retrieve.</p>
     */
    inline const Aws::String& GetArchiveName() const{ return m_archiveName; }

    /**
     * <p>The name of the archive to retrieve.</p>
     */
    inline bool ArchiveNameHasBeenSet() const { return m_archiveNameHasBeenSet; }

    /**
     * <p>The name of the archive to retrieve.</p>
     */
    inline void SetArchiveName(const Aws::String& value) { m_archiveNameHasBeenSet = true; m_archiveName = value; }

    /**
     * <p>The name of the archive to retrieve.</p>
     */
    inline void SetArchiveName(Aws::String&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::move(value); }

    /**
     * <p>The name of the archive to retrieve.</p>
     */
    inline void SetArchiveName(const char* value) { m_archiveNameHasBeenSet = true; m_archiveName.assign(value); }

    /**
     * <p>The name of the archive to retrieve.</p>
     */
    inline DescribeArchiveRequest& WithArchiveName(const Aws::String& value) { SetArchiveName(value); return *this;}

    /**
     * <p>The name of the archive to retrieve.</p>
     */
    inline DescribeArchiveRequest& WithArchiveName(Aws::String&& value) { SetArchiveName(std::move(value)); return *this;}

    /**
     * <p>The name of the archive to retrieve.</p>
     */
    inline DescribeArchiveRequest& WithArchiveName(const char* value) { SetArchiveName(value); return *this;}

  private:

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
