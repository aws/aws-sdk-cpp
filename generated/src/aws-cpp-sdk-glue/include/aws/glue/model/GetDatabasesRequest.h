/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ResourceShareType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DatabaseAttributes.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetDatabasesRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetDatabasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDatabases"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog from which to retrieve <code>Databases</code>. If
     * none is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline GetDatabasesRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline GetDatabasesRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline GetDatabasesRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
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
    inline GetDatabasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetDatabasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetDatabasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of databases to return in one response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetDatabasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to specify that you want to list the databases shared with your
     * account. The allowable values are <code>FEDERATED</code>, <code>FOREIGN</code>
     * or <code>ALL</code>. </p> <ul> <li> <p>If set to <code>FEDERATED</code>, will
     * list the federated databases (referencing an external entity) shared with your
     * account.</p> </li> <li> <p>If set to <code>FOREIGN</code>, will list the
     * databases shared with your account. </p> </li> <li> <p>If set to
     * <code>ALL</code>, will list the databases shared with your account, as well as
     * the databases in yor local account. </p> </li> </ul>
     */
    inline const ResourceShareType& GetResourceShareType() const{ return m_resourceShareType; }
    inline bool ResourceShareTypeHasBeenSet() const { return m_resourceShareTypeHasBeenSet; }
    inline void SetResourceShareType(const ResourceShareType& value) { m_resourceShareTypeHasBeenSet = true; m_resourceShareType = value; }
    inline void SetResourceShareType(ResourceShareType&& value) { m_resourceShareTypeHasBeenSet = true; m_resourceShareType = std::move(value); }
    inline GetDatabasesRequest& WithResourceShareType(const ResourceShareType& value) { SetResourceShareType(value); return *this;}
    inline GetDatabasesRequest& WithResourceShareType(ResourceShareType&& value) { SetResourceShareType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the database fields returned by the <code>GetDatabases</code> call.
     * This parameter doesn’t accept an empty list. The request must include the
     * <code>NAME</code>.</p>
     */
    inline const Aws::Vector<DatabaseAttributes>& GetAttributesToGet() const{ return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    inline void SetAttributesToGet(const Aws::Vector<DatabaseAttributes>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }
    inline void SetAttributesToGet(Aws::Vector<DatabaseAttributes>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::move(value); }
    inline GetDatabasesRequest& WithAttributesToGet(const Aws::Vector<DatabaseAttributes>& value) { SetAttributesToGet(value); return *this;}
    inline GetDatabasesRequest& WithAttributesToGet(Aws::Vector<DatabaseAttributes>&& value) { SetAttributesToGet(std::move(value)); return *this;}
    inline GetDatabasesRequest& AddAttributesToGet(const DatabaseAttributes& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    inline GetDatabasesRequest& AddAttributesToGet(DatabaseAttributes&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ResourceShareType m_resourceShareType;
    bool m_resourceShareTypeHasBeenSet = false;

    Aws::Vector<DatabaseAttributes> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
