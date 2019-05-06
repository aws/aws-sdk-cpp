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
  class AWS_WORKDOCS_API DescribeDocumentVersionsRequest : public WorkDocsRequest
  {
  public:
    DescribeDocumentVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDocumentVersions"; }

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
    inline DescribeDocumentVersionsRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline DescribeDocumentVersionsRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline DescribeDocumentVersionsRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


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
    inline DescribeDocumentVersionsRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline DescribeDocumentVersionsRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline DescribeDocumentVersionsRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeDocumentVersionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeDocumentVersionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeDocumentVersionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of versions to return with this call.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of versions to return with this call.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of versions to return with this call.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of versions to return with this call.</p>
     */
    inline DescribeDocumentVersionsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A comma-separated list of values. Specify "INITIALIZED" to include incomplete
     * versions.</p>
     */
    inline const Aws::String& GetInclude() const{ return m_include; }

    /**
     * <p>A comma-separated list of values. Specify "INITIALIZED" to include incomplete
     * versions.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>A comma-separated list of values. Specify "INITIALIZED" to include incomplete
     * versions.</p>
     */
    inline void SetInclude(const Aws::String& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>A comma-separated list of values. Specify "INITIALIZED" to include incomplete
     * versions.</p>
     */
    inline void SetInclude(Aws::String&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>A comma-separated list of values. Specify "INITIALIZED" to include incomplete
     * versions.</p>
     */
    inline void SetInclude(const char* value) { m_includeHasBeenSet = true; m_include.assign(value); }

    /**
     * <p>A comma-separated list of values. Specify "INITIALIZED" to include incomplete
     * versions.</p>
     */
    inline DescribeDocumentVersionsRequest& WithInclude(const Aws::String& value) { SetInclude(value); return *this;}

    /**
     * <p>A comma-separated list of values. Specify "INITIALIZED" to include incomplete
     * versions.</p>
     */
    inline DescribeDocumentVersionsRequest& WithInclude(Aws::String&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of values. Specify "INITIALIZED" to include incomplete
     * versions.</p>
     */
    inline DescribeDocumentVersionsRequest& WithInclude(const char* value) { SetInclude(value); return *this;}


    /**
     * <p>Specify "SOURCE" to include initialized versions and a URL for the source
     * document.</p>
     */
    inline const Aws::String& GetFields() const{ return m_fields; }

    /**
     * <p>Specify "SOURCE" to include initialized versions and a URL for the source
     * document.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>Specify "SOURCE" to include initialized versions and a URL for the source
     * document.</p>
     */
    inline void SetFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>Specify "SOURCE" to include initialized versions and a URL for the source
     * document.</p>
     */
    inline void SetFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>Specify "SOURCE" to include initialized versions and a URL for the source
     * document.</p>
     */
    inline void SetFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.assign(value); }

    /**
     * <p>Specify "SOURCE" to include initialized versions and a URL for the source
     * document.</p>
     */
    inline DescribeDocumentVersionsRequest& WithFields(const Aws::String& value) { SetFields(value); return *this;}

    /**
     * <p>Specify "SOURCE" to include initialized versions and a URL for the source
     * document.</p>
     */
    inline DescribeDocumentVersionsRequest& WithFields(Aws::String&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>Specify "SOURCE" to include initialized versions and a URL for the source
     * document.</p>
     */
    inline DescribeDocumentVersionsRequest& WithFields(const char* value) { SetFields(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_include;
    bool m_includeHasBeenSet;

    Aws::String m_fields;
    bool m_fieldsHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
