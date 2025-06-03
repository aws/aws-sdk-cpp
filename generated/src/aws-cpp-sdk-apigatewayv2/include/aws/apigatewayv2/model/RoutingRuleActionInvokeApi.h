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
   * <p>Represents an InvokeApi action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/RoutingRuleActionInvokeApi">AWS
   * API Reference</a></p>
   */
  class RoutingRuleActionInvokeApi
  {
  public:
    AWS_APIGATEWAYV2_API RoutingRuleActionInvokeApi() = default;
    AWS_APIGATEWAYV2_API RoutingRuleActionInvokeApi(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API RoutingRuleActionInvokeApi& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    RoutingRuleActionInvokeApi& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    RoutingRuleActionInvokeApi& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strip base path setting.</p>
     */
    inline bool GetStripBasePath() const { return m_stripBasePath; }
    inline bool StripBasePathHasBeenSet() const { return m_stripBasePathHasBeenSet; }
    inline void SetStripBasePath(bool value) { m_stripBasePathHasBeenSet = true; m_stripBasePath = value; }
    inline RoutingRuleActionInvokeApi& WithStripBasePath(bool value) { SetStripBasePath(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;

    bool m_stripBasePath{false};
    bool m_stripBasePathHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
