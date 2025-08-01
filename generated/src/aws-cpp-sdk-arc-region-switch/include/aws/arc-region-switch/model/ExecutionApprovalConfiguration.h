/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Configuration for approval steps in a Region switch plan execution. Approval
   * steps require manual intervention before the execution can
   * proceed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ExecutionApprovalConfiguration">AWS
   * API Reference</a></p>
   */
  class ExecutionApprovalConfiguration
  {
  public:
    AWS_ARCREGIONSWITCH_API ExecutionApprovalConfiguration() = default;
    AWS_ARCREGIONSWITCH_API ExecutionApprovalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API ExecutionApprovalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timeout value specified for the configuration.</p>
     */
    inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }
    inline ExecutionApprovalConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM approval role for the configuration.</p>
     */
    inline const Aws::String& GetApprovalRole() const { return m_approvalRole; }
    inline bool ApprovalRoleHasBeenSet() const { return m_approvalRoleHasBeenSet; }
    template<typename ApprovalRoleT = Aws::String>
    void SetApprovalRole(ApprovalRoleT&& value) { m_approvalRoleHasBeenSet = true; m_approvalRole = std::forward<ApprovalRoleT>(value); }
    template<typename ApprovalRoleT = Aws::String>
    ExecutionApprovalConfiguration& WithApprovalRole(ApprovalRoleT&& value) { SetApprovalRole(std::forward<ApprovalRoleT>(value)); return *this;}
    ///@}
  private:

    int m_timeoutMinutes{0};
    bool m_timeoutMinutesHasBeenSet = false;

    Aws::String m_approvalRole;
    bool m_approvalRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
