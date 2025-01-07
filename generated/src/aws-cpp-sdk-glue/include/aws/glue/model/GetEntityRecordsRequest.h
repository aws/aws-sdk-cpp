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
    AWS_GLUE_API GetEntityRecordsRequest();

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
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline GetEntityRecordsRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline GetEntityRecordsRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline GetEntityRecordsRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
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
    inline GetEntityRecordsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline GetEntityRecordsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline GetEntityRecordsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the entity that we want to query the preview data from the given
     * connection type.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    inline void SetEntityName(const Aws::String& value) { m_entityNameHasBeenSet = true; m_entityName = value; }
    inline void SetEntityName(Aws::String&& value) { m_entityNameHasBeenSet = true; m_entityName = std::move(value); }
    inline void SetEntityName(const char* value) { m_entityNameHasBeenSet = true; m_entityName.assign(value); }
    inline GetEntityRecordsRequest& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}
    inline GetEntityRecordsRequest& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}
    inline GetEntityRecordsRequest& WithEntityName(const char* value) { SetEntityName(value); return *this;}
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
    inline GetEntityRecordsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetEntityRecordsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetEntityRecordsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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
    inline GetEntityRecordsRequest& WithDataStoreApiVersion(const Aws::String& value) { SetDataStoreApiVersion(value); return *this;}
    inline GetEntityRecordsRequest& WithDataStoreApiVersion(Aws::String&& value) { SetDataStoreApiVersion(std::move(value)); return *this;}
    inline GetEntityRecordsRequest& WithDataStoreApiVersion(const char* value) { SetDataStoreApiVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector options that are required to query the data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionOptions() const{ return m_connectionOptions; }
    inline bool ConnectionOptionsHasBeenSet() const { return m_connectionOptionsHasBeenSet; }
    inline void SetConnectionOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions = value; }
    inline void SetConnectionOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions = std::move(value); }
    inline GetEntityRecordsRequest& WithConnectionOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetConnectionOptions(value); return *this;}
    inline GetEntityRecordsRequest& WithConnectionOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetConnectionOptions(std::move(value)); return *this;}
    inline GetEntityRecordsRequest& AddConnectionOptions(const Aws::String& key, const Aws::String& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(key, value); return *this; }
    inline GetEntityRecordsRequest& AddConnectionOptions(Aws::String&& key, const Aws::String& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(std::move(key), value); return *this; }
    inline GetEntityRecordsRequest& AddConnectionOptions(const Aws::String& key, Aws::String&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(key, std::move(value)); return *this; }
    inline GetEntityRecordsRequest& AddConnectionOptions(Aws::String&& key, Aws::String&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEntityRecordsRequest& AddConnectionOptions(const char* key, Aws::String&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(key, std::move(value)); return *this; }
    inline GetEntityRecordsRequest& AddConnectionOptions(Aws::String&& key, const char* value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(std::move(key), value); return *this; }
    inline GetEntityRecordsRequest& AddConnectionOptions(const char* key, const char* value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A filter predicate that you can apply in the query request.</p>
     */
    inline const Aws::String& GetFilterPredicate() const{ return m_filterPredicate; }
    inline bool FilterPredicateHasBeenSet() const { return m_filterPredicateHasBeenSet; }
    inline void SetFilterPredicate(const Aws::String& value) { m_filterPredicateHasBeenSet = true; m_filterPredicate = value; }
    inline void SetFilterPredicate(Aws::String&& value) { m_filterPredicateHasBeenSet = true; m_filterPredicate = std::move(value); }
    inline void SetFilterPredicate(const char* value) { m_filterPredicateHasBeenSet = true; m_filterPredicate.assign(value); }
    inline GetEntityRecordsRequest& WithFilterPredicate(const Aws::String& value) { SetFilterPredicate(value); return *this;}
    inline GetEntityRecordsRequest& WithFilterPredicate(Aws::String&& value) { SetFilterPredicate(std::move(value)); return *this;}
    inline GetEntityRecordsRequest& WithFilterPredicate(const char* value) { SetFilterPredicate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the number of records fetched with the request.</p>
     */
    inline long long GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(long long value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetEntityRecordsRequest& WithLimit(long long value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter that orders the response preview data.</p>
     */
    inline const Aws::String& GetOrderBy() const{ return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    inline void SetOrderBy(const Aws::String& value) { m_orderByHasBeenSet = true; m_orderBy = value; }
    inline void SetOrderBy(Aws::String&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }
    inline void SetOrderBy(const char* value) { m_orderByHasBeenSet = true; m_orderBy.assign(value); }
    inline GetEntityRecordsRequest& WithOrderBy(const Aws::String& value) { SetOrderBy(value); return *this;}
    inline GetEntityRecordsRequest& WithOrderBy(Aws::String&& value) { SetOrderBy(std::move(value)); return *this;}
    inline GetEntityRecordsRequest& WithOrderBy(const char* value) { SetOrderBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of fields that we want to fetch as part of preview data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedFields() const{ return m_selectedFields; }
    inline bool SelectedFieldsHasBeenSet() const { return m_selectedFieldsHasBeenSet; }
    inline void SetSelectedFields(const Aws::Vector<Aws::String>& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields = value; }
    inline void SetSelectedFields(Aws::Vector<Aws::String>&& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields = std::move(value); }
    inline GetEntityRecordsRequest& WithSelectedFields(const Aws::Vector<Aws::String>& value) { SetSelectedFields(value); return *this;}
    inline GetEntityRecordsRequest& WithSelectedFields(Aws::Vector<Aws::String>&& value) { SetSelectedFields(std::move(value)); return *this;}
    inline GetEntityRecordsRequest& AddSelectedFields(const Aws::String& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields.push_back(value); return *this; }
    inline GetEntityRecordsRequest& AddSelectedFields(Aws::String&& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields.push_back(std::move(value)); return *this; }
    inline GetEntityRecordsRequest& AddSelectedFields(const char* value) { m_selectedFieldsHasBeenSet = true; m_selectedFields.push_back(value); return *this; }
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

    long long m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_orderBy;
    bool m_orderByHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedFields;
    bool m_selectedFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
