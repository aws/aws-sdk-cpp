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
  class AdminListGroupsForUserResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminListGroupsForUserResult();
    AWS_COGNITOIDENTITYPROVIDER_API AdminListGroupsForUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AdminListGroupsForUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The groups that the user belongs to.</p>
     */
    inline const Aws::Vector<GroupType>& GetGroups() const{ return m_groups; }

    /**
     * <p>The groups that the user belongs to.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupType>& value) { m_groups = value; }

    /**
     * <p>The groups that the user belongs to.</p>
     */
    inline void SetGroups(Aws::Vector<GroupType>&& value) { m_groups = std::move(value); }

    /**
     * <p>The groups that the user belongs to.</p>
     */
    inline AdminListGroupsForUserResult& WithGroups(const Aws::Vector<GroupType>& value) { SetGroups(value); return *this;}

    /**
     * <p>The groups that the user belongs to.</p>
     */
    inline AdminListGroupsForUserResult& WithGroups(Aws::Vector<GroupType>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The groups that the user belongs to.</p>
     */
    inline AdminListGroupsForUserResult& AddGroups(const GroupType& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>The groups that the user belongs to.</p>
     */
    inline AdminListGroupsForUserResult& AddGroups(GroupType&& value) { m_groups.push_back(std::move(value)); return *this; }


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
    inline AdminListGroupsForUserResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline AdminListGroupsForUserResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline AdminListGroupsForUserResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AdminListGroupsForUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AdminListGroupsForUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AdminListGroupsForUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GroupType> m_groups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
