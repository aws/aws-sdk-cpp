﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Invitation.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API ListInvitationsResult
  {
  public:
    ListInvitationsResult();
    ListInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the invitations returned by the operation.</p>
     */
    inline const Aws::Vector<Invitation>& GetInvitations() const{ return m_invitations; }

    /**
     * <p>The details of the invitations returned by the operation.</p>
     */
    inline void SetInvitations(const Aws::Vector<Invitation>& value) { m_invitations = value; }

    /**
     * <p>The details of the invitations returned by the operation.</p>
     */
    inline void SetInvitations(Aws::Vector<Invitation>&& value) { m_invitations = std::move(value); }

    /**
     * <p>The details of the invitations returned by the operation.</p>
     */
    inline ListInvitationsResult& WithInvitations(const Aws::Vector<Invitation>& value) { SetInvitations(value); return *this;}

    /**
     * <p>The details of the invitations returned by the operation.</p>
     */
    inline ListInvitationsResult& WithInvitations(Aws::Vector<Invitation>&& value) { SetInvitations(std::move(value)); return *this;}

    /**
     * <p>The details of the invitations returned by the operation.</p>
     */
    inline ListInvitationsResult& AddInvitations(const Invitation& value) { m_invitations.push_back(value); return *this; }

    /**
     * <p>The details of the invitations returned by the operation.</p>
     */
    inline ListInvitationsResult& AddInvitations(Invitation&& value) { m_invitations.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListInvitationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListInvitationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListInvitationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Invitation> m_invitations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
