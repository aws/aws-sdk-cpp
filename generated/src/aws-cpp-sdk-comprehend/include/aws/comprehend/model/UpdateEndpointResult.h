/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{
  class UpdateEndpointResult
  {
  public:
    AWS_COMPREHEND_API UpdateEndpointResult() = default;
    AWS_COMPREHEND_API UpdateEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API UpdateEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the new model.</p>
     */
    inline const Aws::String& GetDesiredModelArn() const { return m_desiredModelArn; }
    template<typename DesiredModelArnT = Aws::String>
    void SetDesiredModelArn(DesiredModelArnT&& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = std::forward<DesiredModelArnT>(value); }
    template<typename DesiredModelArnT = Aws::String>
    UpdateEndpointResult& WithDesiredModelArn(DesiredModelArnT&& value) { SetDesiredModelArn(std::forward<DesiredModelArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_desiredModelArn;
    bool m_desiredModelArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
