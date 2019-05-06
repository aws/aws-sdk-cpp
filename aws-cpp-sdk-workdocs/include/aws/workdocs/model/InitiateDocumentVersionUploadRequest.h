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
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API InitiateDocumentVersionUploadRequest : public WorkDocsRequest
  {
  public:
    InitiateDocumentVersionUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InitiateDocumentVersionUpload"; }

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
    inline InitiateDocumentVersionUploadRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the document.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the document.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the document.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the document.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the document.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetContentCreatedTimestamp() const{ return m_contentCreatedTimestamp; }

    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline bool ContentCreatedTimestampHasBeenSet() const { return m_contentCreatedTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline void SetContentCreatedTimestamp(const Aws::Utils::DateTime& value) { m_contentCreatedTimestampHasBeenSet = true; m_contentCreatedTimestamp = value; }

    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline void SetContentCreatedTimestamp(Aws::Utils::DateTime&& value) { m_contentCreatedTimestampHasBeenSet = true; m_contentCreatedTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithContentCreatedTimestamp(const Aws::Utils::DateTime& value) { SetContentCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithContentCreatedTimestamp(Aws::Utils::DateTime&& value) { SetContentCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetContentModifiedTimestamp() const{ return m_contentModifiedTimestamp; }

    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline bool ContentModifiedTimestampHasBeenSet() const { return m_contentModifiedTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline void SetContentModifiedTimestamp(const Aws::Utils::DateTime& value) { m_contentModifiedTimestampHasBeenSet = true; m_contentModifiedTimestamp = value; }

    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline void SetContentModifiedTimestamp(Aws::Utils::DateTime&& value) { m_contentModifiedTimestampHasBeenSet = true; m_contentModifiedTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithContentModifiedTimestamp(const Aws::Utils::DateTime& value) { SetContentModifiedTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithContentModifiedTimestamp(Aws::Utils::DateTime&& value) { SetContentModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The content type of the document.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the document.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The content type of the document.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content type of the document.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The content type of the document.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The content type of the document.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the document.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type of the document.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The size of the document, in bytes.</p>
     */
    inline long long GetDocumentSizeInBytes() const{ return m_documentSizeInBytes; }

    /**
     * <p>The size of the document, in bytes.</p>
     */
    inline bool DocumentSizeInBytesHasBeenSet() const { return m_documentSizeInBytesHasBeenSet; }

    /**
     * <p>The size of the document, in bytes.</p>
     */
    inline void SetDocumentSizeInBytes(long long value) { m_documentSizeInBytesHasBeenSet = true; m_documentSizeInBytes = value; }

    /**
     * <p>The size of the document, in bytes.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithDocumentSizeInBytes(long long value) { SetDocumentSizeInBytes(value); return *this;}


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
    inline InitiateDocumentVersionUploadRequest& WithParentFolderId(const Aws::String& value) { SetParentFolderId(value); return *this;}

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithParentFolderId(Aws::String&& value) { SetParentFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline InitiateDocumentVersionUploadRequest& WithParentFolderId(const char* value) { SetParentFolderId(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Utils::DateTime m_contentCreatedTimestamp;
    bool m_contentCreatedTimestampHasBeenSet;

    Aws::Utils::DateTime m_contentModifiedTimestamp;
    bool m_contentModifiedTimestampHasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;

    long long m_documentSizeInBytes;
    bool m_documentSizeInBytesHasBeenSet;

    Aws::String m_parentFolderId;
    bool m_parentFolderIdHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
