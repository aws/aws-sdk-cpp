/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
  class CreateUserHierarchyGroupResult
  {
  public:
    AWS_CONNECT_API CreateUserHierarchyGroupResult() = default;
    AWS_CONNECT_API CreateUserHierarchyGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateUserHierarchyGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline const Aws::String& GetHierarchyGroupId() const { return m_hierarchyGroupId; }
    template<typename HierarchyGroupIdT = Aws::String>
    void SetHierarchyGroupId(HierarchyGroupIdT&& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = std::forward<HierarchyGroupIdT>(value); }
    template<typename HierarchyGroupIdT = Aws::String>
    CreateUserHierarchyGroupResult& WithHierarchyGroupId(HierarchyGroupIdT&& value) { SetHierarchyGroupId(std::forward<HierarchyGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group. </p>
     */
    inline const Aws::String& GetHierarchyGroupArn() const { return m_hierarchyGroupArn; }
    template<typename HierarchyGroupArnT = Aws::String>
    void SetHierarchyGroupArn(HierarchyGroupArnT&& value) { m_hierarchyGroupArnHasBeenSet = true; m_hierarchyGroupArn = std::forward<HierarchyGroupArnT>(value); }
    template<typename HierarchyGroupArnT = Aws::String>
    CreateUserHierarchyGroupResult& WithHierarchyGroupArn(HierarchyGroupArnT&& value) { SetHierarchyGroupArn(std::forward<HierarchyGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateUserHierarchyGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hierarchyGroupId;
    bool m_hierarchyGroupIdHasBeenSet = false;

    Aws::String m_hierarchyGroupArn;
    bool m_hierarchyGroupArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
