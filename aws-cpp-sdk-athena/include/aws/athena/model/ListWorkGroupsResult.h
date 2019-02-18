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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/WorkGroupSummary.h>
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
namespace Athena
{
namespace Model
{
  class AWS_ATHENA_API ListWorkGroupsResult
  {
  public:
    ListWorkGroupsResult();
    ListWorkGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListWorkGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of workgroups, including their names, descriptions, creation times,
     * and states.</p>
     */
    inline const Aws::Vector<WorkGroupSummary>& GetWorkGroups() const{ return m_workGroups; }

    /**
     * <p>The list of workgroups, including their names, descriptions, creation times,
     * and states.</p>
     */
    inline void SetWorkGroups(const Aws::Vector<WorkGroupSummary>& value) { m_workGroups = value; }

    /**
     * <p>The list of workgroups, including their names, descriptions, creation times,
     * and states.</p>
     */
    inline void SetWorkGroups(Aws::Vector<WorkGroupSummary>&& value) { m_workGroups = std::move(value); }

    /**
     * <p>The list of workgroups, including their names, descriptions, creation times,
     * and states.</p>
     */
    inline ListWorkGroupsResult& WithWorkGroups(const Aws::Vector<WorkGroupSummary>& value) { SetWorkGroups(value); return *this;}

    /**
     * <p>The list of workgroups, including their names, descriptions, creation times,
     * and states.</p>
     */
    inline ListWorkGroupsResult& WithWorkGroups(Aws::Vector<WorkGroupSummary>&& value) { SetWorkGroups(std::move(value)); return *this;}

    /**
     * <p>The list of workgroups, including their names, descriptions, creation times,
     * and states.</p>
     */
    inline ListWorkGroupsResult& AddWorkGroups(const WorkGroupSummary& value) { m_workGroups.push_back(value); return *this; }

    /**
     * <p>The list of workgroups, including their names, descriptions, creation times,
     * and states.</p>
     */
    inline ListWorkGroupsResult& AddWorkGroups(WorkGroupSummary&& value) { m_workGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline ListWorkGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline ListWorkGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline ListWorkGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WorkGroupSummary> m_workGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
