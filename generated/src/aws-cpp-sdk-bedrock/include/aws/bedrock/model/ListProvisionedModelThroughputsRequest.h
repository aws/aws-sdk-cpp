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


    ///@{
    /**
     * <p>A filter that returns Provisioned Throughputs created after the specified
     * time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListProvisionedModelThroughputsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns Provisioned Throughputs created before the specified
     * time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListProvisionedModelThroughputsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns Provisioned Throughputs if their statuses matches the
     * value that you specify.</p>
     */
    inline const ProvisionedModelStatus& GetStatusEquals() const{ return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(const ProvisionedModelStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline void SetStatusEquals(ProvisionedModelStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }
    inline ListProvisionedModelThroughputsRequest& WithStatusEquals(const ProvisionedModelStatus& value) { SetStatusEquals(value); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithStatusEquals(ProvisionedModelStatus&& value) { SetStatusEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns Provisioned Throughputs whose model Amazon Resource
     * Name (ARN) is equal to the value that you specify.</p>
     */
    inline const Aws::String& GetModelArnEquals() const{ return m_modelArnEquals; }
    inline bool ModelArnEqualsHasBeenSet() const { return m_modelArnEqualsHasBeenSet; }
    inline void SetModelArnEquals(const Aws::String& value) { m_modelArnEqualsHasBeenSet = true; m_modelArnEquals = value; }
    inline void SetModelArnEquals(Aws::String&& value) { m_modelArnEqualsHasBeenSet = true; m_modelArnEquals = std::move(value); }
    inline void SetModelArnEquals(const char* value) { m_modelArnEqualsHasBeenSet = true; m_modelArnEquals.assign(value); }
    inline ListProvisionedModelThroughputsRequest& WithModelArnEquals(const Aws::String& value) { SetModelArnEquals(value); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithModelArnEquals(Aws::String&& value) { SetModelArnEquals(std::move(value)); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithModelArnEquals(const char* value) { SetModelArnEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns Provisioned Throughputs if their name contains the
     * expression that you specify.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }
    inline ListProvisionedModelThroughputsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>THe maximum number of results to return in the response. If there are more
     * results than the number you specified, the response returns a
     * <code>nextToken</code> value. To see the next batch of results, send the
     * <code>nextToken</code> value in another list request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListProvisionedModelThroughputsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there are more results than the number you specified in the
     * <code>maxResults</code> field, the response returns a <code>nextToken</code>
     * value. To see the next batch of results, specify the <code>nextToken</code>
     * value in this field.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListProvisionedModelThroughputsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field by which to sort the returned list of Provisioned Throughputs.</p>
     */
    inline const SortByProvisionedModels& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SortByProvisionedModels& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SortByProvisionedModels&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListProvisionedModelThroughputsRequest& WithSortBy(const SortByProvisionedModels& value) { SetSortBy(value); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithSortBy(SortByProvisionedModels&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order of the results.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListProvisionedModelThroughputsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListProvisionedModelThroughputsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
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
