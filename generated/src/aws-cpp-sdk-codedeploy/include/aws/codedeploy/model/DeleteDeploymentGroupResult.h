/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/AutoScalingGroup.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>DeleteDeploymentGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentGroupOutput">AWS
   * API Reference</a></p>
   */
  class DeleteDeploymentGroupResult
  {
  public:
    AWS_CODEDEPLOY_API DeleteDeploymentGroupResult() = default;
    AWS_CODEDEPLOY_API DeleteDeploymentGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API DeleteDeploymentGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the output contains no data, and the corresponding deployment group
     * contained at least one Auto Scaling group, CodeDeploy successfully removed all
     * corresponding Auto Scaling lifecycle event hooks from the Amazon EC2 instances
     * in the Auto Scaling group. If the output contains data, CodeDeploy could not
     * remove some Auto Scaling lifecycle event hooks from the Amazon EC2 instances in
     * the Auto Scaling group.</p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetHooksNotCleanedUp() const { return m_hooksNotCleanedUp; }
    template<typename HooksNotCleanedUpT = Aws::Vector<AutoScalingGroup>>
    void SetHooksNotCleanedUp(HooksNotCleanedUpT&& value) { m_hooksNotCleanedUpHasBeenSet = true; m_hooksNotCleanedUp = std::forward<HooksNotCleanedUpT>(value); }
    template<typename HooksNotCleanedUpT = Aws::Vector<AutoScalingGroup>>
    DeleteDeploymentGroupResult& WithHooksNotCleanedUp(HooksNotCleanedUpT&& value) { SetHooksNotCleanedUp(std::forward<HooksNotCleanedUpT>(value)); return *this;}
    template<typename HooksNotCleanedUpT = AutoScalingGroup>
    DeleteDeploymentGroupResult& AddHooksNotCleanedUp(HooksNotCleanedUpT&& value) { m_hooksNotCleanedUpHasBeenSet = true; m_hooksNotCleanedUp.emplace_back(std::forward<HooksNotCleanedUpT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteDeploymentGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutoScalingGroup> m_hooksNotCleanedUp;
    bool m_hooksNotCleanedUpHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
