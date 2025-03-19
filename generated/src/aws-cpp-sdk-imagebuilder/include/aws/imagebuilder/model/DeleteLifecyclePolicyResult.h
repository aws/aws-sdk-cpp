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
  class DeleteLifecyclePolicyResult
  {
  public:
    AWS_IMAGEBUILDER_API DeleteLifecyclePolicyResult() = default;
    AWS_IMAGEBUILDER_API DeleteLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API DeleteLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the lifecycle policy that was deleted.</p>
     */
    inline const Aws::String& GetLifecyclePolicyArn() const { return m_lifecyclePolicyArn; }
    template<typename LifecyclePolicyArnT = Aws::String>
    void SetLifecyclePolicyArn(LifecyclePolicyArnT&& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = std::forward<LifecyclePolicyArnT>(value); }
    template<typename LifecyclePolicyArnT = Aws::String>
    DeleteLifecyclePolicyResult& WithLifecyclePolicyArn(LifecyclePolicyArnT&& value) { SetLifecyclePolicyArn(std::forward<LifecyclePolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteLifecyclePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecyclePolicyArn;
    bool m_lifecyclePolicyArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
