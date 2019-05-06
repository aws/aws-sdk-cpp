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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/GetConnectionsFilter.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API GetConnectionsRequest : public GlueRequest
  {
  public:
    GetConnectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnections"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline GetConnectionsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline GetConnectionsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline GetConnectionsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>A filter that controls which connections will be returned.</p>
     */
    inline const GetConnectionsFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>A filter that controls which connections will be returned.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>A filter that controls which connections will be returned.</p>
     */
    inline void SetFilter(const GetConnectionsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A filter that controls which connections will be returned.</p>
     */
    inline void SetFilter(GetConnectionsFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>A filter that controls which connections will be returned.</p>
     */
    inline GetConnectionsRequest& WithFilter(const GetConnectionsFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>A filter that controls which connections will be returned.</p>
     */
    inline GetConnectionsRequest& WithFilter(GetConnectionsFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Allows you to retrieve the connection metadata without returning the
     * password. For instance, the AWS Glue console uses this flag to retrieve the
     * connection, and does not display the password. Set this parameter when the
     * caller might not have permission to use the AWS KMS key to decrypt the password,
     * but does have permission to access the rest of the connection properties.</p>
     */
    inline bool GetHidePassword() const{ return m_hidePassword; }

    /**
     * <p>Allows you to retrieve the connection metadata without returning the
     * password. For instance, the AWS Glue console uses this flag to retrieve the
     * connection, and does not display the password. Set this parameter when the
     * caller might not have permission to use the AWS KMS key to decrypt the password,
     * but does have permission to access the rest of the connection properties.</p>
     */
    inline bool HidePasswordHasBeenSet() const { return m_hidePasswordHasBeenSet; }

    /**
     * <p>Allows you to retrieve the connection metadata without returning the
     * password. For instance, the AWS Glue console uses this flag to retrieve the
     * connection, and does not display the password. Set this parameter when the
     * caller might not have permission to use the AWS KMS key to decrypt the password,
     * but does have permission to access the rest of the connection properties.</p>
     */
    inline void SetHidePassword(bool value) { m_hidePasswordHasBeenSet = true; m_hidePassword = value; }

    /**
     * <p>Allows you to retrieve the connection metadata without returning the
     * password. For instance, the AWS Glue console uses this flag to retrieve the
     * connection, and does not display the password. Set this parameter when the
     * caller might not have permission to use the AWS KMS key to decrypt the password,
     * but does have permission to access the rest of the connection properties.</p>
     */
    inline GetConnectionsRequest& WithHidePassword(bool value) { SetHidePassword(value); return *this;}


    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetConnectionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetConnectionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetConnectionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of connections to return in one response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of connections to return in one response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of connections to return in one response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of connections to return in one response.</p>
     */
    inline GetConnectionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    GetConnectionsFilter m_filter;
    bool m_filterHasBeenSet;

    bool m_hidePassword;
    bool m_hidePasswordHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
