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
#include <aws/resource-groups/model/GroupQuery.h>
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
  class AWS_RESOURCEGROUPS_API GetGroupQueryResult
  {
  public:
    GetGroupQueryResult();
    GetGroupQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGroupQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resource query associated with the specified group.</p>
     */
    inline const GroupQuery& GetGroupQuery() const{ return m_groupQuery; }

    /**
     * <p>The resource query associated with the specified group.</p>
     */
    inline void SetGroupQuery(const GroupQuery& value) { m_groupQuery = value; }

    /**
     * <p>The resource query associated with the specified group.</p>
     */
    inline void SetGroupQuery(GroupQuery&& value) { m_groupQuery = std::move(value); }

    /**
     * <p>The resource query associated with the specified group.</p>
     */
    inline GetGroupQueryResult& WithGroupQuery(const GroupQuery& value) { SetGroupQuery(value); return *this;}

    /**
     * <p>The resource query associated with the specified group.</p>
     */
    inline GetGroupQueryResult& WithGroupQuery(GroupQuery&& value) { SetGroupQuery(std::move(value)); return *this;}

  private:

    GroupQuery m_groupQuery;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
