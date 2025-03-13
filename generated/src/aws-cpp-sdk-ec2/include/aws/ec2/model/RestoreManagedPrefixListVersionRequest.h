/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class RestoreManagedPrefixListVersionRequest : public EC2Request
  {
  public:
    AWS_EC2_API RestoreManagedPrefixListVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreManagedPrefixListVersion"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline RestoreManagedPrefixListVersionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const { return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    template<typename PrefixListIdT = Aws::String>
    void SetPrefixListId(PrefixListIdT&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::forward<PrefixListIdT>(value); }
    template<typename PrefixListIdT = Aws::String>
    RestoreManagedPrefixListVersionRequest& WithPrefixListId(PrefixListIdT&& value) { SetPrefixListId(std::forward<PrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version to restore.</p>
     */
    inline long long GetPreviousVersion() const { return m_previousVersion; }
    inline bool PreviousVersionHasBeenSet() const { return m_previousVersionHasBeenSet; }
    inline void SetPreviousVersion(long long value) { m_previousVersionHasBeenSet = true; m_previousVersion = value; }
    inline RestoreManagedPrefixListVersionRequest& WithPreviousVersion(long long value) { SetPreviousVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version number for the prefix list.</p>
     */
    inline long long GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(long long value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline RestoreManagedPrefixListVersionRequest& WithCurrentVersion(long long value) { SetCurrentVersion(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    long long m_previousVersion{0};
    bool m_previousVersionHasBeenSet = false;

    long long m_currentVersion{0};
    bool m_currentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
