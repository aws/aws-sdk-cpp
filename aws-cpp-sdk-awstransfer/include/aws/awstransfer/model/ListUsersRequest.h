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
  class AWS_TRANSFER_API ListUsersRequest : public TransferRequest
  {
  public:
    ListUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUsers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the number of users to return as a response to the
     * <code>ListUsers</code> request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the number of users to return as a response to the
     * <code>ListUsers</code> request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the number of users to return as a response to the
     * <code>ListUsers</code> request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the number of users to return as a response to the
     * <code>ListUsers</code> request.</p>
     */
    inline ListUsersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline ListUsersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline ListUsersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline ListUsersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server that has users are assigned to it.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server that has users are assigned to it.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server that has users are assigned to it.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server that has users are assigned to it.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server that has users are assigned to it.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server that has users are assigned to it.</p>
     */
    inline ListUsersRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server that has users are assigned to it.</p>
     */
    inline ListUsersRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server that has users are assigned to it.</p>
     */
    inline ListUsersRequest& WithServerId(const char* value) { SetServerId(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
