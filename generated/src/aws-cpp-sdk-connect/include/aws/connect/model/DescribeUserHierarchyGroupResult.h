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
    AWS_CONNECT_API DescribeUserHierarchyGroupResult() = default;
    AWS_CONNECT_API DescribeUserHierarchyGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeUserHierarchyGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the hierarchy group.</p>
     */
    inline const HierarchyGroup& GetHierarchyGroup() const { return m_hierarchyGroup; }
    template<typename HierarchyGroupT = HierarchyGroup>
    void SetHierarchyGroup(HierarchyGroupT&& value) { m_hierarchyGroupHasBeenSet = true; m_hierarchyGroup = std::forward<HierarchyGroupT>(value); }
    template<typename HierarchyGroupT = HierarchyGroup>
    DescribeUserHierarchyGroupResult& WithHierarchyGroup(HierarchyGroupT&& value) { SetHierarchyGroup(std::forward<HierarchyGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUserHierarchyGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HierarchyGroup m_hierarchyGroup;
    bool m_hierarchyGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
