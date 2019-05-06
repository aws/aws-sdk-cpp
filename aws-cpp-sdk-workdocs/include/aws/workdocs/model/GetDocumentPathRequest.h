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
  class AWS_WORKDOCS_API GetDocumentPathRequest : public WorkDocsRequest
  {
  public:
    GetDocumentPathRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDocumentPath"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
    inline GetDocumentPathRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline GetDocumentPathRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline GetDocumentPathRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


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
    inline GetDocumentPathRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline GetDocumentPathRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline GetDocumentPathRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>The maximum number of levels in the hierarchy to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of levels in the hierarchy to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of levels in the hierarchy to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of levels in the hierarchy to return.</p>
     */
    inline GetDocumentPathRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A comma-separated list of values. Specify <code>NAME</code> to include the
     * names of the parent folders.</p>
     */
    inline const Aws::String& GetFields() const{ return m_fields; }

    /**
     * <p>A comma-separated list of values. Specify <code>NAME</code> to include the
     * names of the parent folders.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A comma-separated list of values. Specify <code>NAME</code> to include the
     * names of the parent folders.</p>
     */
    inline void SetFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A comma-separated list of values. Specify <code>NAME</code> to include the
     * names of the parent folders.</p>
     */
    inline void SetFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A comma-separated list of values. Specify <code>NAME</code> to include the
     * names of the parent folders.</p>
     */
    inline void SetFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.assign(value); }

    /**
     * <p>A comma-separated list of values. Specify <code>NAME</code> to include the
     * names of the parent folders.</p>
     */
    inline GetDocumentPathRequest& WithFields(const Aws::String& value) { SetFields(value); return *this;}

    /**
     * <p>A comma-separated list of values. Specify <code>NAME</code> to include the
     * names of the parent folders.</p>
     */
    inline GetDocumentPathRequest& WithFields(Aws::String&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of values. Specify <code>NAME</code> to include the
     * names of the parent folders.</p>
     */
    inline GetDocumentPathRequest& WithFields(const char* value) { SetFields(value); return *this;}


    /**
     * <p>This value is not supported.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>This value is not supported.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>This value is not supported.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>This value is not supported.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>This value is not supported.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>This value is not supported.</p>
     */
    inline GetDocumentPathRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>This value is not supported.</p>
     */
    inline GetDocumentPathRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>This value is not supported.</p>
     */
    inline GetDocumentPathRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_fields;
    bool m_fieldsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
