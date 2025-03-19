/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
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
namespace ApiGatewayV2
{
namespace Model
{
  class UpdateApiMappingResult
  {
  public:
    AWS_APIGATEWAYV2_API UpdateApiMappingResult() = default;
    AWS_APIGATEWAYV2_API UpdateApiMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API UpdateApiMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    UpdateApiMappingResult& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API mapping identifier.</p>
     */
    inline const Aws::String& GetApiMappingId() const { return m_apiMappingId; }
    template<typename ApiMappingIdT = Aws::String>
    void SetApiMappingId(ApiMappingIdT&& value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId = std::forward<ApiMappingIdT>(value); }
    template<typename ApiMappingIdT = Aws::String>
    UpdateApiMappingResult& WithApiMappingId(ApiMappingIdT&& value) { SetApiMappingId(std::forward<ApiMappingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API mapping key.</p>
     */
    inline const Aws::String& GetApiMappingKey() const { return m_apiMappingKey; }
    template<typename ApiMappingKeyT = Aws::String>
    void SetApiMappingKey(ApiMappingKeyT&& value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey = std::forward<ApiMappingKeyT>(value); }
    template<typename ApiMappingKeyT = Aws::String>
    UpdateApiMappingResult& WithApiMappingKey(ApiMappingKeyT&& value) { SetApiMappingKey(std::forward<ApiMappingKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API stage.</p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    UpdateApiMappingResult& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateApiMappingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_apiMappingId;
    bool m_apiMappingIdHasBeenSet = false;

    Aws::String m_apiMappingKey;
    bool m_apiMappingKeyHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
