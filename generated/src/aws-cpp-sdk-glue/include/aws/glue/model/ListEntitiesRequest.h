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
    AWS_GLUE_API ListEntitiesRequest() = default;

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
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    ListEntitiesRequest& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog ID of the catalog that contains the connection. This can be null,
     * By default, the Amazon Web Services Account ID is the catalog ID.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    ListEntitiesRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the parent entity for which you want to list the children. This
     * parameter takes a fully-qualified path of the entity in order to list the child
     * entities.</p>
     */
    inline const Aws::String& GetParentEntityName() const { return m_parentEntityName; }
    inline bool ParentEntityNameHasBeenSet() const { return m_parentEntityNameHasBeenSet; }
    template<typename ParentEntityNameT = Aws::String>
    void SetParentEntityName(ParentEntityNameT&& value) { m_parentEntityNameHasBeenSet = true; m_parentEntityName = std::forward<ParentEntityNameT>(value); }
    template<typename ParentEntityNameT = Aws::String>
    ListEntitiesRequest& WithParentEntityName(ParentEntityNameT&& value) { SetParentEntityName(std::forward<ParentEntityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEntitiesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API version of the SaaS connector.</p>
     */
    inline const Aws::String& GetDataStoreApiVersion() const { return m_dataStoreApiVersion; }
    inline bool DataStoreApiVersionHasBeenSet() const { return m_dataStoreApiVersionHasBeenSet; }
    template<typename DataStoreApiVersionT = Aws::String>
    void SetDataStoreApiVersion(DataStoreApiVersionT&& value) { m_dataStoreApiVersionHasBeenSet = true; m_dataStoreApiVersion = std::forward<DataStoreApiVersionT>(value); }
    template<typename DataStoreApiVersionT = Aws::String>
    ListEntitiesRequest& WithDataStoreApiVersion(DataStoreApiVersionT&& value) { SetDataStoreApiVersion(std::forward<DataStoreApiVersionT>(value)); return *this;}
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
