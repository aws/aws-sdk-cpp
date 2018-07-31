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
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HierarchyGroup.h>
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
namespace Connect
{
namespace Model
{
  class AWS_CONNECT_API DescribeUserHierarchyGroupResult
  {
  public:
    DescribeUserHierarchyGroupResult();
    DescribeUserHierarchyGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUserHierarchyGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a <code>HierarchyGroup</code> object.</p>
     */
    inline const HierarchyGroup& GetHierarchyGroup() const{ return m_hierarchyGroup; }

    /**
     * <p>Returns a <code>HierarchyGroup</code> object.</p>
     */
    inline void SetHierarchyGroup(const HierarchyGroup& value) { m_hierarchyGroup = value; }

    /**
     * <p>Returns a <code>HierarchyGroup</code> object.</p>
     */
    inline void SetHierarchyGroup(HierarchyGroup&& value) { m_hierarchyGroup = std::move(value); }

    /**
     * <p>Returns a <code>HierarchyGroup</code> object.</p>
     */
    inline DescribeUserHierarchyGroupResult& WithHierarchyGroup(const HierarchyGroup& value) { SetHierarchyGroup(value); return *this;}

    /**
     * <p>Returns a <code>HierarchyGroup</code> object.</p>
     */
    inline DescribeUserHierarchyGroupResult& WithHierarchyGroup(HierarchyGroup&& value) { SetHierarchyGroup(std::move(value)); return *this;}

  private:

    HierarchyGroup m_hierarchyGroup;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
