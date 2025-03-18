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
   * <p>Represents the output of an <code>UpdateDeploymentGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateDeploymentGroupOutput">AWS
   * API Reference</a></p>
   */
  class UpdateDeploymentGroupResult
  {
  public:
    AWS_CODEDEPLOY_API UpdateDeploymentGroupResult() = default;
    AWS_CODEDEPLOY_API UpdateDeploymentGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API UpdateDeploymentGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the output contains no data, and the corresponding deployment group
     * contained at least one Auto Scaling group, CodeDeploy successfully removed all
     * corresponding Auto Scaling lifecycle event hooks from the Amazon Web Services
     * account. If the output contains data, CodeDeploy could not remove some Auto
     * Scaling lifecycle event hooks from the Amazon Web Services account.</p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetHooksNotCleanedUp() const { return m_hooksNotCleanedUp; }
    template<typename HooksNotCleanedUpT = Aws::Vector<AutoScalingGroup>>
    void SetHooksNotCleanedUp(HooksNotCleanedUpT&& value) { m_hooksNotCleanedUpHasBeenSet = true; m_hooksNotCleanedUp = std::forward<HooksNotCleanedUpT>(value); }
    template<typename HooksNotCleanedUpT = Aws::Vector<AutoScalingGroup>>
    UpdateDeploymentGroupResult& WithHooksNotCleanedUp(HooksNotCleanedUpT&& value) { SetHooksNotCleanedUp(std::forward<HooksNotCleanedUpT>(value)); return *this;}
    template<typename HooksNotCleanedUpT = AutoScalingGroup>
    UpdateDeploymentGroupResult& AddHooksNotCleanedUp(HooksNotCleanedUpT&& value) { m_hooksNotCleanedUpHasBeenSet = true; m_hooksNotCleanedUp.emplace_back(std::forward<HooksNotCleanedUpT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDeploymentGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
