/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class ListEntitiesRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API ListEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEntities"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the connection that has required credentials to query any
     * connection type.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline ListEntitiesRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline ListEntitiesRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline ListEntitiesRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog ID of the catalog that contains the connection. This can be null,
     * By default, the Amazon Web Services Account ID is the catalog ID.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline ListEntitiesRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline ListEntitiesRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline ListEntitiesRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the parent entity for which you want to list the children. This
     * parameter takes a fully-qualified path of the entity in order to list the child
     * entities.</p>
     */
    inline const Aws::String& GetParentEntityName() const{ return m_parentEntityName; }
    inline bool ParentEntityNameHasBeenSet() const { return m_parentEntityNameHasBeenSet; }
    inline void SetParentEntityName(const Aws::String& value) { m_parentEntityNameHasBeenSet = true; m_parentEntityName = value; }
    inline void SetParentEntityName(Aws::String&& value) { m_parentEntityNameHasBeenSet = true; m_parentEntityName = std::move(value); }
    inline void SetParentEntityName(const char* value) { m_parentEntityNameHasBeenSet = true; m_parentEntityName.assign(value); }
    inline ListEntitiesRequest& WithParentEntityName(const Aws::String& value) { SetParentEntityName(value); return *this;}
    inline ListEntitiesRequest& WithParentEntityName(Aws::String&& value) { SetParentEntityName(std::move(value)); return *this;}
    inline ListEntitiesRequest& WithParentEntityName(const char* value) { SetParentEntityName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEntitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEntitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEntitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API version of the SaaS connector.</p>
     */
    inline const Aws::String& GetDataStoreApiVersion() const{ return m_dataStoreApiVersion; }
    inline bool DataStoreApiVersionHasBeenSet() const { return m_dataStoreApiVersionHasBeenSet; }
    inline void SetDataStoreApiVersion(const Aws::String& value) { m_dataStoreApiVersionHasBeenSet = true; m_dataStoreApiVersion = value; }
    inline void SetDataStoreApiVersion(Aws::String&& value) { m_dataStoreApiVersionHasBeenSet = true; m_dataStoreApiVersion = std::move(value); }
    inline void SetDataStoreApiVersion(const char* value) { m_dataStoreApiVersionHasBeenSet = true; m_dataStoreApiVersion.assign(value); }
    inline ListEntitiesRequest& WithDataStoreApiVersion(const Aws::String& value) { SetDataStoreApiVersion(value); return *this;}
    inline ListEntitiesRequest& WithDataStoreApiVersion(Aws::String&& value) { SetDataStoreApiVersion(std::move(value)); return *this;}
    inline ListEntitiesRequest& WithDataStoreApiVersion(const char* value) { SetDataStoreApiVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_parentEntityName;
    bool m_parentEntityNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_dataStoreApiVersion;
    bool m_dataStoreApiVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
