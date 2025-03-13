/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ActionFailurePolicy.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The action to archive the email by delivering the email to an Amazon SES
   * archive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ArchiveAction">AWS
   * API Reference</a></p>
   */
  class ArchiveAction
  {
  public:
    AWS_MAILMANAGER_API ArchiveAction() = default;
    AWS_MAILMANAGER_API ArchiveAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ArchiveAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, the specified archive has been
     * deleted.</p>
     */
    inline ActionFailurePolicy GetActionFailurePolicy() const { return m_actionFailurePolicy; }
    inline bool ActionFailurePolicyHasBeenSet() const { return m_actionFailurePolicyHasBeenSet; }
    inline void SetActionFailurePolicy(ActionFailurePolicy value) { m_actionFailurePolicyHasBeenSet = true; m_actionFailurePolicy = value; }
    inline ArchiveAction& WithActionFailurePolicy(ActionFailurePolicy value) { SetActionFailurePolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the archive to send the email to.</p>
     */
    inline const Aws::String& GetTargetArchive() const { return m_targetArchive; }
    inline bool TargetArchiveHasBeenSet() const { return m_targetArchiveHasBeenSet; }
    template<typename TargetArchiveT = Aws::String>
    void SetTargetArchive(TargetArchiveT&& value) { m_targetArchiveHasBeenSet = true; m_targetArchive = std::forward<TargetArchiveT>(value); }
    template<typename TargetArchiveT = Aws::String>
    ArchiveAction& WithTargetArchive(TargetArchiveT&& value) { SetTargetArchive(std::forward<TargetArchiveT>(value)); return *this;}
    ///@}
  private:

    ActionFailurePolicy m_actionFailurePolicy{ActionFailurePolicy::NOT_SET};
    bool m_actionFailurePolicyHasBeenSet = false;

    Aws::String m_targetArchive;
    bool m_targetArchiveHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
