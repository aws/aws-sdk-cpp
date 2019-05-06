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
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_RAM_API GetResourceShareInvitationsRequest : public RAMRequest
  {
  public:
    GetResourceShareInvitationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceShareInvitations"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Names (ARN) of the invitations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShareInvitationArns() const{ return m_resourceShareInvitationArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the invitations.</p>
     */
    inline bool ResourceShareInvitationArnsHasBeenSet() const { return m_resourceShareInvitationArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of the invitations.</p>
     */
    inline void SetResourceShareInvitationArns(const Aws::Vector<Aws::String>& value) { m_resourceShareInvitationArnsHasBeenSet = true; m_resourceShareInvitationArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the invitations.</p>
     */
    inline void SetResourceShareInvitationArns(Aws::Vector<Aws::String>&& value) { m_resourceShareInvitationArnsHasBeenSet = true; m_resourceShareInvitationArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of the invitations.</p>
     */
    inline GetResourceShareInvitationsRequest& WithResourceShareInvitationArns(const Aws::Vector<Aws::String>& value) { SetResourceShareInvitationArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the invitations.</p>
     */
    inline GetResourceShareInvitationsRequest& WithResourceShareInvitationArns(Aws::Vector<Aws::String>&& value) { SetResourceShareInvitationArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the invitations.</p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareInvitationArns(const Aws::String& value) { m_resourceShareInvitationArnsHasBeenSet = true; m_resourceShareInvitationArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the invitations.</p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareInvitationArns(Aws::String&& value) { m_resourceShareInvitationArnsHasBeenSet = true; m_resourceShareInvitationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the invitations.</p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareInvitationArns(const char* value) { m_resourceShareInvitationArnsHasBeenSet = true; m_resourceShareInvitationArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARN) of the resource shares.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShareArns() const{ return m_resourceShareArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the resource shares.</p>
     */
    inline bool ResourceShareArnsHasBeenSet() const { return m_resourceShareArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of the resource shares.</p>
     */
    inline void SetResourceShareArns(const Aws::Vector<Aws::String>& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the resource shares.</p>
     */
    inline void SetResourceShareArns(Aws::Vector<Aws::String>&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of the resource shares.</p>
     */
    inline GetResourceShareInvitationsRequest& WithResourceShareArns(const Aws::Vector<Aws::String>& value) { SetResourceShareArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the resource shares.</p>
     */
    inline GetResourceShareInvitationsRequest& WithResourceShareArns(Aws::Vector<Aws::String>&& value) { SetResourceShareArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the resource shares.</p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareArns(const Aws::String& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the resource shares.</p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareArns(Aws::String&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the resource shares.</p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareArns(const char* value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }


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
    inline GetResourceShareInvitationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetResourceShareInvitationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetResourceShareInvitationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline GetResourceShareInvitationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceShareInvitationArns;
    bool m_resourceShareInvitationArnsHasBeenSet;

    Aws::Vector<Aws::String> m_resourceShareArns;
    bool m_resourceShareArnsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
