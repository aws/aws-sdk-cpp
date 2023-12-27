/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/ProvisionedModelStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/SortByProvisionedModels.h>
#include <aws/bedrock/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Bedrock
{
namespace Model
{

  /**
   */
  class ListProvisionedModelThroughputsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListProvisionedModelThroughputsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProvisionedModelThroughputs"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Return provisioned capacities created after the specified time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Return provisioned capacities created after the specified time. </p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Return provisioned capacities created after the specified time. </p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Return provisioned capacities created after the specified time. </p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Return provisioned capacities created after the specified time. </p>
     */
    inline ListProvisionedModelThroughputsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Return provisioned capacities created after the specified time. </p>
     */
    inline ListProvisionedModelThroughputsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Return provisioned capacities created before the specified time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Return provisioned capacities created before the specified time. </p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Return provisioned capacities created before the specified time. </p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Return provisioned capacities created before the specified time. </p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Return provisioned capacities created before the specified time. </p>
     */
    inline ListProvisionedModelThroughputsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Return provisioned capacities created before the specified time. </p>
     */
    inline ListProvisionedModelThroughputsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Return the list of provisioned capacities that match the specified
     * status.</p>
     */
    inline const ProvisionedModelStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>Return the list of provisioned capacities that match the specified
     * status.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>Return the list of provisioned capacities that match the specified
     * status.</p>
     */
    inline void SetStatusEquals(const ProvisionedModelStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>Return the list of provisioned capacities that match the specified
     * status.</p>
     */
    inline void SetStatusEquals(ProvisionedModelStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>Return the list of provisioned capacities that match the specified
     * status.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithStatusEquals(const ProvisionedModelStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>Return the list of provisioned capacities that match the specified
     * status.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithStatusEquals(ProvisionedModelStatus&& value) { SetStatusEquals(std::move(value)); return *this;}


    /**
     * <p>Return the list of provisioned capacities where their model ARN is equal to
     * this parameter.</p>
     */
    inline const Aws::String& GetModelArnEquals() const{ return m_modelArnEquals; }

    /**
     * <p>Return the list of provisioned capacities where their model ARN is equal to
     * this parameter.</p>
     */
    inline bool ModelArnEqualsHasBeenSet() const { return m_modelArnEqualsHasBeenSet; }

    /**
     * <p>Return the list of provisioned capacities where their model ARN is equal to
     * this parameter.</p>
     */
    inline void SetModelArnEquals(const Aws::String& value) { m_modelArnEqualsHasBeenSet = true; m_modelArnEquals = value; }

    /**
     * <p>Return the list of provisioned capacities where their model ARN is equal to
     * this parameter.</p>
     */
    inline void SetModelArnEquals(Aws::String&& value) { m_modelArnEqualsHasBeenSet = true; m_modelArnEquals = std::move(value); }

    /**
     * <p>Return the list of provisioned capacities where their model ARN is equal to
     * this parameter.</p>
     */
    inline void SetModelArnEquals(const char* value) { m_modelArnEqualsHasBeenSet = true; m_modelArnEquals.assign(value); }

    /**
     * <p>Return the list of provisioned capacities where their model ARN is equal to
     * this parameter.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithModelArnEquals(const Aws::String& value) { SetModelArnEquals(value); return *this;}

    /**
     * <p>Return the list of provisioned capacities where their model ARN is equal to
     * this parameter.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithModelArnEquals(Aws::String&& value) { SetModelArnEquals(std::move(value)); return *this;}

    /**
     * <p>Return the list of provisioned capacities where their model ARN is equal to
     * this parameter.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithModelArnEquals(const char* value) { SetModelArnEquals(value); return *this;}


    /**
     * <p>Return the list of provisioned capacities if their name contains these
     * characters.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Return the list of provisioned capacities if their name contains these
     * characters.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Return the list of provisioned capacities if their name contains these
     * characters.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Return the list of provisioned capacities if their name contains these
     * characters.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Return the list of provisioned capacities if their name contains these
     * characters.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Return the list of provisioned capacities if their name contains these
     * characters.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Return the list of provisioned capacities if their name contains these
     * characters.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Return the list of provisioned capacities if their name contains these
     * characters.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>THe maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>THe maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>THe maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>THe maximum number of results to return in the response.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The field to sort by in the returned list of provisioned capacities.</p>
     */
    inline const SortByProvisionedModels& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field to sort by in the returned list of provisioned capacities.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field to sort by in the returned list of provisioned capacities.</p>
     */
    inline void SetSortBy(const SortByProvisionedModels& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field to sort by in the returned list of provisioned capacities.</p>
     */
    inline void SetSortBy(SortByProvisionedModels&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field to sort by in the returned list of provisioned capacities.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithSortBy(const SortByProvisionedModels& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field to sort by in the returned list of provisioned capacities.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithSortBy(SortByProvisionedModels&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order of the results.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order of the results.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order of the results.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order of the results.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order of the results.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order of the results.</p>
     */
    inline ListProvisionedModelThroughputsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    ProvisionedModelStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    Aws::String m_modelArnEquals;
    bool m_modelArnEqualsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortByProvisionedModels m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
