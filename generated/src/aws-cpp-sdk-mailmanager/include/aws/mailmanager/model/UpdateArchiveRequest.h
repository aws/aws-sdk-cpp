/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ArchiveRetention.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   * <p>The request to update properties of an existing email archive.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/UpdateArchiveRequest">AWS
   * API Reference</a></p>
   */
  class UpdateArchiveRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API UpdateArchiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateArchive"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the archive to update.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    inline void SetArchiveId(const Aws::String& value) { m_archiveIdHasBeenSet = true; m_archiveId = value; }
    inline void SetArchiveId(Aws::String&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::move(value); }
    inline void SetArchiveId(const char* value) { m_archiveIdHasBeenSet = true; m_archiveId.assign(value); }
    inline UpdateArchiveRequest& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}
    inline UpdateArchiveRequest& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}
    inline UpdateArchiveRequest& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new, unique name for the archive.</p>
     */
    inline const Aws::String& GetArchiveName() const{ return m_archiveName; }
    inline bool ArchiveNameHasBeenSet() const { return m_archiveNameHasBeenSet; }
    inline void SetArchiveName(const Aws::String& value) { m_archiveNameHasBeenSet = true; m_archiveName = value; }
    inline void SetArchiveName(Aws::String&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::move(value); }
    inline void SetArchiveName(const char* value) { m_archiveNameHasBeenSet = true; m_archiveName.assign(value); }
    inline UpdateArchiveRequest& WithArchiveName(const Aws::String& value) { SetArchiveName(value); return *this;}
    inline UpdateArchiveRequest& WithArchiveName(Aws::String&& value) { SetArchiveName(std::move(value)); return *this;}
    inline UpdateArchiveRequest& WithArchiveName(const char* value) { SetArchiveName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new retention period for emails in the archive.</p>
     */
    inline const ArchiveRetention& GetRetention() const{ return m_retention; }
    inline bool RetentionHasBeenSet() const { return m_retentionHasBeenSet; }
    inline void SetRetention(const ArchiveRetention& value) { m_retentionHasBeenSet = true; m_retention = value; }
    inline void SetRetention(ArchiveRetention&& value) { m_retentionHasBeenSet = true; m_retention = std::move(value); }
    inline UpdateArchiveRequest& WithRetention(const ArchiveRetention& value) { SetRetention(value); return *this;}
    inline UpdateArchiveRequest& WithRetention(ArchiveRetention&& value) { SetRetention(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet = false;

    ArchiveRetention m_retention;
    bool m_retentionHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
