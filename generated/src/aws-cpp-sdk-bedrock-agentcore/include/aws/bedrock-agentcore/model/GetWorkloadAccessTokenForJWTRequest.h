/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class GetWorkloadAccessTokenForJWTRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetWorkloadAccessTokenForJWTRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkloadAccessTokenForJWT"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique identifier for the registered agent</p>
     */
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    GetWorkloadAccessTokenForJWTRequest& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>OAuth2 token issued by the user's identity provider</p>
     */
    inline const Aws::String& GetUserToken() const { return m_userToken; }
    inline bool UserTokenHasBeenSet() const { return m_userTokenHasBeenSet; }
    template<typename UserTokenT = Aws::String>
    void SetUserToken(UserTokenT&& value) { m_userTokenHasBeenSet = true; m_userToken = std::forward<UserTokenT>(value); }
    template<typename UserTokenT = Aws::String>
    GetWorkloadAccessTokenForJWTRequest& WithUserToken(UserTokenT&& value) { SetUserToken(std::forward<UserTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_userToken;
    bool m_userTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
