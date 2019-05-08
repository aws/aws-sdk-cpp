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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/EndpointSortKey.h>
#include <aws/sagemaker/model/OrderKey.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EndpointStatus.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API ListEndpointsRequest : public SageMakerRequest
  {
  public:
    ListEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEndpoints"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Sorts the list of results. The default is <code>CreationTime</code>.</p>
     */
    inline const EndpointSortKey& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Sorts the list of results. The default is <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Sorts the list of results. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const EndpointSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Sorts the list of results. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(EndpointSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Sorts the list of results. The default is <code>CreationTime</code>.</p>
     */
    inline ListEndpointsRequest& WithSortBy(const EndpointSortKey& value) { SetSortBy(value); return *this;}

    /**
     * <p>Sorts the list of results. The default is <code>CreationTime</code>.</p>
     */
    inline ListEndpointsRequest& WithSortBy(EndpointSortKey&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline const OrderKey& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const OrderKey& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(OrderKey&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline ListEndpointsRequest& WithSortOrder(const OrderKey& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline ListEndpointsRequest& WithSortOrder(OrderKey&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>If the result of a <code>ListEndpoints</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * endpoints, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of a <code>ListEndpoints</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * endpoints, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of a <code>ListEndpoints</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * endpoints, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of a <code>ListEndpoints</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * endpoints, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of a <code>ListEndpoints</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * endpoints, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of a <code>ListEndpoints</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * endpoints, use the token in the next request.</p>
     */
    inline ListEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of a <code>ListEndpoints</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * endpoints, use the token in the next request.</p>
     */
    inline ListEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of a <code>ListEndpoints</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * endpoints, use the token in the next request.</p>
     */
    inline ListEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of endpoints to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of endpoints to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of endpoints to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of endpoints to return in the response.</p>
     */
    inline ListEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A string in endpoint names. This filter returns only endpoints whose name
     * contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>A string in endpoint names. This filter returns only endpoints whose name
     * contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>A string in endpoint names. This filter returns only endpoints whose name
     * contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>A string in endpoint names. This filter returns only endpoints whose name
     * contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>A string in endpoint names. This filter returns only endpoints whose name
     * contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>A string in endpoint names. This filter returns only endpoints whose name
     * contains the specified string.</p>
     */
    inline ListEndpointsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>A string in endpoint names. This filter returns only endpoints whose name
     * contains the specified string.</p>
     */
    inline ListEndpointsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>A string in endpoint names. This filter returns only endpoints whose name
     * contains the specified string.</p>
     */
    inline ListEndpointsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>A filter that returns only endpoints that were created before the specified
     * time (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only endpoints that were created before the specified
     * time (timestamp).</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only endpoints that were created before the specified
     * time (timestamp).</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only endpoints that were created before the specified
     * time (timestamp).</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only endpoints that were created before the specified
     * time (timestamp).</p>
     */
    inline ListEndpointsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only endpoints that were created before the specified
     * time (timestamp).</p>
     */
    inline ListEndpointsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only endpoints with a creation time greater than or
     * equal to the specified time (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only endpoints with a creation time greater than or
     * equal to the specified time (timestamp).</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only endpoints with a creation time greater than or
     * equal to the specified time (timestamp).</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only endpoints with a creation time greater than or
     * equal to the specified time (timestamp).</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only endpoints with a creation time greater than or
     * equal to the specified time (timestamp).</p>
     */
    inline ListEndpointsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only endpoints with a creation time greater than or
     * equal to the specified time (timestamp).</p>
     */
    inline ListEndpointsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p> A filter that returns only endpoints that were modified before the specified
     * timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }

    /**
     * <p> A filter that returns only endpoints that were modified before the specified
     * timestamp. </p>
     */
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }

    /**
     * <p> A filter that returns only endpoints that were modified before the specified
     * timestamp. </p>
     */
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }

    /**
     * <p> A filter that returns only endpoints that were modified before the specified
     * timestamp. </p>
     */
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }

    /**
     * <p> A filter that returns only endpoints that were modified before the specified
     * timestamp. </p>
     */
    inline ListEndpointsRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}

    /**
     * <p> A filter that returns only endpoints that were modified before the specified
     * timestamp. </p>
     */
    inline ListEndpointsRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p> A filter that returns only endpoints that were modified after the specified
     * timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }

    /**
     * <p> A filter that returns only endpoints that were modified after the specified
     * timestamp. </p>
     */
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }

    /**
     * <p> A filter that returns only endpoints that were modified after the specified
     * timestamp. </p>
     */
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }

    /**
     * <p> A filter that returns only endpoints that were modified after the specified
     * timestamp. </p>
     */
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }

    /**
     * <p> A filter that returns only endpoints that were modified after the specified
     * timestamp. </p>
     */
    inline ListEndpointsRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}

    /**
     * <p> A filter that returns only endpoints that were modified after the specified
     * timestamp. </p>
     */
    inline ListEndpointsRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p> A filter that returns only endpoints with the specified status.</p>
     */
    inline const EndpointStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p> A filter that returns only endpoints with the specified status.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p> A filter that returns only endpoints with the specified status.</p>
     */
    inline void SetStatusEquals(const EndpointStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p> A filter that returns only endpoints with the specified status.</p>
     */
    inline void SetStatusEquals(EndpointStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p> A filter that returns only endpoints with the specified status.</p>
     */
    inline ListEndpointsRequest& WithStatusEquals(const EndpointStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p> A filter that returns only endpoints with the specified status.</p>
     */
    inline ListEndpointsRequest& WithStatusEquals(EndpointStatus&& value) { SetStatusEquals(std::move(value)); return *this;}

  private:

    EndpointSortKey m_sortBy;
    bool m_sortByHasBeenSet;

    OrderKey m_sortOrder;
    bool m_sortOrderHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet;

    EndpointStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
