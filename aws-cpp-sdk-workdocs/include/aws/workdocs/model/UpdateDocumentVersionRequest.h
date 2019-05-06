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
#include <aws/workdocs/model/DocumentVersionStatus.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API UpdateDocumentVersionRequest : public WorkDocsRequest
  {
  public:
    UpdateDocumentVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDocumentVersion"; }

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
    inline UpdateDocumentVersionRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline UpdateDocumentVersionRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline UpdateDocumentVersionRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The ID of the document.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline UpdateDocumentVersionRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline UpdateDocumentVersionRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline UpdateDocumentVersionRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>The version ID of the document.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version ID of the document.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The version ID of the document.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The version ID of the document.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The version ID of the document.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The version ID of the document.</p>
     */
    inline UpdateDocumentVersionRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The version ID of the document.</p>
     */
    inline UpdateDocumentVersionRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The version ID of the document.</p>
     */
    inline UpdateDocumentVersionRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The status of the version.</p>
     */
    inline const DocumentVersionStatus& GetVersionStatus() const{ return m_versionStatus; }

    /**
     * <p>The status of the version.</p>
     */
    inline bool VersionStatusHasBeenSet() const { return m_versionStatusHasBeenSet; }

    /**
     * <p>The status of the version.</p>
     */
    inline void SetVersionStatus(const DocumentVersionStatus& value) { m_versionStatusHasBeenSet = true; m_versionStatus = value; }

    /**
     * <p>The status of the version.</p>
     */
    inline void SetVersionStatus(DocumentVersionStatus&& value) { m_versionStatusHasBeenSet = true; m_versionStatus = std::move(value); }

    /**
     * <p>The status of the version.</p>
     */
    inline UpdateDocumentVersionRequest& WithVersionStatus(const DocumentVersionStatus& value) { SetVersionStatus(value); return *this;}

    /**
     * <p>The status of the version.</p>
     */
    inline UpdateDocumentVersionRequest& WithVersionStatus(DocumentVersionStatus&& value) { SetVersionStatus(std::move(value)); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;

    DocumentVersionStatus m_versionStatus;
    bool m_versionStatusHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
