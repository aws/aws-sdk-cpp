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
  class GetWorkloadAccessTokenRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetWorkloadAccessTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkloadAccessToken"; }

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
    GetWorkloadAccessTokenRequest& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
