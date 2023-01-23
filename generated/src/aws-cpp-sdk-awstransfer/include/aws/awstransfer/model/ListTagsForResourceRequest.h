/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * server, user, or role.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * server, user, or role.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * server, user, or role.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * server, user, or role.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * server, user, or role.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * server, user, or role.</p>
     */
    inline ListTagsForResourceRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * server, user, or role.</p>
     */
    inline ListTagsForResourceRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * server, user, or role.</p>
     */
    inline ListTagsForResourceRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies the number of tags to return as a response to the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the number of tags to return as a response to the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the number of tags to return as a response to the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the number of tags to return as a response to the
     * <code>ListTagsForResource</code> request.</p>
     */
    inline ListTagsForResourceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When you request additional results from the <code>ListTagsForResource</code>
     * operation, a <code>NextToken</code> parameter is returned in the input. You can
     * then pass in a subsequent command to the <code>NextToken</code> parameter to
     * continue listing additional tags.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you request additional results from the <code>ListTagsForResource</code>
     * operation, a <code>NextToken</code> parameter is returned in the input. You can
     * then pass in a subsequent command to the <code>NextToken</code> parameter to
     * continue listing additional tags.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When you request additional results from the <code>ListTagsForResource</code>
     * operation, a <code>NextToken</code> parameter is returned in the input. You can
     * then pass in a subsequent command to the <code>NextToken</code> parameter to
     * continue listing additional tags.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When you request additional results from the <code>ListTagsForResource</code>
     * operation, a <code>NextToken</code> parameter is returned in the input. You can
     * then pass in a subsequent command to the <code>NextToken</code> parameter to
     * continue listing additional tags.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When you request additional results from the <code>ListTagsForResource</code>
     * operation, a <code>NextToken</code> parameter is returned in the input. You can
     * then pass in a subsequent command to the <code>NextToken</code> parameter to
     * continue listing additional tags.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When you request additional results from the <code>ListTagsForResource</code>
     * operation, a <code>NextToken</code> parameter is returned in the input. You can
     * then pass in a subsequent command to the <code>NextToken</code> parameter to
     * continue listing additional tags.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you request additional results from the <code>ListTagsForResource</code>
     * operation, a <code>NextToken</code> parameter is returned in the input. You can
     * then pass in a subsequent command to the <code>NextToken</code> parameter to
     * continue listing additional tags.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you request additional results from the <code>ListTagsForResource</code>
     * operation, a <code>NextToken</code> parameter is returned in the input. You can
     * then pass in a subsequent command to the <code>NextToken</code> parameter to
     * continue listing additional tags.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
