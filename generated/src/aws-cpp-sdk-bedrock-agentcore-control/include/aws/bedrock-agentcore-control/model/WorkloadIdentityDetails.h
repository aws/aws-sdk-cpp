/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>The information about the workload identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/WorkloadIdentityDetails">AWS
   * API Reference</a></p>
   */
  class WorkloadIdentityDetails
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API WorkloadIdentityDetails() = default;
    AWS_BEDROCKAGENTCORECONTROL_API WorkloadIdentityDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API WorkloadIdentityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN associated with the workload identity.</p>
     */
    inline const Aws::String& GetWorkloadIdentityArn() const { return m_workloadIdentityArn; }
    inline bool WorkloadIdentityArnHasBeenSet() const { return m_workloadIdentityArnHasBeenSet; }
    template<typename WorkloadIdentityArnT = Aws::String>
    void SetWorkloadIdentityArn(WorkloadIdentityArnT&& value) { m_workloadIdentityArnHasBeenSet = true; m_workloadIdentityArn = std::forward<WorkloadIdentityArnT>(value); }
    template<typename WorkloadIdentityArnT = Aws::String>
    WorkloadIdentityDetails& WithWorkloadIdentityArn(WorkloadIdentityArnT&& value) { SetWorkloadIdentityArn(std::forward<WorkloadIdentityArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadIdentityArn;
    bool m_workloadIdentityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
