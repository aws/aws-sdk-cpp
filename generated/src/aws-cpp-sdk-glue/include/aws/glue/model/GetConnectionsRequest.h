/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetConnectionsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetConnectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnections"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline GetConnectionsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline GetConnectionsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline GetConnectionsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that controls which connections are returned.</p>
     */
    inline const GetConnectionsFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const GetConnectionsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(GetConnectionsFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline GetConnectionsRequest& WithFilter(const GetConnectionsFilter& value) { SetFilter(value); return *this;}
    inline GetConnectionsRequest& WithFilter(GetConnectionsFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to retrieve the connection metadata without returning the
     * password. For instance, the Glue console uses this flag to retrieve the
     * connection, and does not display the password. Set this parameter when the
     * caller might not have permission to use the KMS key to decrypt the password, but
     * it does have permission to access the rest of the connection properties.</p>
     */
    inline bool GetHidePassword() const{ return m_hidePassword; }
    inline bool HidePasswordHasBeenSet() const { return m_hidePasswordHasBeenSet; }
    inline void SetHidePassword(bool value) { m_hidePasswordHasBeenSet = true; m_hidePassword = value; }
    inline GetConnectionsRequest& WithHidePassword(bool value) { SetHidePassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetConnectionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetConnectionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetConnectionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of connections to return in one response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetConnectionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    GetConnectionsFilter m_filter;
    bool m_filterHasBeenSet = false;

    bool m_hidePassword;
    bool m_hidePasswordHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
