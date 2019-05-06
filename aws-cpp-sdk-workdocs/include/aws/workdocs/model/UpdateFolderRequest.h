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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/ResourceStateType.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API UpdateFolderRequest : public WorkDocsRequest
  {
  public:
    UpdateFolderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFolder"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline UpdateFolderRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline UpdateFolderRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline UpdateFolderRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const Aws::String& value) { m_folderIdHasBeenSet = true; m_folderId = value; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(Aws::String&& value) { m_folderIdHasBeenSet = true; m_folderId = std::move(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const char* value) { m_folderIdHasBeenSet = true; m_folderId.assign(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline UpdateFolderRequest& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline UpdateFolderRequest& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline UpdateFolderRequest& WithFolderId(const char* value) { SetFolderId(value); return *this;}


    /**
     * <p>The name of the folder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the folder.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the folder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the folder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the folder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the folder.</p>
     */
    inline UpdateFolderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the folder.</p>
     */
    inline UpdateFolderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the folder.</p>
     */
    inline UpdateFolderRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the parent folder.</p>
     */
    inline const Aws::String& GetParentFolderId() const{ return m_parentFolderId; }

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline bool ParentFolderIdHasBeenSet() const { return m_parentFolderIdHasBeenSet; }

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline void SetParentFolderId(const Aws::String& value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId = value; }

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline void SetParentFolderId(Aws::String&& value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId = std::move(value); }

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline void SetParentFolderId(const char* value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId.assign(value); }

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline UpdateFolderRequest& WithParentFolderId(const Aws::String& value) { SetParentFolderId(value); return *this;}

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline UpdateFolderRequest& WithParentFolderId(Aws::String&& value) { SetParentFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline UpdateFolderRequest& WithParentFolderId(const char* value) { SetParentFolderId(value); return *this;}


    /**
     * <p>The resource state of the folder. Only ACTIVE and RECYCLED are accepted
     * values from the API.</p>
     */
    inline const ResourceStateType& GetResourceState() const{ return m_resourceState; }

    /**
     * <p>The resource state of the folder. Only ACTIVE and RECYCLED are accepted
     * values from the API.</p>
     */
    inline bool ResourceStateHasBeenSet() const { return m_resourceStateHasBeenSet; }

    /**
     * <p>The resource state of the folder. Only ACTIVE and RECYCLED are accepted
     * values from the API.</p>
     */
    inline void SetResourceState(const ResourceStateType& value) { m_resourceStateHasBeenSet = true; m_resourceState = value; }

    /**
     * <p>The resource state of the folder. Only ACTIVE and RECYCLED are accepted
     * values from the API.</p>
     */
    inline void SetResourceState(ResourceStateType&& value) { m_resourceStateHasBeenSet = true; m_resourceState = std::move(value); }

    /**
     * <p>The resource state of the folder. Only ACTIVE and RECYCLED are accepted
     * values from the API.</p>
     */
    inline UpdateFolderRequest& WithResourceState(const ResourceStateType& value) { SetResourceState(value); return *this;}

    /**
     * <p>The resource state of the folder. Only ACTIVE and RECYCLED are accepted
     * values from the API.</p>
     */
    inline UpdateFolderRequest& WithResourceState(ResourceStateType&& value) { SetResourceState(std::move(value)); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_parentFolderId;
    bool m_parentFolderIdHasBeenSet;

    ResourceStateType m_resourceState;
    bool m_resourceStateHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
