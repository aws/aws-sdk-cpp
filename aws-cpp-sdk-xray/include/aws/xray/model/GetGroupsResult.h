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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/GroupSummary.h>
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
namespace XRay
{
namespace Model
{
  class AWS_XRAY_API GetGroupsResult
  {
  public:
    GetGroupsResult();
    GetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The collection of all active groups.</p>
     */
    inline const Aws::Vector<GroupSummary>& GetGroups() const{ return m_groups; }

    /**
     * <p>The collection of all active groups.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupSummary>& value) { m_groups = value; }

    /**
     * <p>The collection of all active groups.</p>
     */
    inline void SetGroups(Aws::Vector<GroupSummary>&& value) { m_groups = std::move(value); }

    /**
     * <p>The collection of all active groups.</p>
     */
    inline GetGroupsResult& WithGroups(const Aws::Vector<GroupSummary>& value) { SetGroups(value); return *this;}

    /**
     * <p>The collection of all active groups.</p>
     */
    inline GetGroupsResult& WithGroups(Aws::Vector<GroupSummary>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The collection of all active groups.</p>
     */
    inline GetGroupsResult& AddGroups(const GroupSummary& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>The collection of all active groups.</p>
     */
    inline GetGroupsResult& AddGroups(GroupSummary&& value) { m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token. Not used.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GroupSummary> m_groups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
