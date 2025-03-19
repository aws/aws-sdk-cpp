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
    AWS_CONNECT_API DescribeUserHierarchyStructureResult() = default;
    AWS_CONNECT_API DescribeUserHierarchyStructureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeUserHierarchyStructureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the hierarchy structure.</p>
     */
    inline const HierarchyStructure& GetHierarchyStructure() const { return m_hierarchyStructure; }
    template<typename HierarchyStructureT = HierarchyStructure>
    void SetHierarchyStructure(HierarchyStructureT&& value) { m_hierarchyStructureHasBeenSet = true; m_hierarchyStructure = std::forward<HierarchyStructureT>(value); }
    template<typename HierarchyStructureT = HierarchyStructure>
    DescribeUserHierarchyStructureResult& WithHierarchyStructure(HierarchyStructureT&& value) { SetHierarchyStructure(std::forward<HierarchyStructureT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUserHierarchyStructureResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HierarchyStructure m_hierarchyStructure;
    bool m_hierarchyStructureHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
