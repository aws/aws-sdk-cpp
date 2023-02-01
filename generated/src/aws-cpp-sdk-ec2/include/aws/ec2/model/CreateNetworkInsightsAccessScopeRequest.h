/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AccessScopePathRequest.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateNetworkInsightsAccessScopeRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateNetworkInsightsAccessScopeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkInsightsAccessScope"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The paths to match.</p>
     */
    inline const Aws::Vector<AccessScopePathRequest>& GetMatchPaths() const{ return m_matchPaths; }

    /**
     * <p>The paths to match.</p>
     */
    inline bool MatchPathsHasBeenSet() const { return m_matchPathsHasBeenSet; }

    /**
     * <p>The paths to match.</p>
     */
    inline void SetMatchPaths(const Aws::Vector<AccessScopePathRequest>& value) { m_matchPathsHasBeenSet = true; m_matchPaths = value; }

    /**
     * <p>The paths to match.</p>
     */
    inline void SetMatchPaths(Aws::Vector<AccessScopePathRequest>&& value) { m_matchPathsHasBeenSet = true; m_matchPaths = std::move(value); }

    /**
     * <p>The paths to match.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& WithMatchPaths(const Aws::Vector<AccessScopePathRequest>& value) { SetMatchPaths(value); return *this;}

    /**
     * <p>The paths to match.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& WithMatchPaths(Aws::Vector<AccessScopePathRequest>&& value) { SetMatchPaths(std::move(value)); return *this;}

    /**
     * <p>The paths to match.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& AddMatchPaths(const AccessScopePathRequest& value) { m_matchPathsHasBeenSet = true; m_matchPaths.push_back(value); return *this; }

    /**
     * <p>The paths to match.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& AddMatchPaths(AccessScopePathRequest&& value) { m_matchPathsHasBeenSet = true; m_matchPaths.push_back(std::move(value)); return *this; }


    /**
     * <p>The paths to exclude.</p>
     */
    inline const Aws::Vector<AccessScopePathRequest>& GetExcludePaths() const{ return m_excludePaths; }

    /**
     * <p>The paths to exclude.</p>
     */
    inline bool ExcludePathsHasBeenSet() const { return m_excludePathsHasBeenSet; }

    /**
     * <p>The paths to exclude.</p>
     */
    inline void SetExcludePaths(const Aws::Vector<AccessScopePathRequest>& value) { m_excludePathsHasBeenSet = true; m_excludePaths = value; }

    /**
     * <p>The paths to exclude.</p>
     */
    inline void SetExcludePaths(Aws::Vector<AccessScopePathRequest>&& value) { m_excludePathsHasBeenSet = true; m_excludePaths = std::move(value); }

    /**
     * <p>The paths to exclude.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& WithExcludePaths(const Aws::Vector<AccessScopePathRequest>& value) { SetExcludePaths(value); return *this;}

    /**
     * <p>The paths to exclude.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& WithExcludePaths(Aws::Vector<AccessScopePathRequest>&& value) { SetExcludePaths(std::move(value)); return *this;}

    /**
     * <p>The paths to exclude.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& AddExcludePaths(const AccessScopePathRequest& value) { m_excludePathsHasBeenSet = true; m_excludePaths.push_back(value); return *this; }

    /**
     * <p>The paths to exclude.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& AddExcludePaths(AccessScopePathRequest&& value) { m_excludePathsHasBeenSet = true; m_excludePaths.push_back(std::move(value)); return *this; }


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The tags to apply.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply.</p>
     */
    inline CreateNetworkInsightsAccessScopeRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateNetworkInsightsAccessScopeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<AccessScopePathRequest> m_matchPaths;
    bool m_matchPathsHasBeenSet = false;

    Aws::Vector<AccessScopePathRequest> m_excludePaths;
    bool m_excludePathsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
