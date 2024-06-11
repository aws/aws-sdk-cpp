/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/ShareMethod.h>
#include <aws/ds/model/ShareStatus.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Details about the shared directory in the directory owner account for which
   * the share request in the directory consumer account has been
   * accepted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/SharedDirectory">AWS
   * API Reference</a></p>
   */
  class SharedDirectory
  {
  public:
    AWS_DIRECTORYSERVICE_API SharedDirectory();
    AWS_DIRECTORYSERVICE_API SharedDirectory(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API SharedDirectory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the directory owner account, which contains the directory that
     * has been shared to the consumer account.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline SharedDirectory& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline SharedDirectory& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline SharedDirectory& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the directory in the directory owner account. </p>
     */
    inline const Aws::String& GetOwnerDirectoryId() const{ return m_ownerDirectoryId; }
    inline bool OwnerDirectoryIdHasBeenSet() const { return m_ownerDirectoryIdHasBeenSet; }
    inline void SetOwnerDirectoryId(const Aws::String& value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId = value; }
    inline void SetOwnerDirectoryId(Aws::String&& value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId = std::move(value); }
    inline void SetOwnerDirectoryId(const char* value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId.assign(value); }
    inline SharedDirectory& WithOwnerDirectoryId(const Aws::String& value) { SetOwnerDirectoryId(value); return *this;}
    inline SharedDirectory& WithOwnerDirectoryId(Aws::String&& value) { SetOwnerDirectoryId(std::move(value)); return *this;}
    inline SharedDirectory& WithOwnerDirectoryId(const char* value) { SetOwnerDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your Amazon Web Services organization
     * (<code>ORGANIZATIONS</code>) or with any Amazon Web Services account by sending
     * a shared directory request (<code>HANDSHAKE</code>).</p>
     */
    inline const ShareMethod& GetShareMethod() const{ return m_shareMethod; }
    inline bool ShareMethodHasBeenSet() const { return m_shareMethodHasBeenSet; }
    inline void SetShareMethod(const ShareMethod& value) { m_shareMethodHasBeenSet = true; m_shareMethod = value; }
    inline void SetShareMethod(ShareMethod&& value) { m_shareMethodHasBeenSet = true; m_shareMethod = std::move(value); }
    inline SharedDirectory& WithShareMethod(const ShareMethod& value) { SetShareMethod(value); return *this;}
    inline SharedDirectory& WithShareMethod(ShareMethod&& value) { SetShareMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the directory consumer account that has access to the shared
     * directory (<code>OwnerDirectoryId</code>) in the directory owner account.</p>
     */
    inline const Aws::String& GetSharedAccountId() const{ return m_sharedAccountId; }
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }
    inline void SetSharedAccountId(const Aws::String& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = value; }
    inline void SetSharedAccountId(Aws::String&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::move(value); }
    inline void SetSharedAccountId(const char* value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId.assign(value); }
    inline SharedDirectory& WithSharedAccountId(const Aws::String& value) { SetSharedAccountId(value); return *this;}
    inline SharedDirectory& WithSharedAccountId(Aws::String&& value) { SetSharedAccountId(std::move(value)); return *this;}
    inline SharedDirectory& WithSharedAccountId(const char* value) { SetSharedAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline const Aws::String& GetSharedDirectoryId() const{ return m_sharedDirectoryId; }
    inline bool SharedDirectoryIdHasBeenSet() const { return m_sharedDirectoryIdHasBeenSet; }
    inline void SetSharedDirectoryId(const Aws::String& value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId = value; }
    inline void SetSharedDirectoryId(Aws::String&& value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId = std::move(value); }
    inline void SetSharedDirectoryId(const char* value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId.assign(value); }
    inline SharedDirectory& WithSharedDirectoryId(const Aws::String& value) { SetSharedDirectoryId(value); return *this;}
    inline SharedDirectory& WithSharedDirectoryId(Aws::String&& value) { SetSharedDirectoryId(std::move(value)); return *this;}
    inline SharedDirectory& WithSharedDirectoryId(const char* value) { SetSharedDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current directory status of the shared Managed Microsoft AD directory.</p>
     */
    inline const ShareStatus& GetShareStatus() const{ return m_shareStatus; }
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }
    inline void SetShareStatus(const ShareStatus& value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }
    inline void SetShareStatus(ShareStatus&& value) { m_shareStatusHasBeenSet = true; m_shareStatus = std::move(value); }
    inline SharedDirectory& WithShareStatus(const ShareStatus& value) { SetShareStatus(value); return *this;}
    inline SharedDirectory& WithShareStatus(ShareStatus&& value) { SetShareStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline const Aws::String& GetShareNotes() const{ return m_shareNotes; }
    inline bool ShareNotesHasBeenSet() const { return m_shareNotesHasBeenSet; }
    inline void SetShareNotes(const Aws::String& value) { m_shareNotesHasBeenSet = true; m_shareNotes = value; }
    inline void SetShareNotes(Aws::String&& value) { m_shareNotesHasBeenSet = true; m_shareNotes = std::move(value); }
    inline void SetShareNotes(const char* value) { m_shareNotesHasBeenSet = true; m_shareNotes.assign(value); }
    inline SharedDirectory& WithShareNotes(const Aws::String& value) { SetShareNotes(value); return *this;}
    inline SharedDirectory& WithShareNotes(Aws::String&& value) { SetShareNotes(std::move(value)); return *this;}
    inline SharedDirectory& WithShareNotes(const char* value) { SetShareNotes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the shared directory was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDateTime() const{ return m_createdDateTime; }
    inline bool CreatedDateTimeHasBeenSet() const { return m_createdDateTimeHasBeenSet; }
    inline void SetCreatedDateTime(const Aws::Utils::DateTime& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = value; }
    inline void SetCreatedDateTime(Aws::Utils::DateTime&& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = std::move(value); }
    inline SharedDirectory& WithCreatedDateTime(const Aws::Utils::DateTime& value) { SetCreatedDateTime(value); return *this;}
    inline SharedDirectory& WithCreatedDateTime(Aws::Utils::DateTime&& value) { SetCreatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the shared directory was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline SharedDirectory& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline SharedDirectory& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_ownerDirectoryId;
    bool m_ownerDirectoryIdHasBeenSet = false;

    ShareMethod m_shareMethod;
    bool m_shareMethodHasBeenSet = false;

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;

    Aws::String m_sharedDirectoryId;
    bool m_sharedDirectoryIdHasBeenSet = false;

    ShareStatus m_shareStatus;
    bool m_shareStatusHasBeenSet = false;

    Aws::String m_shareNotes;
    bool m_shareNotesHasBeenSet = false;

    Aws::Utils::DateTime m_createdDateTime;
    bool m_createdDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
