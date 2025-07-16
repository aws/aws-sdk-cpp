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
  class GetWorkloadAccessTokenForUserIdRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetWorkloadAccessTokenForUserIdRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkloadAccessTokenForUserId"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the worklaod you want to get the access token of.</p>
     */
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    GetWorkloadAccessTokenForUserIdRequest& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user id of the user you are retrieving the access token for.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    GetWorkloadAccessTokenForUserIdRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
