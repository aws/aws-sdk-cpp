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
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/GroupIdentifier.h>
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
namespace ResourceGroups
{
namespace Model
{
  class AWS_RESOURCEGROUPS_API ListGroupsResult
  {
  public:
    ListGroupsResult();
    ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of GroupIdentifier objects. Each identifier is an object that contains
     * both the GroupName and the GroupArn.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroupIdentifiers() const{ return m_groupIdentifiers; }

    /**
     * <p>A list of GroupIdentifier objects. Each identifier is an object that contains
     * both the GroupName and the GroupArn.</p>
     */
    inline void SetGroupIdentifiers(const Aws::Vector<GroupIdentifier>& value) { m_groupIdentifiers = value; }

    /**
     * <p>A list of GroupIdentifier objects. Each identifier is an object that contains
     * both the GroupName and the GroupArn.</p>
     */
    inline void SetGroupIdentifiers(Aws::Vector<GroupIdentifier>&& value) { m_groupIdentifiers = std::move(value); }

    /**
     * <p>A list of GroupIdentifier objects. Each identifier is an object that contains
     * both the GroupName and the GroupArn.</p>
     */
    inline ListGroupsResult& WithGroupIdentifiers(const Aws::Vector<GroupIdentifier>& value) { SetGroupIdentifiers(value); return *this;}

    /**
     * <p>A list of GroupIdentifier objects. Each identifier is an object that contains
     * both the GroupName and the GroupArn.</p>
     */
    inline ListGroupsResult& WithGroupIdentifiers(Aws::Vector<GroupIdentifier>&& value) { SetGroupIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of GroupIdentifier objects. Each identifier is an object that contains
     * both the GroupName and the GroupArn.</p>
     */
    inline ListGroupsResult& AddGroupIdentifiers(const GroupIdentifier& value) { m_groupIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of GroupIdentifier objects. Each identifier is an object that contains
     * both the GroupName and the GroupArn.</p>
     */
    inline ListGroupsResult& AddGroupIdentifiers(GroupIdentifier&& value) { m_groupIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The NextToken value to include in a subsequent <code>ListGroups</code>
     * request, to get more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The NextToken value to include in a subsequent <code>ListGroups</code>
     * request, to get more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The NextToken value to include in a subsequent <code>ListGroups</code>
     * request, to get more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The NextToken value to include in a subsequent <code>ListGroups</code>
     * request, to get more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The NextToken value to include in a subsequent <code>ListGroups</code>
     * request, to get more results.</p>
     */
    inline ListGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The NextToken value to include in a subsequent <code>ListGroups</code>
     * request, to get more results.</p>
     */
    inline ListGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The NextToken value to include in a subsequent <code>ListGroups</code>
     * request, to get more results.</p>
     */
    inline ListGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GroupIdentifier> m_groupIdentifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
