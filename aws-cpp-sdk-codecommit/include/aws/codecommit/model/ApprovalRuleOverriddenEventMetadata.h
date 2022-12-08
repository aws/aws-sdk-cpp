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
    AWS_CODECOMMIT_API ApprovalRuleOverriddenEventMetadata();
    AWS_CODECOMMIT_API ApprovalRuleOverriddenEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ApprovalRuleOverriddenEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The revision ID of the pull request when the override event occurred.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision ID of the pull request when the override event occurred.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The revision ID of the pull request when the override event occurred.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The revision ID of the pull request when the override event occurred.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The revision ID of the pull request when the override event occurred.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The revision ID of the pull request when the override event occurred.</p>
     */
    inline ApprovalRuleOverriddenEventMetadata& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision ID of the pull request when the override event occurred.</p>
     */
    inline ApprovalRuleOverriddenEventMetadata& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID of the pull request when the override event occurred.</p>
     */
    inline ApprovalRuleOverriddenEventMetadata& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The status of the override event.</p>
     */
    inline const OverrideStatus& GetOverrideStatus() const{ return m_overrideStatus; }

    /**
     * <p>The status of the override event.</p>
     */
    inline bool OverrideStatusHasBeenSet() const { return m_overrideStatusHasBeenSet; }

    /**
     * <p>The status of the override event.</p>
     */
    inline void SetOverrideStatus(const OverrideStatus& value) { m_overrideStatusHasBeenSet = true; m_overrideStatus = value; }

    /**
     * <p>The status of the override event.</p>
     */
    inline void SetOverrideStatus(OverrideStatus&& value) { m_overrideStatusHasBeenSet = true; m_overrideStatus = std::move(value); }

    /**
     * <p>The status of the override event.</p>
     */
    inline ApprovalRuleOverriddenEventMetadata& WithOverrideStatus(const OverrideStatus& value) { SetOverrideStatus(value); return *this;}

    /**
     * <p>The status of the override event.</p>
     */
    inline ApprovalRuleOverriddenEventMetadata& WithOverrideStatus(OverrideStatus&& value) { SetOverrideStatus(std::move(value)); return *this;}

  private:

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    OverrideStatus m_overrideStatus;
    bool m_overrideStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
