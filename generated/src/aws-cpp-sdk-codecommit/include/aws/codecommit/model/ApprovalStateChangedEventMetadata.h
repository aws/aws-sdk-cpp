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
   * <p>Returns information about a change in the approval state for a pull
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ApprovalStateChangedEventMetadata">AWS
   * API Reference</a></p>
   */
  class ApprovalStateChangedEventMetadata
  {
  public:
    AWS_CODECOMMIT_API ApprovalStateChangedEventMetadata() = default;
    AWS_CODECOMMIT_API ApprovalStateChangedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ApprovalStateChangedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The revision ID of the pull request when the approval state changed.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    ApprovalStateChangedEventMetadata& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status for the pull request.</p>
     */
    inline ApprovalState GetApprovalStatus() const { return m_approvalStatus; }
    inline bool ApprovalStatusHasBeenSet() const { return m_approvalStatusHasBeenSet; }
    inline void SetApprovalStatus(ApprovalState value) { m_approvalStatusHasBeenSet = true; m_approvalStatus = value; }
    inline ApprovalStateChangedEventMetadata& WithApprovalStatus(ApprovalState value) { SetApprovalStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    ApprovalState m_approvalStatus{ApprovalState::NOT_SET};
    bool m_approvalStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
