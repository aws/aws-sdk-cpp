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
    AWS_EC2_API RestoreManagedPrefixListVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreManagedPrefixListVersion"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline RestoreManagedPrefixListVersionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline RestoreManagedPrefixListVersionRequest& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline RestoreManagedPrefixListVersionRequest& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline RestoreManagedPrefixListVersionRequest& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}


    /**
     * <p>The version to restore.</p>
     */
    inline long long GetPreviousVersion() const{ return m_previousVersion; }

    /**
     * <p>The version to restore.</p>
     */
    inline bool PreviousVersionHasBeenSet() const { return m_previousVersionHasBeenSet; }

    /**
     * <p>The version to restore.</p>
     */
    inline void SetPreviousVersion(long long value) { m_previousVersionHasBeenSet = true; m_previousVersion = value; }

    /**
     * <p>The version to restore.</p>
     */
    inline RestoreManagedPrefixListVersionRequest& WithPreviousVersion(long long value) { SetPreviousVersion(value); return *this;}


    /**
     * <p>The current version number for the prefix list.</p>
     */
    inline long long GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The current version number for the prefix list.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The current version number for the prefix list.</p>
     */
    inline void SetCurrentVersion(long long value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The current version number for the prefix list.</p>
     */
    inline RestoreManagedPrefixListVersionRequest& WithCurrentVersion(long long value) { SetCurrentVersion(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    long long m_previousVersion;
    bool m_previousVersionHasBeenSet = false;

    long long m_currentVersion;
    bool m_currentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
