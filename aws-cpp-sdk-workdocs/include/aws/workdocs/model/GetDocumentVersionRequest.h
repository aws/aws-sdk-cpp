﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API GetDocumentVersionRequest : public WorkDocsRequest
  {
  public:
    GetDocumentVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDocumentVersion"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline GetDocumentVersionRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline GetDocumentVersionRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline GetDocumentVersionRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


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
    inline GetDocumentVersionRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline GetDocumentVersionRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline GetDocumentVersionRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


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
    inline GetDocumentVersionRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The version ID of the document.</p>
     */
    inline GetDocumentVersionRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The version ID of the document.</p>
     */
    inline GetDocumentVersionRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>A comma-separated list of values. Specify "SOURCE" to include a URL for the
     * source document.</p>
     */
    inline const Aws::String& GetFields() const{ return m_fields; }

    /**
     * <p>A comma-separated list of values. Specify "SOURCE" to include a URL for the
     * source document.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A comma-separated list of values. Specify "SOURCE" to include a URL for the
     * source document.</p>
     */
    inline void SetFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A comma-separated list of values. Specify "SOURCE" to include a URL for the
     * source document.</p>
     */
    inline void SetFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A comma-separated list of values. Specify "SOURCE" to include a URL for the
     * source document.</p>
     */
    inline void SetFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.assign(value); }

    /**
     * <p>A comma-separated list of values. Specify "SOURCE" to include a URL for the
     * source document.</p>
     */
    inline GetDocumentVersionRequest& WithFields(const Aws::String& value) { SetFields(value); return *this;}

    /**
     * <p>A comma-separated list of values. Specify "SOURCE" to include a URL for the
     * source document.</p>
     */
    inline GetDocumentVersionRequest& WithFields(Aws::String&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of values. Specify "SOURCE" to include a URL for the
     * source document.</p>
     */
    inline GetDocumentVersionRequest& WithFields(const char* value) { SetFields(value); return *this;}


    /**
     * <p>Set this to TRUE to include custom metadata in the response.</p>
     */
    inline bool GetIncludeCustomMetadata() const{ return m_includeCustomMetadata; }

    /**
     * <p>Set this to TRUE to include custom metadata in the response.</p>
     */
    inline bool IncludeCustomMetadataHasBeenSet() const { return m_includeCustomMetadataHasBeenSet; }

    /**
     * <p>Set this to TRUE to include custom metadata in the response.</p>
     */
    inline void SetIncludeCustomMetadata(bool value) { m_includeCustomMetadataHasBeenSet = true; m_includeCustomMetadata = value; }

    /**
     * <p>Set this to TRUE to include custom metadata in the response.</p>
     */
    inline GetDocumentVersionRequest& WithIncludeCustomMetadata(bool value) { SetIncludeCustomMetadata(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;

    Aws::String m_fields;
    bool m_fieldsHasBeenSet;

    bool m_includeCustomMetadata;
    bool m_includeCustomMetadataHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
