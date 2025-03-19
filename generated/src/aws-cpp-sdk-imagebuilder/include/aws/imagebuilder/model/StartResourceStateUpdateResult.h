/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{
  class StartResourceStateUpdateResult
  {
  public:
    AWS_IMAGEBUILDER_API StartResourceStateUpdateResult() = default;
    AWS_IMAGEBUILDER_API StartResourceStateUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API StartResourceStateUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifies the lifecycle runtime instance that started the resource state
     * update.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const { return m_lifecycleExecutionId; }
    template<typename LifecycleExecutionIdT = Aws::String>
    void SetLifecycleExecutionId(LifecycleExecutionIdT&& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = std::forward<LifecycleExecutionIdT>(value); }
    template<typename LifecycleExecutionIdT = Aws::String>
    StartResourceStateUpdateResult& WithLifecycleExecutionId(LifecycleExecutionIdT&& value) { SetLifecycleExecutionId(std::forward<LifecycleExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested ARN of the Image Builder resource for the asynchronous
     * update.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    StartResourceStateUpdateResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartResourceStateUpdateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleExecutionId;
    bool m_lifecycleExecutionIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
