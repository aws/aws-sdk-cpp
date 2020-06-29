/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class AWS_RAM_API ListPendingInvitationResourcesRequest : public RAMRequest
  {
  public:
    ListPendingInvitationResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPendingInvitationResources"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline const Aws::String& GetResourceShareInvitationArn() const{ return m_resourceShareInvitationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline bool ResourceShareInvitationArnHasBeenSet() const { return m_resourceShareInvitationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(const Aws::String& value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(Aws::String&& value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(const char* value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithResourceShareInvitationArn(const Aws::String& value) { SetResourceShareInvitationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithResourceShareInvitationArn(Aws::String&& value) { SetResourceShareInvitationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithResourceShareInvitationArn(const char* value) { SetResourceShareInvitationArn(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_resourceShareInvitationArn;
    bool m_resourceShareInvitationArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
