/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   */
  class ListHumanLoopsRequest : public AugmentedAIRuntimeRequest
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API ListHumanLoopsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHumanLoops"; }

    AWS_AUGMENTEDAIRUNTIME_API Aws::String SerializePayload() const override;

    AWS_AUGMENTEDAIRUNTIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>(Optional) The timestamp of the date when you want the human loops to begin
     * in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>(Optional) The timestamp of the date when you want the human loops to begin
     * in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>(Optional) The timestamp of the date when you want the human loops to begin
     * in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>(Optional) The timestamp of the date when you want the human loops to begin
     * in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>(Optional) The timestamp of the date when you want the human loops to begin
     * in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline ListHumanLoopsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>(Optional) The timestamp of the date when you want the human loops to begin
     * in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline ListHumanLoopsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>(Optional) The timestamp of the date before which you want the human loops to
     * begin in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>(Optional) The timestamp of the date before which you want the human loops to
     * begin in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>(Optional) The timestamp of the date before which you want the human loops to
     * begin in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>(Optional) The timestamp of the date before which you want the human loops to
     * begin in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>(Optional) The timestamp of the date before which you want the human loops to
     * begin in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline ListHumanLoopsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>(Optional) The timestamp of the date before which you want the human loops to
     * begin in ISO 8601 format. For example, <code>2020-02-24</code>.</p>
     */
    inline ListHumanLoopsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a flow definition.</p>
     */
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a flow definition.</p>
     */
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a flow definition.</p>
     */
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a flow definition.</p>
     */
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a flow definition.</p>
     */
    inline ListHumanLoopsRequest& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a flow definition.</p>
     */
    inline ListHumanLoopsRequest& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a flow definition.</p>
     */
    inline ListHumanLoopsRequest& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}


    /**
     * <p>Optional. The order for displaying results. Valid values:
     * <code>Ascending</code> and <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Optional. The order for displaying results. Valid values:
     * <code>Ascending</code> and <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Optional. The order for displaying results. Valid values:
     * <code>Ascending</code> and <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Optional. The order for displaying results. Valid values:
     * <code>Ascending</code> and <code>Descending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Optional. The order for displaying results. Valid values:
     * <code>Ascending</code> and <code>Descending</code>.</p>
     */
    inline ListHumanLoopsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Optional. The order for displaying results. Valid values:
     * <code>Ascending</code> and <code>Descending</code>.</p>
     */
    inline ListHumanLoopsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>A token to display the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline ListHumanLoopsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline ListHumanLoopsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline ListHumanLoopsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of items to return. If the total number of available items
     * is more than the value specified in <code>MaxResults</code>, then a
     * <code>NextToken</code> is returned in the output. You can use this token to
     * display the next page of results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of items to return. If the total number of available items
     * is more than the value specified in <code>MaxResults</code>, then a
     * <code>NextToken</code> is returned in the output. You can use this token to
     * display the next page of results. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of items to return. If the total number of available items
     * is more than the value specified in <code>MaxResults</code>, then a
     * <code>NextToken</code> is returned in the output. You can use this token to
     * display the next page of results. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of items to return. If the total number of available items
     * is more than the value specified in <code>MaxResults</code>, then a
     * <code>NextToken</code> is returned in the output. You can use this token to
     * display the next page of results. </p>
     */
    inline ListHumanLoopsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
