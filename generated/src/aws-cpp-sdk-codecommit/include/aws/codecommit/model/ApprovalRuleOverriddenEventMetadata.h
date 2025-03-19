/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/OverrideStatus.h>
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
   * <p>Returns information about an override event for approval rules for a pull
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ApprovalRuleOverriddenEventMetadata">AWS
   * API Reference</a></p>
   */
  class ApprovalRuleOverriddenEventMetadata
  {
  public:
    AWS_CODECOMMIT_API ApprovalRuleOverriddenEventMetadata() = default;
    AWS_CODECOMMIT_API ApprovalRuleOverriddenEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ApprovalRuleOverriddenEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The revision ID of the pull request when the override event occurred.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    ApprovalRuleOverriddenEventMetadata& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the override event.</p>
     */
    inline OverrideStatus GetOverrideStatus() const { return m_overrideStatus; }
    inline bool OverrideStatusHasBeenSet() const { return m_overrideStatusHasBeenSet; }
    inline void SetOverrideStatus(OverrideStatus value) { m_overrideStatusHasBeenSet = true; m_overrideStatus = value; }
    inline ApprovalRuleOverriddenEventMetadata& WithOverrideStatus(OverrideStatus value) { SetOverrideStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    OverrideStatus m_overrideStatus{OverrideStatus::NOT_SET};
    bool m_overrideStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
