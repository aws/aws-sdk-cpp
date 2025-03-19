/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecycleExecutionState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/LifecycleExecutionResource.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListLifecycleExecutionResourcesResult
  {
  public:
    AWS_IMAGEBUILDER_API ListLifecycleExecutionResourcesResult() = default;
    AWS_IMAGEBUILDER_API ListLifecycleExecutionResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListLifecycleExecutionResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const { return m_lifecycleExecutionId; }
    template<typename LifecycleExecutionIdT = Aws::String>
    void SetLifecycleExecutionId(LifecycleExecutionIdT&& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = std::forward<LifecycleExecutionIdT>(value); }
    template<typename LifecycleExecutionIdT = Aws::String>
    ListLifecycleExecutionResourcesResult& WithLifecycleExecutionId(LifecycleExecutionIdT&& value) { SetLifecycleExecutionId(std::forward<LifecycleExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the lifecycle runtime instance.</p>
     */
    inline const LifecycleExecutionState& GetLifecycleExecutionState() const { return m_lifecycleExecutionState; }
    template<typename LifecycleExecutionStateT = LifecycleExecutionState>
    void SetLifecycleExecutionState(LifecycleExecutionStateT&& value) { m_lifecycleExecutionStateHasBeenSet = true; m_lifecycleExecutionState = std::forward<LifecycleExecutionStateT>(value); }
    template<typename LifecycleExecutionStateT = LifecycleExecutionState>
    ListLifecycleExecutionResourcesResult& WithLifecycleExecutionState(LifecycleExecutionStateT&& value) { SetLifecycleExecutionState(std::forward<LifecycleExecutionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resources that were identified for lifecycle actions.</p>
     */
    inline const Aws::Vector<LifecycleExecutionResource>& GetResources() const { return m_resources; }
    template<typename ResourcesT = Aws::Vector<LifecycleExecutionResource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<LifecycleExecutionResource>>
    ListLifecycleExecutionResourcesResult& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = LifecycleExecutionResource>
    ListLifecycleExecutionResourcesResult& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLifecycleExecutionResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLifecycleExecutionResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleExecutionId;
    bool m_lifecycleExecutionIdHasBeenSet = false;

    LifecycleExecutionState m_lifecycleExecutionState;
    bool m_lifecycleExecutionStateHasBeenSet = false;

    Aws::Vector<LifecycleExecutionResource> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
