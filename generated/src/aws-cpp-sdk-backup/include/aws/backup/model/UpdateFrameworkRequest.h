/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/FrameworkControl.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class UpdateFrameworkRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API UpdateFrameworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFramework"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetFrameworkName() const { return m_frameworkName; }
    inline bool FrameworkNameHasBeenSet() const { return m_frameworkNameHasBeenSet; }
    template<typename FrameworkNameT = Aws::String>
    void SetFrameworkName(FrameworkNameT&& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = std::forward<FrameworkNameT>(value); }
    template<typename FrameworkNameT = Aws::String>
    UpdateFrameworkRequest& WithFrameworkName(FrameworkNameT&& value) { SetFrameworkName(std::forward<FrameworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the framework with a maximum 1,024 characters.</p>
     */
    inline const Aws::String& GetFrameworkDescription() const { return m_frameworkDescription; }
    inline bool FrameworkDescriptionHasBeenSet() const { return m_frameworkDescriptionHasBeenSet; }
    template<typename FrameworkDescriptionT = Aws::String>
    void SetFrameworkDescription(FrameworkDescriptionT&& value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription = std::forward<FrameworkDescriptionT>(value); }
    template<typename FrameworkDescriptionT = Aws::String>
    UpdateFrameworkRequest& WithFrameworkDescription(FrameworkDescriptionT&& value) { SetFrameworkDescription(std::forward<FrameworkDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The controls that make up the framework. Each control in the list has a name,
     * input parameters, and scope.</p>
     */
    inline const Aws::Vector<FrameworkControl>& GetFrameworkControls() const { return m_frameworkControls; }
    inline bool FrameworkControlsHasBeenSet() const { return m_frameworkControlsHasBeenSet; }
    template<typename FrameworkControlsT = Aws::Vector<FrameworkControl>>
    void SetFrameworkControls(FrameworkControlsT&& value) { m_frameworkControlsHasBeenSet = true; m_frameworkControls = std::forward<FrameworkControlsT>(value); }
    template<typename FrameworkControlsT = Aws::Vector<FrameworkControl>>
    UpdateFrameworkRequest& WithFrameworkControls(FrameworkControlsT&& value) { SetFrameworkControls(std::forward<FrameworkControlsT>(value)); return *this;}
    template<typename FrameworkControlsT = FrameworkControl>
    UpdateFrameworkRequest& AddFrameworkControls(FrameworkControlsT&& value) { m_frameworkControlsHasBeenSet = true; m_frameworkControls.emplace_back(std::forward<FrameworkControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>UpdateFrameworkInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    UpdateFrameworkRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_frameworkName;
    bool m_frameworkNameHasBeenSet = false;

    Aws::String m_frameworkDescription;
    bool m_frameworkDescriptionHasBeenSet = false;

    Aws::Vector<FrameworkControl> m_frameworkControls;
    bool m_frameworkControlsHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
