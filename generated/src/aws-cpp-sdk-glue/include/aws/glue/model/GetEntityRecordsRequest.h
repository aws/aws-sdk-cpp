/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetEntityRecordsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetEntityRecordsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEntityRecords"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the connection that contains the connection type credentials.</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    GetEntityRecordsRequest& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
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
    GetEntityRecordsRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the entity that we want to query the preview data from the given
     * connection type.</p>
     */
    inline const Aws::String& GetEntityName() const { return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    template<typename EntityNameT = Aws::String>
    void SetEntityName(EntityNameT&& value) { m_entityNameHasBeenSet = true; m_entityName = std::forward<EntityNameT>(value); }
    template<typename EntityNameT = Aws::String>
    GetEntityRecordsRequest& WithEntityName(EntityNameT&& value) { SetEntityName(std::forward<EntityNameT>(value)); return *this;}
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
    GetEntityRecordsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    GetEntityRecordsRequest& WithDataStoreApiVersion(DataStoreApiVersionT&& value) { SetDataStoreApiVersion(std::forward<DataStoreApiVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector options that are required to query the data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionOptions() const { return m_connectionOptions; }
    inline bool ConnectionOptionsHasBeenSet() const { return m_connectionOptionsHasBeenSet; }
    template<typename ConnectionOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetConnectionOptions(ConnectionOptionsT&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions = std::forward<ConnectionOptionsT>(value); }
    template<typename ConnectionOptionsT = Aws::Map<Aws::String, Aws::String>>
    GetEntityRecordsRequest& WithConnectionOptions(ConnectionOptionsT&& value) { SetConnectionOptions(std::forward<ConnectionOptionsT>(value)); return *this;}
    template<typename ConnectionOptionsKeyT = Aws::String, typename ConnectionOptionsValueT = Aws::String>
    GetEntityRecordsRequest& AddConnectionOptions(ConnectionOptionsKeyT&& key, ConnectionOptionsValueT&& value) {
      m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(std::forward<ConnectionOptionsKeyT>(key), std::forward<ConnectionOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A filter predicate that you can apply in the query request.</p>
     */
    inline const Aws::String& GetFilterPredicate() const { return m_filterPredicate; }
    inline bool FilterPredicateHasBeenSet() const { return m_filterPredicateHasBeenSet; }
    template<typename FilterPredicateT = Aws::String>
    void SetFilterPredicate(FilterPredicateT&& value) { m_filterPredicateHasBeenSet = true; m_filterPredicate = std::forward<FilterPredicateT>(value); }
    template<typename FilterPredicateT = Aws::String>
    GetEntityRecordsRequest& WithFilterPredicate(FilterPredicateT&& value) { SetFilterPredicate(std::forward<FilterPredicateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the number of records fetched with the request.</p>
     */
    inline long long GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(long long value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetEntityRecordsRequest& WithLimit(long long value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter that orders the response preview data.</p>
     */
    inline const Aws::String& GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    template<typename OrderByT = Aws::String>
    void SetOrderBy(OrderByT&& value) { m_orderByHasBeenSet = true; m_orderBy = std::forward<OrderByT>(value); }
    template<typename OrderByT = Aws::String>
    GetEntityRecordsRequest& WithOrderBy(OrderByT&& value) { SetOrderBy(std::forward<OrderByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of fields that we want to fetch as part of preview data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedFields() const { return m_selectedFields; }
    inline bool SelectedFieldsHasBeenSet() const { return m_selectedFieldsHasBeenSet; }
    template<typename SelectedFieldsT = Aws::Vector<Aws::String>>
    void SetSelectedFields(SelectedFieldsT&& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields = std::forward<SelectedFieldsT>(value); }
    template<typename SelectedFieldsT = Aws::Vector<Aws::String>>
    GetEntityRecordsRequest& WithSelectedFields(SelectedFieldsT&& value) { SetSelectedFields(std::forward<SelectedFieldsT>(value)); return *this;}
    template<typename SelectedFieldsT = Aws::String>
    GetEntityRecordsRequest& AddSelectedFields(SelectedFieldsT&& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields.emplace_back(std::forward<SelectedFieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_dataStoreApiVersion;
    bool m_dataStoreApiVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_connectionOptions;
    bool m_connectionOptionsHasBeenSet = false;

    Aws::String m_filterPredicate;
    bool m_filterPredicateHasBeenSet = false;

    long long m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_orderBy;
    bool m_orderByHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedFields;
    bool m_selectedFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
