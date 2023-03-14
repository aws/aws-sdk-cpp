/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HierarchyGroup.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeUserHierarchyGroupResult
  {
  public:
    AWS_CONNECT_API DescribeUserHierarchyGroupResult();
    AWS_CONNECT_API DescribeUserHierarchyGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeUserHierarchyGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the hierarchy group.</p>
     */
    inline const HierarchyGroup& GetHierarchyGroup() const{ return m_hierarchyGroup; }

    /**
     * <p>Information about the hierarchy group.</p>
     */
    inline void SetHierarchyGroup(const HierarchyGroup& value) { m_hierarchyGroup = value; }

    /**
     * <p>Information about the hierarchy group.</p>
     */
    inline void SetHierarchyGroup(HierarchyGroup&& value) { m_hierarchyGroup = std::move(value); }

    /**
     * <p>Information about the hierarchy group.</p>
     */
    inline DescribeUserHierarchyGroupResult& WithHierarchyGroup(const HierarchyGroup& value) { SetHierarchyGroup(value); return *this;}

    /**
     * <p>Information about the hierarchy group.</p>
     */
    inline DescribeUserHierarchyGroupResult& WithHierarchyGroup(HierarchyGroup&& value) { SetHierarchyGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeUserHierarchyGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeUserHierarchyGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeUserHierarchyGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    HierarchyGroup m_hierarchyGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
