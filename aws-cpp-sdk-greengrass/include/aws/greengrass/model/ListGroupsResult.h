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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/GroupInformation.h>
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
namespace Greengrass
{
namespace Model
{
  class AWS_GREENGRASS_API ListGroupsResult
  {
  public:
    ListGroupsResult();
    ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Information about a group.
     */
    inline const Aws::Vector<GroupInformation>& GetGroups() const{ return m_groups; }

    /**
     * Information about a group.
     */
    inline void SetGroups(const Aws::Vector<GroupInformation>& value) { m_groups = value; }

    /**
     * Information about a group.
     */
    inline void SetGroups(Aws::Vector<GroupInformation>&& value) { m_groups = std::move(value); }

    /**
     * Information about a group.
     */
    inline ListGroupsResult& WithGroups(const Aws::Vector<GroupInformation>& value) { SetGroups(value); return *this;}

    /**
     * Information about a group.
     */
    inline ListGroupsResult& WithGroups(Aws::Vector<GroupInformation>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * Information about a group.
     */
    inline ListGroupsResult& AddGroups(const GroupInformation& value) { m_groups.push_back(value); return *this; }

    /**
     * Information about a group.
     */
    inline ListGroupsResult& AddGroups(GroupInformation&& value) { m_groups.push_back(std::move(value)); return *this; }


    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GroupInformation> m_groups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
