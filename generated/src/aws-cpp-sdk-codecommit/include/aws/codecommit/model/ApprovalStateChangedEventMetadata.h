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
    AWS_CODECOMMIT_API ApprovalStateChangedEventMetadata();
    AWS_CODECOMMIT_API ApprovalStateChangedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ApprovalStateChangedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The revision ID of the pull request when the approval state changed.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }
    inline ApprovalStateChangedEventMetadata& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline ApprovalStateChangedEventMetadata& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline ApprovalStateChangedEventMetadata& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status for the pull request.</p>
     */
    inline const ApprovalState& GetApprovalStatus() const{ return m_approvalStatus; }
    inline bool ApprovalStatusHasBeenSet() const { return m_approvalStatusHasBeenSet; }
    inline void SetApprovalStatus(const ApprovalState& value) { m_approvalStatusHasBeenSet = true; m_approvalStatus = value; }
    inline void SetApprovalStatus(ApprovalState&& value) { m_approvalStatusHasBeenSet = true; m_approvalStatus = std::move(value); }
    inline ApprovalStateChangedEventMetadata& WithApprovalStatus(const ApprovalState& value) { SetApprovalStatus(value); return *this;}
    inline ApprovalStateChangedEventMetadata& WithApprovalStatus(ApprovalState&& value) { SetApprovalStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    ApprovalState m_approvalStatus;
    bool m_approvalStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
