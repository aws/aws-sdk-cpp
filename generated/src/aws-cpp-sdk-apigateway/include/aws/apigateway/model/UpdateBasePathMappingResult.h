/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents the base path that callers of the API must provide as part of the
   * URL after the domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/BasePathMapping">AWS
   * API Reference</a></p>
   */
  class UpdateBasePathMappingResult
  {
  public:
    AWS_APIGATEWAY_API UpdateBasePathMappingResult() = default;
    AWS_APIGATEWAY_API UpdateBasePathMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateBasePathMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline const Aws::String& GetBasePath() const { return m_basePath; }
    template<typename BasePathT = Aws::String>
    void SetBasePath(BasePathT&& value) { m_basePathHasBeenSet = true; m_basePath = std::forward<BasePathT>(value); }
    template<typename BasePathT = Aws::String>
    UpdateBasePathMappingResult& WithBasePath(BasePathT&& value) { SetBasePath(std::forward<BasePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    UpdateBasePathMappingResult& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the associated stage.</p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    UpdateBasePathMappingResult& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBasePathMappingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_basePath;
    bool m_basePathHasBeenSet = false;

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
