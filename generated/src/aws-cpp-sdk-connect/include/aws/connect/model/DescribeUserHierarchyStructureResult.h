/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HierarchyStructure.h>
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
  class DescribeUserHierarchyStructureResult
  {
  public:
    AWS_CONNECT_API DescribeUserHierarchyStructureResult();
    AWS_CONNECT_API DescribeUserHierarchyStructureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeUserHierarchyStructureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the hierarchy structure.</p>
     */
    inline const HierarchyStructure& GetHierarchyStructure() const{ return m_hierarchyStructure; }

    /**
     * <p>Information about the hierarchy structure.</p>
     */
    inline void SetHierarchyStructure(const HierarchyStructure& value) { m_hierarchyStructure = value; }

    /**
     * <p>Information about the hierarchy structure.</p>
     */
    inline void SetHierarchyStructure(HierarchyStructure&& value) { m_hierarchyStructure = std::move(value); }

    /**
     * <p>Information about the hierarchy structure.</p>
     */
    inline DescribeUserHierarchyStructureResult& WithHierarchyStructure(const HierarchyStructure& value) { SetHierarchyStructure(value); return *this;}

    /**
     * <p>Information about the hierarchy structure.</p>
     */
    inline DescribeUserHierarchyStructureResult& WithHierarchyStructure(HierarchyStructure&& value) { SetHierarchyStructure(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeUserHierarchyStructureResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeUserHierarchyStructureResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeUserHierarchyStructureResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    HierarchyStructure m_hierarchyStructure;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
