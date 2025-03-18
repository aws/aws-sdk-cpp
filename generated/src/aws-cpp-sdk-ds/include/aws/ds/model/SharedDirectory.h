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
    AWS_DIRECTORYSERVICE_API SharedDirectory() = default;
    AWS_DIRECTORYSERVICE_API SharedDirectory(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API SharedDirectory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the directory owner account, which contains the directory that
     * has been shared to the consumer account.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    SharedDirectory& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the directory in the directory owner account. </p>
     */
    inline const Aws::String& GetOwnerDirectoryId() const { return m_ownerDirectoryId; }
    inline bool OwnerDirectoryIdHasBeenSet() const { return m_ownerDirectoryIdHasBeenSet; }
    template<typename OwnerDirectoryIdT = Aws::String>
    void SetOwnerDirectoryId(OwnerDirectoryIdT&& value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId = std::forward<OwnerDirectoryIdT>(value); }
    template<typename OwnerDirectoryIdT = Aws::String>
    SharedDirectory& WithOwnerDirectoryId(OwnerDirectoryIdT&& value) { SetOwnerDirectoryId(std::forward<OwnerDirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your Amazon Web Services organization
     * (<code>ORGANIZATIONS</code>) or with any Amazon Web Services account by sending
     * a shared directory request (<code>HANDSHAKE</code>).</p>
     */
    inline ShareMethod GetShareMethod() const { return m_shareMethod; }
    inline bool ShareMethodHasBeenSet() const { return m_shareMethodHasBeenSet; }
    inline void SetShareMethod(ShareMethod value) { m_shareMethodHasBeenSet = true; m_shareMethod = value; }
    inline SharedDirectory& WithShareMethod(ShareMethod value) { SetShareMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the directory consumer account that has access to the shared
     * directory (<code>OwnerDirectoryId</code>) in the directory owner account.</p>
     */
    inline const Aws::String& GetSharedAccountId() const { return m_sharedAccountId; }
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }
    template<typename SharedAccountIdT = Aws::String>
    void SetSharedAccountId(SharedAccountIdT&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::forward<SharedAccountIdT>(value); }
    template<typename SharedAccountIdT = Aws::String>
    SharedDirectory& WithSharedAccountId(SharedAccountIdT&& value) { SetSharedAccountId(std::forward<SharedAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline const Aws::String& GetSharedDirectoryId() const { return m_sharedDirectoryId; }
    inline bool SharedDirectoryIdHasBeenSet() const { return m_sharedDirectoryIdHasBeenSet; }
    template<typename SharedDirectoryIdT = Aws::String>
    void SetSharedDirectoryId(SharedDirectoryIdT&& value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId = std::forward<SharedDirectoryIdT>(value); }
    template<typename SharedDirectoryIdT = Aws::String>
    SharedDirectory& WithSharedDirectoryId(SharedDirectoryIdT&& value) { SetSharedDirectoryId(std::forward<SharedDirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current directory status of the shared Managed Microsoft AD directory.</p>
     */
    inline ShareStatus GetShareStatus() const { return m_shareStatus; }
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }
    inline void SetShareStatus(ShareStatus value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }
    inline SharedDirectory& WithShareStatus(ShareStatus value) { SetShareStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline const Aws::String& GetShareNotes() const { return m_shareNotes; }
    inline bool ShareNotesHasBeenSet() const { return m_shareNotesHasBeenSet; }
    template<typename ShareNotesT = Aws::String>
    void SetShareNotes(ShareNotesT&& value) { m_shareNotesHasBeenSet = true; m_shareNotes = std::forward<ShareNotesT>(value); }
    template<typename ShareNotesT = Aws::String>
    SharedDirectory& WithShareNotes(ShareNotesT&& value) { SetShareNotes(std::forward<ShareNotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the shared directory was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDateTime() const { return m_createdDateTime; }
    inline bool CreatedDateTimeHasBeenSet() const { return m_createdDateTimeHasBeenSet; }
    template<typename CreatedDateTimeT = Aws::Utils::DateTime>
    void SetCreatedDateTime(CreatedDateTimeT&& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = std::forward<CreatedDateTimeT>(value); }
    template<typename CreatedDateTimeT = Aws::Utils::DateTime>
    SharedDirectory& WithCreatedDateTime(CreatedDateTimeT&& value) { SetCreatedDateTime(std::forward<CreatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the shared directory was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    SharedDirectory& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_ownerDirectoryId;
    bool m_ownerDirectoryIdHasBeenSet = false;

    ShareMethod m_shareMethod{ShareMethod::NOT_SET};
    bool m_shareMethodHasBeenSet = false;

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;

    Aws::String m_sharedDirectoryId;
    bool m_sharedDirectoryIdHasBeenSet = false;

    ShareStatus m_shareStatus{ShareStatus::NOT_SET};
    bool m_shareStatusHasBeenSet = false;

    Aws::String m_shareNotes;
    bool m_shareNotesHasBeenSet = false;

    Aws::Utils::DateTime m_createdDateTime{};
    bool m_createdDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
