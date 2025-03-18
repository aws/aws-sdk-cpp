/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/ApprovalState.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a specific approval on a pull
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Approval">AWS
   * API Reference</a></p>
   */
  class Approval
  {
  public:
    AWS_CODECOMMIT_API Approval() = default;
    AWS_CODECOMMIT_API Approval(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Approval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline const Aws::String& GetUserArn() const { return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    template<typename UserArnT = Aws::String>
    void SetUserArn(UserArnT&& value) { m_userArnHasBeenSet = true; m_userArn = std::forward<UserArnT>(value); }
    template<typename UserArnT = Aws::String>
    Approval& WithUserArn(UserArnT&& value) { SetUserArn(std::forward<UserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the approval, APPROVE or REVOKE. REVOKE states are not
     * stored.</p>
     */
    inline ApprovalState GetApprovalState() const { return m_approvalState; }
    inline bool ApprovalStateHasBeenSet() const { return m_approvalStateHasBeenSet; }
    inline void SetApprovalState(ApprovalState value) { m_approvalStateHasBeenSet = true; m_approvalState = value; }
    inline Approval& WithApprovalState(ApprovalState value) { SetApprovalState(value); return *this;}
    ///@}
  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    ApprovalState m_approvalState{ApprovalState::NOT_SET};
    bool m_approvalStateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
