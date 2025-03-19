/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ECS
{
namespace Model
{
  class ListContainerInstancesResult
  {
  public:
    AWS_ECS_API ListContainerInstancesResult() = default;
    AWS_ECS_API ListContainerInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListContainerInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of container instances with full ARN entries for each container
     * instance associated with the specified cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerInstanceArns() const { return m_containerInstanceArns; }
    template<typename ContainerInstanceArnsT = Aws::Vector<Aws::String>>
    void SetContainerInstanceArns(ContainerInstanceArnsT&& value) { m_containerInstanceArnsHasBeenSet = true; m_containerInstanceArns = std::forward<ContainerInstanceArnsT>(value); }
    template<typename ContainerInstanceArnsT = Aws::Vector<Aws::String>>
    ListContainerInstancesResult& WithContainerInstanceArns(ContainerInstanceArnsT&& value) { SetContainerInstanceArns(std::forward<ContainerInstanceArnsT>(value)); return *this;}
    template<typename ContainerInstanceArnsT = Aws::String>
    ListContainerInstancesResult& AddContainerInstanceArns(ContainerInstanceArnsT&& value) { m_containerInstanceArnsHasBeenSet = true; m_containerInstanceArns.emplace_back(std::forward<ContainerInstanceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListContainerInstances</code> request. When the results of a
     * <code>ListContainerInstances</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContainerInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContainerInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_containerInstanceArns;
    bool m_containerInstanceArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
