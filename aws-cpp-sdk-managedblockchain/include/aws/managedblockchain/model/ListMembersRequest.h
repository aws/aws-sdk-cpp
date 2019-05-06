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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class AWS_MANAGEDBLOCKCHAIN_API ListMembersRequest : public ManagedBlockchainRequest
  {
  public:
    ListMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMembers"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier of the network for which to list members.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p>The unique identifier of the network for which to list members.</p>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p>The unique identifier of the network for which to list members.</p>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p>The unique identifier of the network for which to list members.</p>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p>The unique identifier of the network for which to list members.</p>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p>The unique identifier of the network for which to list members.</p>
     */
    inline ListMembersRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p>The unique identifier of the network for which to list members.</p>
     */
    inline ListMembersRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the network for which to list members.</p>
     */
    inline ListMembersRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p>The optional name of the member to list.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The optional name of the member to list.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The optional name of the member to list.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The optional name of the member to list.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The optional name of the member to list.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The optional name of the member to list.</p>
     */
    inline ListMembersRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The optional name of the member to list.</p>
     */
    inline ListMembersRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The optional name of the member to list.</p>
     */
    inline ListMembersRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional status specifier. If provided, only members currently in this
     * status are listed.</p>
     */
    inline const MemberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>An optional status specifier. If provided, only members currently in this
     * status are listed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>An optional status specifier. If provided, only members currently in this
     * status are listed.</p>
     */
    inline void SetStatus(const MemberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>An optional status specifier. If provided, only members currently in this
     * status are listed.</p>
     */
    inline void SetStatus(MemberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>An optional status specifier. If provided, only members currently in this
     * status are listed.</p>
     */
    inline ListMembersRequest& WithStatus(const MemberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>An optional status specifier. If provided, only members currently in this
     * status are listed.</p>
     */
    inline ListMembersRequest& WithStatus(MemberStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An optional Boolean value. If provided, the request is limited either to
     * members that the current AWS account owns (<code>true</code>) or that other AWS
     * accounts own (<code>false</code>). If omitted, all members are listed.</p>
     */
    inline bool GetIsOwned() const{ return m_isOwned; }

    /**
     * <p>An optional Boolean value. If provided, the request is limited either to
     * members that the current AWS account owns (<code>true</code>) or that other AWS
     * accounts own (<code>false</code>). If omitted, all members are listed.</p>
     */
    inline bool IsOwnedHasBeenSet() const { return m_isOwnedHasBeenSet; }

    /**
     * <p>An optional Boolean value. If provided, the request is limited either to
     * members that the current AWS account owns (<code>true</code>) or that other AWS
     * accounts own (<code>false</code>). If omitted, all members are listed.</p>
     */
    inline void SetIsOwned(bool value) { m_isOwnedHasBeenSet = true; m_isOwned = value; }

    /**
     * <p>An optional Boolean value. If provided, the request is limited either to
     * members that the current AWS account owns (<code>true</code>) or that other AWS
     * accounts own (<code>false</code>). If omitted, all members are listed.</p>
     */
    inline ListMembersRequest& WithIsOwned(bool value) { SetIsOwned(value); return *this;}


    /**
     * <p>The maximum number of members to return in the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of members to return in the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of members to return in the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of members to return in the request.</p>
     */
    inline ListMembersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListMembersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListMembersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListMembersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    MemberStatus m_status;
    bool m_statusHasBeenSet;

    bool m_isOwned;
    bool m_isOwnedHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
