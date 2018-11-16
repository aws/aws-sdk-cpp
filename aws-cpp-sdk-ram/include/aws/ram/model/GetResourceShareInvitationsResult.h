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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareInvitation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RAM
{
namespace Model
{
  class AWS_RAM_API GetResourceShareInvitationsResult
  {
  public:
    GetResourceShareInvitationsResult();
    GetResourceShareInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourceShareInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the invitations.</p>
     */
    inline const Aws::Vector<ResourceShareInvitation>& GetResourceShareInvitations() const{ return m_resourceShareInvitations; }

    /**
     * <p>Information about the invitations.</p>
     */
    inline void SetResourceShareInvitations(const Aws::Vector<ResourceShareInvitation>& value) { m_resourceShareInvitations = value; }

    /**
     * <p>Information about the invitations.</p>
     */
    inline void SetResourceShareInvitations(Aws::Vector<ResourceShareInvitation>&& value) { m_resourceShareInvitations = std::move(value); }

    /**
     * <p>Information about the invitations.</p>
     */
    inline GetResourceShareInvitationsResult& WithResourceShareInvitations(const Aws::Vector<ResourceShareInvitation>& value) { SetResourceShareInvitations(value); return *this;}

    /**
     * <p>Information about the invitations.</p>
     */
    inline GetResourceShareInvitationsResult& WithResourceShareInvitations(Aws::Vector<ResourceShareInvitation>&& value) { SetResourceShareInvitations(std::move(value)); return *this;}

    /**
     * <p>Information about the invitations.</p>
     */
    inline GetResourceShareInvitationsResult& AddResourceShareInvitations(const ResourceShareInvitation& value) { m_resourceShareInvitations.push_back(value); return *this; }

    /**
     * <p>Information about the invitations.</p>
     */
    inline GetResourceShareInvitationsResult& AddResourceShareInvitations(ResourceShareInvitation&& value) { m_resourceShareInvitations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetResourceShareInvitationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetResourceShareInvitationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetResourceShareInvitationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceShareInvitation> m_resourceShareInvitations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
