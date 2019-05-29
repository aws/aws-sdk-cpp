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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/EntityType.h>
#include <aws/iotthingsgraph/model/EntityFilter.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API SearchEntitiesRequest : public IoTThingsGraphRequest
  {
  public:
    SearchEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchEntities"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The entity types for which to search.</p>
     */
    inline const Aws::Vector<EntityType>& GetEntityTypes() const{ return m_entityTypes; }

    /**
     * <p>The entity types for which to search.</p>
     */
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }

    /**
     * <p>The entity types for which to search.</p>
     */
    inline void SetEntityTypes(const Aws::Vector<EntityType>& value) { m_entityTypesHasBeenSet = true; m_entityTypes = value; }

    /**
     * <p>The entity types for which to search.</p>
     */
    inline void SetEntityTypes(Aws::Vector<EntityType>&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::move(value); }

    /**
     * <p>The entity types for which to search.</p>
     */
    inline SearchEntitiesRequest& WithEntityTypes(const Aws::Vector<EntityType>& value) { SetEntityTypes(value); return *this;}

    /**
     * <p>The entity types for which to search.</p>
     */
    inline SearchEntitiesRequest& WithEntityTypes(Aws::Vector<EntityType>&& value) { SetEntityTypes(std::move(value)); return *this;}

    /**
     * <p>The entity types for which to search.</p>
     */
    inline SearchEntitiesRequest& AddEntityTypes(const EntityType& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }

    /**
     * <p>The entity types for which to search.</p>
     */
    inline SearchEntitiesRequest& AddEntityTypes(EntityType&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Optional filter to apply to the search. Valid filters are <code>NAME</code>
     * <code>NAMESPACE</code>, <code>SEMANTIC_TYPE_PATH</code> and
     * <code>REFERENCED_ENTITY_ID</code>. <code>REFERENCED_ENTITY_ID</code> filters on
     * entities that are used by the entity in the result set. For example, you can
     * filter on the ID of a property that is used in a state.</p> <p>Multiple filters
     * function as OR criteria in the query. Multiple values passed inside the filter
     * function as AND criteria.</p>
     */
    inline const Aws::Vector<EntityFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Optional filter to apply to the search. Valid filters are <code>NAME</code>
     * <code>NAMESPACE</code>, <code>SEMANTIC_TYPE_PATH</code> and
     * <code>REFERENCED_ENTITY_ID</code>. <code>REFERENCED_ENTITY_ID</code> filters on
     * entities that are used by the entity in the result set. For example, you can
     * filter on the ID of a property that is used in a state.</p> <p>Multiple filters
     * function as OR criteria in the query. Multiple values passed inside the filter
     * function as AND criteria.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Optional filter to apply to the search. Valid filters are <code>NAME</code>
     * <code>NAMESPACE</code>, <code>SEMANTIC_TYPE_PATH</code> and
     * <code>REFERENCED_ENTITY_ID</code>. <code>REFERENCED_ENTITY_ID</code> filters on
     * entities that are used by the entity in the result set. For example, you can
     * filter on the ID of a property that is used in a state.</p> <p>Multiple filters
     * function as OR criteria in the query. Multiple values passed inside the filter
     * function as AND criteria.</p>
     */
    inline void SetFilters(const Aws::Vector<EntityFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Optional filter to apply to the search. Valid filters are <code>NAME</code>
     * <code>NAMESPACE</code>, <code>SEMANTIC_TYPE_PATH</code> and
     * <code>REFERENCED_ENTITY_ID</code>. <code>REFERENCED_ENTITY_ID</code> filters on
     * entities that are used by the entity in the result set. For example, you can
     * filter on the ID of a property that is used in a state.</p> <p>Multiple filters
     * function as OR criteria in the query. Multiple values passed inside the filter
     * function as AND criteria.</p>
     */
    inline void SetFilters(Aws::Vector<EntityFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Optional filter to apply to the search. Valid filters are <code>NAME</code>
     * <code>NAMESPACE</code>, <code>SEMANTIC_TYPE_PATH</code> and
     * <code>REFERENCED_ENTITY_ID</code>. <code>REFERENCED_ENTITY_ID</code> filters on
     * entities that are used by the entity in the result set. For example, you can
     * filter on the ID of a property that is used in a state.</p> <p>Multiple filters
     * function as OR criteria in the query. Multiple values passed inside the filter
     * function as AND criteria.</p>
     */
    inline SearchEntitiesRequest& WithFilters(const Aws::Vector<EntityFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Optional filter to apply to the search. Valid filters are <code>NAME</code>
     * <code>NAMESPACE</code>, <code>SEMANTIC_TYPE_PATH</code> and
     * <code>REFERENCED_ENTITY_ID</code>. <code>REFERENCED_ENTITY_ID</code> filters on
     * entities that are used by the entity in the result set. For example, you can
     * filter on the ID of a property that is used in a state.</p> <p>Multiple filters
     * function as OR criteria in the query. Multiple values passed inside the filter
     * function as AND criteria.</p>
     */
    inline SearchEntitiesRequest& WithFilters(Aws::Vector<EntityFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Optional filter to apply to the search. Valid filters are <code>NAME</code>
     * <code>NAMESPACE</code>, <code>SEMANTIC_TYPE_PATH</code> and
     * <code>REFERENCED_ENTITY_ID</code>. <code>REFERENCED_ENTITY_ID</code> filters on
     * entities that are used by the entity in the result set. For example, you can
     * filter on the ID of a property that is used in a state.</p> <p>Multiple filters
     * function as OR criteria in the query. Multiple values passed inside the filter
     * function as AND criteria.</p>
     */
    inline SearchEntitiesRequest& AddFilters(const EntityFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Optional filter to apply to the search. Valid filters are <code>NAME</code>
     * <code>NAMESPACE</code>, <code>SEMANTIC_TYPE_PATH</code> and
     * <code>REFERENCED_ENTITY_ID</code>. <code>REFERENCED_ENTITY_ID</code> filters on
     * entities that are used by the entity in the result set. For example, you can
     * filter on the ID of a property that is used in a state.</p> <p>Multiple filters
     * function as OR criteria in the query. Multiple values passed inside the filter
     * function as AND criteria.</p>
     */
    inline SearchEntitiesRequest& AddFilters(EntityFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchEntitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchEntitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchEntitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline SearchEntitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline long long GetNamespaceVersion() const{ return m_namespaceVersion; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline bool NamespaceVersionHasBeenSet() const { return m_namespaceVersionHasBeenSet; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline void SetNamespaceVersion(long long value) { m_namespaceVersionHasBeenSet = true; m_namespaceVersion = value; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline SearchEntitiesRequest& WithNamespaceVersion(long long value) { SetNamespaceVersion(value); return *this;}

  private:

    Aws::Vector<EntityType> m_entityTypes;
    bool m_entityTypesHasBeenSet;

    Aws::Vector<EntityFilter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    long long m_namespaceVersion;
    bool m_namespaceVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
