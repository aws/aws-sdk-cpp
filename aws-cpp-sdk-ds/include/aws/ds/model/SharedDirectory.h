/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTORYSERVICE_API SharedDirectory
  {
  public:
    SharedDirectory();
    SharedDirectory(Aws::Utils::Json::JsonView jsonValue);
    SharedDirectory& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the directory owner account, which contains the directory that
     * has been shared to the consumer account.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>Identifier of the directory owner account, which contains the directory that
     * has been shared to the consumer account.</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>Identifier of the directory owner account, which contains the directory that
     * has been shared to the consumer account.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>Identifier of the directory owner account, which contains the directory that
     * has been shared to the consumer account.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>Identifier of the directory owner account, which contains the directory that
     * has been shared to the consumer account.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>Identifier of the directory owner account, which contains the directory that
     * has been shared to the consumer account.</p>
     */
    inline SharedDirectory& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>Identifier of the directory owner account, which contains the directory that
     * has been shared to the consumer account.</p>
     */
    inline SharedDirectory& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory owner account, which contains the directory that
     * has been shared to the consumer account.</p>
     */
    inline SharedDirectory& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>Identifier of the directory in the directory owner account. </p>
     */
    inline const Aws::String& GetOwnerDirectoryId() const{ return m_ownerDirectoryId; }

    /**
     * <p>Identifier of the directory in the directory owner account. </p>
     */
    inline bool OwnerDirectoryIdHasBeenSet() const { return m_ownerDirectoryIdHasBeenSet; }

    /**
     * <p>Identifier of the directory in the directory owner account. </p>
     */
    inline void SetOwnerDirectoryId(const Aws::String& value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId = value; }

    /**
     * <p>Identifier of the directory in the directory owner account. </p>
     */
    inline void SetOwnerDirectoryId(Aws::String&& value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId = std::move(value); }

    /**
     * <p>Identifier of the directory in the directory owner account. </p>
     */
    inline void SetOwnerDirectoryId(const char* value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId.assign(value); }

    /**
     * <p>Identifier of the directory in the directory owner account. </p>
     */
    inline SharedDirectory& WithOwnerDirectoryId(const Aws::String& value) { SetOwnerDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the directory in the directory owner account. </p>
     */
    inline SharedDirectory& WithOwnerDirectoryId(Aws::String&& value) { SetOwnerDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory in the directory owner account. </p>
     */
    inline SharedDirectory& WithOwnerDirectoryId(const char* value) { SetOwnerDirectoryId(value); return *this;}


    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a shared directory request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline const ShareMethod& GetShareMethod() const{ return m_shareMethod; }

    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a shared directory request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline bool ShareMethodHasBeenSet() const { return m_shareMethodHasBeenSet; }

    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a shared directory request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline void SetShareMethod(const ShareMethod& value) { m_shareMethodHasBeenSet = true; m_shareMethod = value; }

    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a shared directory request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline void SetShareMethod(ShareMethod&& value) { m_shareMethodHasBeenSet = true; m_shareMethod = std::move(value); }

    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a shared directory request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline SharedDirectory& WithShareMethod(const ShareMethod& value) { SetShareMethod(value); return *this;}

    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a shared directory request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline SharedDirectory& WithShareMethod(ShareMethod&& value) { SetShareMethod(std::move(value)); return *this;}


    /**
     * <p>Identifier of the directory consumer account that has access to the shared
     * directory (<code>OwnerDirectoryId</code>) in the directory owner account.</p>
     */
    inline const Aws::String& GetSharedAccountId() const{ return m_sharedAccountId; }

    /**
     * <p>Identifier of the directory consumer account that has access to the shared
     * directory (<code>OwnerDirectoryId</code>) in the directory owner account.</p>
     */
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }

    /**
     * <p>Identifier of the directory consumer account that has access to the shared
     * directory (<code>OwnerDirectoryId</code>) in the directory owner account.</p>
     */
    inline void SetSharedAccountId(const Aws::String& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = value; }

    /**
     * <p>Identifier of the directory consumer account that has access to the shared
     * directory (<code>OwnerDirectoryId</code>) in the directory owner account.</p>
     */
    inline void SetSharedAccountId(Aws::String&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::move(value); }

    /**
     * <p>Identifier of the directory consumer account that has access to the shared
     * directory (<code>OwnerDirectoryId</code>) in the directory owner account.</p>
     */
    inline void SetSharedAccountId(const char* value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId.assign(value); }

    /**
     * <p>Identifier of the directory consumer account that has access to the shared
     * directory (<code>OwnerDirectoryId</code>) in the directory owner account.</p>
     */
    inline SharedDirectory& WithSharedAccountId(const Aws::String& value) { SetSharedAccountId(value); return *this;}

    /**
     * <p>Identifier of the directory consumer account that has access to the shared
     * directory (<code>OwnerDirectoryId</code>) in the directory owner account.</p>
     */
    inline SharedDirectory& WithSharedAccountId(Aws::String&& value) { SetSharedAccountId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory consumer account that has access to the shared
     * directory (<code>OwnerDirectoryId</code>) in the directory owner account.</p>
     */
    inline SharedDirectory& WithSharedAccountId(const char* value) { SetSharedAccountId(value); return *this;}


    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline const Aws::String& GetSharedDirectoryId() const{ return m_sharedDirectoryId; }

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline bool SharedDirectoryIdHasBeenSet() const { return m_sharedDirectoryIdHasBeenSet; }

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline void SetSharedDirectoryId(const Aws::String& value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId = value; }

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline void SetSharedDirectoryId(Aws::String&& value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId = std::move(value); }

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline void SetSharedDirectoryId(const char* value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId.assign(value); }

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline SharedDirectory& WithSharedDirectoryId(const Aws::String& value) { SetSharedDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline SharedDirectory& WithSharedDirectoryId(Aws::String&& value) { SetSharedDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline SharedDirectory& WithSharedDirectoryId(const char* value) { SetSharedDirectoryId(value); return *this;}


    /**
     * <p>Current directory status of the shared AWS Managed Microsoft AD
     * directory.</p>
     */
    inline const ShareStatus& GetShareStatus() const{ return m_shareStatus; }

    /**
     * <p>Current directory status of the shared AWS Managed Microsoft AD
     * directory.</p>
     */
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }

    /**
     * <p>Current directory status of the shared AWS Managed Microsoft AD
     * directory.</p>
     */
    inline void SetShareStatus(const ShareStatus& value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }

    /**
     * <p>Current directory status of the shared AWS Managed Microsoft AD
     * directory.</p>
     */
    inline void SetShareStatus(ShareStatus&& value) { m_shareStatusHasBeenSet = true; m_shareStatus = std::move(value); }

    /**
     * <p>Current directory status of the shared AWS Managed Microsoft AD
     * directory.</p>
     */
    inline SharedDirectory& WithShareStatus(const ShareStatus& value) { SetShareStatus(value); return *this;}

    /**
     * <p>Current directory status of the shared AWS Managed Microsoft AD
     * directory.</p>
     */
    inline SharedDirectory& WithShareStatus(ShareStatus&& value) { SetShareStatus(std::move(value)); return *this;}


    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline const Aws::String& GetShareNotes() const{ return m_shareNotes; }

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline bool ShareNotesHasBeenSet() const { return m_shareNotesHasBeenSet; }

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline void SetShareNotes(const Aws::String& value) { m_shareNotesHasBeenSet = true; m_shareNotes = value; }

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline void SetShareNotes(Aws::String&& value) { m_shareNotesHasBeenSet = true; m_shareNotes = std::move(value); }

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline void SetShareNotes(const char* value) { m_shareNotesHasBeenSet = true; m_shareNotes.assign(value); }

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline SharedDirectory& WithShareNotes(const Aws::String& value) { SetShareNotes(value); return *this;}

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline SharedDirectory& WithShareNotes(Aws::String&& value) { SetShareNotes(std::move(value)); return *this;}

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline SharedDirectory& WithShareNotes(const char* value) { SetShareNotes(value); return *this;}


    /**
     * <p>The date and time that the shared directory was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDateTime() const{ return m_createdDateTime; }

    /**
     * <p>The date and time that the shared directory was created.</p>
     */
    inline bool CreatedDateTimeHasBeenSet() const { return m_createdDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the shared directory was created.</p>
     */
    inline void SetCreatedDateTime(const Aws::Utils::DateTime& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = value; }

    /**
     * <p>The date and time that the shared directory was created.</p>
     */
    inline void SetCreatedDateTime(Aws::Utils::DateTime&& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = std::move(value); }

    /**
     * <p>The date and time that the shared directory was created.</p>
     */
    inline SharedDirectory& WithCreatedDateTime(const Aws::Utils::DateTime& value) { SetCreatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the shared directory was created.</p>
     */
    inline SharedDirectory& WithCreatedDateTime(Aws::Utils::DateTime&& value) { SetCreatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the shared directory was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time that the shared directory was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the shared directory was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the shared directory was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the shared directory was last updated.</p>
     */
    inline SharedDirectory& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the shared directory was last updated.</p>
     */
    inline SharedDirectory& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet;

    Aws::String m_ownerDirectoryId;
    bool m_ownerDirectoryIdHasBeenSet;

    ShareMethod m_shareMethod;
    bool m_shareMethodHasBeenSet;

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet;

    Aws::String m_sharedDirectoryId;
    bool m_sharedDirectoryIdHasBeenSet;

    ShareStatus m_shareStatus;
    bool m_shareStatusHasBeenSet;

    Aws::String m_shareNotes;
    bool m_shareNotesHasBeenSet;

    Aws::Utils::DateTime m_createdDateTime;
    bool m_createdDateTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
