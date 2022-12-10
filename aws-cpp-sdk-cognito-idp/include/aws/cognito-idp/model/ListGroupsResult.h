/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/GroupType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class ListGroupsResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListGroupsResult();
    AWS_COGNITOIDENTITYPROVIDER_API ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The group objects for the groups.</p>
     */
    inline const Aws::Vector<GroupType>& GetGroups() const{ return m_groups; }

    /**
     * <p>The group objects for the groups.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupType>& value) { m_groups = value; }

    /**
     * <p>The group objects for the groups.</p>
     */
    inline void SetGroups(Aws::Vector<GroupType>&& value) { m_groups = std::move(value); }

    /**
     * <p>The group objects for the groups.</p>
     */
    inline ListGroupsResult& WithGroups(const Aws::Vector<GroupType>& value) { SetGroups(value); return *this;}

    /**
     * <p>The group objects for the groups.</p>
     */
    inline ListGroupsResult& WithGroups(Aws::Vector<GroupType>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The group objects for the groups.</p>
     */
    inline ListGroupsResult& AddGroups(const GroupType& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>The group objects for the groups.</p>
     */
    inline ListGroupsResult& AddGroups(GroupType&& value) { m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GroupType> m_groups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
