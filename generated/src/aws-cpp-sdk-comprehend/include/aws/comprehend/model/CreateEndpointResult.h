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
  class CreateEndpointResult
  {
  public:
    AWS_COMPREHEND_API CreateEndpointResult() = default;
    AWS_COMPREHEND_API CreateEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API CreateEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint being created.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    CreateEndpointResult& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    CreateEndpointResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
