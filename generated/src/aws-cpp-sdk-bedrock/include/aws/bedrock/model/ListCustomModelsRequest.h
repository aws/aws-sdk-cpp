/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/SortModelsBy.h>
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
  class ListCustomModelsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListCustomModelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCustomModels"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Return custom models created before the specified time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Return custom models created before the specified time. </p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Return custom models created before the specified time. </p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Return custom models created before the specified time. </p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Return custom models created before the specified time. </p>
     */
    inline ListCustomModelsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Return custom models created before the specified time. </p>
     */
    inline ListCustomModelsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Return custom models created after the specified time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Return custom models created after the specified time. </p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Return custom models created after the specified time. </p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Return custom models created after the specified time. </p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Return custom models created after the specified time. </p>
     */
    inline ListCustomModelsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Return custom models created after the specified time. </p>
     */
    inline ListCustomModelsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Return custom models only if the job name contains these characters.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Return custom models only if the job name contains these characters.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Return custom models only if the job name contains these characters.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Return custom models only if the job name contains these characters.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Return custom models only if the job name contains these characters.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Return custom models only if the job name contains these characters.</p>
     */
    inline ListCustomModelsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Return custom models only if the job name contains these characters.</p>
     */
    inline ListCustomModelsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Return custom models only if the job name contains these characters.</p>
     */
    inline ListCustomModelsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>Return custom models only if the base model ARN matches this parameter.</p>
     */
    inline const Aws::String& GetBaseModelArnEquals() const{ return m_baseModelArnEquals; }

    /**
     * <p>Return custom models only if the base model ARN matches this parameter.</p>
     */
    inline bool BaseModelArnEqualsHasBeenSet() const { return m_baseModelArnEqualsHasBeenSet; }

    /**
     * <p>Return custom models only if the base model ARN matches this parameter.</p>
     */
    inline void SetBaseModelArnEquals(const Aws::String& value) { m_baseModelArnEqualsHasBeenSet = true; m_baseModelArnEquals = value; }

    /**
     * <p>Return custom models only if the base model ARN matches this parameter.</p>
     */
    inline void SetBaseModelArnEquals(Aws::String&& value) { m_baseModelArnEqualsHasBeenSet = true; m_baseModelArnEquals = std::move(value); }

    /**
     * <p>Return custom models only if the base model ARN matches this parameter.</p>
     */
    inline void SetBaseModelArnEquals(const char* value) { m_baseModelArnEqualsHasBeenSet = true; m_baseModelArnEquals.assign(value); }

    /**
     * <p>Return custom models only if the base model ARN matches this parameter.</p>
     */
    inline ListCustomModelsRequest& WithBaseModelArnEquals(const Aws::String& value) { SetBaseModelArnEquals(value); return *this;}

    /**
     * <p>Return custom models only if the base model ARN matches this parameter.</p>
     */
    inline ListCustomModelsRequest& WithBaseModelArnEquals(Aws::String&& value) { SetBaseModelArnEquals(std::move(value)); return *this;}

    /**
     * <p>Return custom models only if the base model ARN matches this parameter.</p>
     */
    inline ListCustomModelsRequest& WithBaseModelArnEquals(const char* value) { SetBaseModelArnEquals(value); return *this;}


    /**
     * <p>Return custom models only if the foundation model ARN matches this
     * parameter.</p>
     */
    inline const Aws::String& GetFoundationModelArnEquals() const{ return m_foundationModelArnEquals; }

    /**
     * <p>Return custom models only if the foundation model ARN matches this
     * parameter.</p>
     */
    inline bool FoundationModelArnEqualsHasBeenSet() const { return m_foundationModelArnEqualsHasBeenSet; }

    /**
     * <p>Return custom models only if the foundation model ARN matches this
     * parameter.</p>
     */
    inline void SetFoundationModelArnEquals(const Aws::String& value) { m_foundationModelArnEqualsHasBeenSet = true; m_foundationModelArnEquals = value; }

    /**
     * <p>Return custom models only if the foundation model ARN matches this
     * parameter.</p>
     */
    inline void SetFoundationModelArnEquals(Aws::String&& value) { m_foundationModelArnEqualsHasBeenSet = true; m_foundationModelArnEquals = std::move(value); }

    /**
     * <p>Return custom models only if the foundation model ARN matches this
     * parameter.</p>
     */
    inline void SetFoundationModelArnEquals(const char* value) { m_foundationModelArnEqualsHasBeenSet = true; m_foundationModelArnEquals.assign(value); }

    /**
     * <p>Return custom models only if the foundation model ARN matches this
     * parameter.</p>
     */
    inline ListCustomModelsRequest& WithFoundationModelArnEquals(const Aws::String& value) { SetFoundationModelArnEquals(value); return *this;}

    /**
     * <p>Return custom models only if the foundation model ARN matches this
     * parameter.</p>
     */
    inline ListCustomModelsRequest& WithFoundationModelArnEquals(Aws::String&& value) { SetFoundationModelArnEquals(std::move(value)); return *this;}

    /**
     * <p>Return custom models only if the foundation model ARN matches this
     * parameter.</p>
     */
    inline ListCustomModelsRequest& WithFoundationModelArnEquals(const char* value) { SetFoundationModelArnEquals(value); return *this;}


    /**
     * <p>Maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to return in the response.</p>
     */
    inline ListCustomModelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListCustomModelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline ListCustomModelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline ListCustomModelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The field to sort by in the returned list of models.</p>
     */
    inline const SortModelsBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field to sort by in the returned list of models.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field to sort by in the returned list of models.</p>
     */
    inline void SetSortBy(const SortModelsBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field to sort by in the returned list of models.</p>
     */
    inline void SetSortBy(SortModelsBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field to sort by in the returned list of models.</p>
     */
    inline ListCustomModelsRequest& WithSortBy(const SortModelsBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field to sort by in the returned list of models.</p>
     */
    inline ListCustomModelsRequest& WithSortBy(SortModelsBy&& value) { SetSortBy(std::move(value)); return *this;}


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
    inline ListCustomModelsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order of the results.</p>
     */
    inline ListCustomModelsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::String m_baseModelArnEquals;
    bool m_baseModelArnEqualsHasBeenSet = false;

    Aws::String m_foundationModelArnEquals;
    bool m_foundationModelArnEqualsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortModelsBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
