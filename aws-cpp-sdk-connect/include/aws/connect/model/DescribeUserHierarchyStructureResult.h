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
#include <aws/connect/model/HierarchyStructure.h>
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
  class AWS_CONNECT_API DescribeUserHierarchyStructureResult
  {
  public:
    DescribeUserHierarchyStructureResult();
    DescribeUserHierarchyStructureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUserHierarchyStructureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>HierarchyStructure</code> object.</p>
     */
    inline const HierarchyStructure& GetHierarchyStructure() const{ return m_hierarchyStructure; }

    /**
     * <p>A <code>HierarchyStructure</code> object.</p>
     */
    inline void SetHierarchyStructure(const HierarchyStructure& value) { m_hierarchyStructure = value; }

    /**
     * <p>A <code>HierarchyStructure</code> object.</p>
     */
    inline void SetHierarchyStructure(HierarchyStructure&& value) { m_hierarchyStructure = std::move(value); }

    /**
     * <p>A <code>HierarchyStructure</code> object.</p>
     */
    inline DescribeUserHierarchyStructureResult& WithHierarchyStructure(const HierarchyStructure& value) { SetHierarchyStructure(value); return *this;}

    /**
     * <p>A <code>HierarchyStructure</code> object.</p>
     */
    inline DescribeUserHierarchyStructureResult& WithHierarchyStructure(HierarchyStructure&& value) { SetHierarchyStructure(std::move(value)); return *this;}

  private:

    HierarchyStructure m_hierarchyStructure;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
