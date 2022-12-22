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
    AWS_CODECOMMIT_API Approval();
    AWS_CODECOMMIT_API Approval(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Approval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline Approval& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline Approval& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline Approval& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The state of the approval, APPROVE or REVOKE. REVOKE states are not
     * stored.</p>
     */
    inline const ApprovalState& GetApprovalState() const{ return m_approvalState; }

    /**
     * <p>The state of the approval, APPROVE or REVOKE. REVOKE states are not
     * stored.</p>
     */
    inline bool ApprovalStateHasBeenSet() const { return m_approvalStateHasBeenSet; }

    /**
     * <p>The state of the approval, APPROVE or REVOKE. REVOKE states are not
     * stored.</p>
     */
    inline void SetApprovalState(const ApprovalState& value) { m_approvalStateHasBeenSet = true; m_approvalState = value; }

    /**
     * <p>The state of the approval, APPROVE or REVOKE. REVOKE states are not
     * stored.</p>
     */
    inline void SetApprovalState(ApprovalState&& value) { m_approvalStateHasBeenSet = true; m_approvalState = std::move(value); }

    /**
     * <p>The state of the approval, APPROVE or REVOKE. REVOKE states are not
     * stored.</p>
     */
    inline Approval& WithApprovalState(const ApprovalState& value) { SetApprovalState(value); return *this;}

    /**
     * <p>The state of the approval, APPROVE or REVOKE. REVOKE states are not
     * stored.</p>
     */
    inline Approval& WithApprovalState(ApprovalState&& value) { SetApprovalState(std::move(value)); return *this;}

  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    ApprovalState m_approvalState;
    bool m_approvalStateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
