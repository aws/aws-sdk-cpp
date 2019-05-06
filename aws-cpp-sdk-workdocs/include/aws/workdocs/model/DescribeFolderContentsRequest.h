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
#include <aws/workdocs/model/ResourceSortType.h>
#include <aws/workdocs/model/OrderType.h>
#include <aws/workdocs/model/FolderContentType.h>
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
  class AWS_WORKDOCS_API DescribeFolderContentsRequest : public WorkDocsRequest
  {
  public:
    DescribeFolderContentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFolderContents"; }

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
    inline DescribeFolderContentsRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline DescribeFolderContentsRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline DescribeFolderContentsRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


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
    inline DescribeFolderContentsRequest& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline DescribeFolderContentsRequest& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline DescribeFolderContentsRequest& WithFolderId(const char* value) { SetFolderId(value); return *this;}


    /**
     * <p>The sorting criteria.</p>
     */
    inline const ResourceSortType& GetSort() const{ return m_sort; }

    /**
     * <p>The sorting criteria.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>The sorting criteria.</p>
     */
    inline void SetSort(const ResourceSortType& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>The sorting criteria.</p>
     */
    inline void SetSort(ResourceSortType&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>The sorting criteria.</p>
     */
    inline DescribeFolderContentsRequest& WithSort(const ResourceSortType& value) { SetSort(value); return *this;}

    /**
     * <p>The sorting criteria.</p>
     */
    inline DescribeFolderContentsRequest& WithSort(ResourceSortType&& value) { SetSort(std::move(value)); return *this;}


    /**
     * <p>The order for the contents of the folder.</p>
     */
    inline const OrderType& GetOrder() const{ return m_order; }

    /**
     * <p>The order for the contents of the folder.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order for the contents of the folder.</p>
     */
    inline void SetOrder(const OrderType& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order for the contents of the folder.</p>
     */
    inline void SetOrder(OrderType&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The order for the contents of the folder.</p>
     */
    inline DescribeFolderContentsRequest& WithOrder(const OrderType& value) { SetOrder(value); return *this;}

    /**
     * <p>The order for the contents of the folder.</p>
     */
    inline DescribeFolderContentsRequest& WithOrder(OrderType&& value) { SetOrder(std::move(value)); return *this;}


    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline DescribeFolderContentsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline DescribeFolderContentsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline DescribeFolderContentsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline DescribeFolderContentsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The type of items.</p>
     */
    inline const FolderContentType& GetType() const{ return m_type; }

    /**
     * <p>The type of items.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of items.</p>
     */
    inline void SetType(const FolderContentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of items.</p>
     */
    inline void SetType(FolderContentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of items.</p>
     */
    inline DescribeFolderContentsRequest& WithType(const FolderContentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of items.</p>
     */
    inline DescribeFolderContentsRequest& WithType(FolderContentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The contents to include. Specify "INITIALIZED" to include initialized
     * documents.</p>
     */
    inline const Aws::String& GetInclude() const{ return m_include; }

    /**
     * <p>The contents to include. Specify "INITIALIZED" to include initialized
     * documents.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>The contents to include. Specify "INITIALIZED" to include initialized
     * documents.</p>
     */
    inline void SetInclude(const Aws::String& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>The contents to include. Specify "INITIALIZED" to include initialized
     * documents.</p>
     */
    inline void SetInclude(Aws::String&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>The contents to include. Specify "INITIALIZED" to include initialized
     * documents.</p>
     */
    inline void SetInclude(const char* value) { m_includeHasBeenSet = true; m_include.assign(value); }

    /**
     * <p>The contents to include. Specify "INITIALIZED" to include initialized
     * documents.</p>
     */
    inline DescribeFolderContentsRequest& WithInclude(const Aws::String& value) { SetInclude(value); return *this;}

    /**
     * <p>The contents to include. Specify "INITIALIZED" to include initialized
     * documents.</p>
     */
    inline DescribeFolderContentsRequest& WithInclude(Aws::String&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>The contents to include. Specify "INITIALIZED" to include initialized
     * documents.</p>
     */
    inline DescribeFolderContentsRequest& WithInclude(const char* value) { SetInclude(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet;

    ResourceSortType m_sort;
    bool m_sortHasBeenSet;

    OrderType m_order;
    bool m_orderHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    FolderContentType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_include;
    bool m_includeHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
