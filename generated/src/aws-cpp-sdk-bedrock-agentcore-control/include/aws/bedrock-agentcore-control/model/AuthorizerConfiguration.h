/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CustomJWTAuthorizerConfiguration.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Represents inbound authorization configuration options used to authenticate
   * incoming requests. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AuthorizerConfiguration">AWS
   * API Reference</a></p>
   */
  class AuthorizerConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API AuthorizerConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API AuthorizerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API AuthorizerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inbound JWT-based authorization, specifying how incoming requests should
     * be authenticated.</p>
     */
    inline const CustomJWTAuthorizerConfiguration& GetCustomJWTAuthorizer() const { return m_customJWTAuthorizer; }
    inline bool CustomJWTAuthorizerHasBeenSet() const { return m_customJWTAuthorizerHasBeenSet; }
    template<typename CustomJWTAuthorizerT = CustomJWTAuthorizerConfiguration>
    void SetCustomJWTAuthorizer(CustomJWTAuthorizerT&& value) { m_customJWTAuthorizerHasBeenSet = true; m_customJWTAuthorizer = std::forward<CustomJWTAuthorizerT>(value); }
    template<typename CustomJWTAuthorizerT = CustomJWTAuthorizerConfiguration>
    AuthorizerConfiguration& WithCustomJWTAuthorizer(CustomJWTAuthorizerT&& value) { SetCustomJWTAuthorizer(std::forward<CustomJWTAuthorizerT>(value)); return *this;}
    ///@}
  private:

    CustomJWTAuthorizerConfiguration m_customJWTAuthorizer;
    bool m_customJWTAuthorizerHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
