/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{
  class RegisterScalableTargetResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API RegisterScalableTargetResult() = default;
    AWS_APPLICATIONAUTOSCALING_API RegisterScalableTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API RegisterScalableTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the scalable target.</p>
     */
    inline const Aws::String& GetScalableTargetARN() const { return m_scalableTargetARN; }
    template<typename ScalableTargetARNT = Aws::String>
    void SetScalableTargetARN(ScalableTargetARNT&& value) { m_scalableTargetARNHasBeenSet = true; m_scalableTargetARN = std::forward<ScalableTargetARNT>(value); }
    template<typename ScalableTargetARNT = Aws::String>
    RegisterScalableTargetResult& WithScalableTargetARN(ScalableTargetARNT&& value) { SetScalableTargetARN(std::forward<ScalableTargetARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterScalableTargetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scalableTargetARN;
    bool m_scalableTargetARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
