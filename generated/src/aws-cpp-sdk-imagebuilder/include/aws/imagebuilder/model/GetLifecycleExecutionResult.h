/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecycleExecution.h>
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
  class GetLifecycleExecutionResult
  {
  public:
    AWS_IMAGEBUILDER_API GetLifecycleExecutionResult() = default;
    AWS_IMAGEBUILDER_API GetLifecycleExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetLifecycleExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline const LifecycleExecution& GetLifecycleExecution() const { return m_lifecycleExecution; }
    template<typename LifecycleExecutionT = LifecycleExecution>
    void SetLifecycleExecution(LifecycleExecutionT&& value) { m_lifecycleExecutionHasBeenSet = true; m_lifecycleExecution = std::forward<LifecycleExecutionT>(value); }
    template<typename LifecycleExecutionT = LifecycleExecution>
    GetLifecycleExecutionResult& WithLifecycleExecution(LifecycleExecutionT&& value) { SetLifecycleExecution(std::forward<LifecycleExecutionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLifecycleExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LifecycleExecution m_lifecycleExecution;
    bool m_lifecycleExecutionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
