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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents an API mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ApiMapping">AWS
   * API Reference</a></p>
   */
  class ApiMapping
  {
  public:
    AWS_APIGATEWAYV2_API ApiMapping() = default;
    AWS_APIGATEWAYV2_API ApiMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API ApiMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    ApiMapping& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API mapping identifier.</p>
     */
    inline const Aws::String& GetApiMappingId() const { return m_apiMappingId; }
    inline bool ApiMappingIdHasBeenSet() const { return m_apiMappingIdHasBeenSet; }
    template<typename ApiMappingIdT = Aws::String>
    void SetApiMappingId(ApiMappingIdT&& value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId = std::forward<ApiMappingIdT>(value); }
    template<typename ApiMappingIdT = Aws::String>
    ApiMapping& WithApiMappingId(ApiMappingIdT&& value) { SetApiMappingId(std::forward<ApiMappingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API mapping key.</p>
     */
    inline const Aws::String& GetApiMappingKey() const { return m_apiMappingKey; }
    inline bool ApiMappingKeyHasBeenSet() const { return m_apiMappingKeyHasBeenSet; }
    template<typename ApiMappingKeyT = Aws::String>
    void SetApiMappingKey(ApiMappingKeyT&& value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey = std::forward<ApiMappingKeyT>(value); }
    template<typename ApiMappingKeyT = Aws::String>
    ApiMapping& WithApiMappingKey(ApiMappingKeyT&& value) { SetApiMappingKey(std::forward<ApiMappingKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API stage.</p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    ApiMapping& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
