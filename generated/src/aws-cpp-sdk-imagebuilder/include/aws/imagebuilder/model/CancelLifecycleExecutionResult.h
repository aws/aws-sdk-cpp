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
  class CancelLifecycleExecutionResult
  {
  public:
    AWS_IMAGEBUILDER_API CancelLifecycleExecutionResult() = default;
    AWS_IMAGEBUILDER_API CancelLifecycleExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API CancelLifecycleExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the image lifecycle runtime instance that was
     * canceled.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const { return m_lifecycleExecutionId; }
    template<typename LifecycleExecutionIdT = Aws::String>
    void SetLifecycleExecutionId(LifecycleExecutionIdT&& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = std::forward<LifecycleExecutionIdT>(value); }
    template<typename LifecycleExecutionIdT = Aws::String>
    CancelLifecycleExecutionResult& WithLifecycleExecutionId(LifecycleExecutionIdT&& value) { SetLifecycleExecutionId(std::forward<LifecycleExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelLifecycleExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleExecutionId;
    bool m_lifecycleExecutionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
