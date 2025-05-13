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
    AWS_EC2_API CreateNetworkInsightsAccessScopeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkInsightsAccessScope"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The paths to match.</p>
     */
    inline const Aws::Vector<AccessScopePathRequest>& GetMatchPaths() const { return m_matchPaths; }
    inline bool MatchPathsHasBeenSet() const { return m_matchPathsHasBeenSet; }
    template<typename MatchPathsT = Aws::Vector<AccessScopePathRequest>>
    void SetMatchPaths(MatchPathsT&& value) { m_matchPathsHasBeenSet = true; m_matchPaths = std::forward<MatchPathsT>(value); }
    template<typename MatchPathsT = Aws::Vector<AccessScopePathRequest>>
    CreateNetworkInsightsAccessScopeRequest& WithMatchPaths(MatchPathsT&& value) { SetMatchPaths(std::forward<MatchPathsT>(value)); return *this;}
    template<typename MatchPathsT = AccessScopePathRequest>
    CreateNetworkInsightsAccessScopeRequest& AddMatchPaths(MatchPathsT&& value) { m_matchPathsHasBeenSet = true; m_matchPaths.emplace_back(std::forward<MatchPathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The paths to exclude.</p>
     */
    inline const Aws::Vector<AccessScopePathRequest>& GetExcludePaths() const { return m_excludePaths; }
    inline bool ExcludePathsHasBeenSet() const { return m_excludePathsHasBeenSet; }
    template<typename ExcludePathsT = Aws::Vector<AccessScopePathRequest>>
    void SetExcludePaths(ExcludePathsT&& value) { m_excludePathsHasBeenSet = true; m_excludePaths = std::forward<ExcludePathsT>(value); }
    template<typename ExcludePathsT = Aws::Vector<AccessScopePathRequest>>
    CreateNetworkInsightsAccessScopeRequest& WithExcludePaths(ExcludePathsT&& value) { SetExcludePaths(std::forward<ExcludePathsT>(value)); return *this;}
    template<typename ExcludePathsT = AccessScopePathRequest>
    CreateNetworkInsightsAccessScopeRequest& AddExcludePaths(ExcludePathsT&& value) { m_excludePathsHasBeenSet = true; m_excludePaths.emplace_back(std::forward<ExcludePathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateNetworkInsightsAccessScopeRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateNetworkInsightsAccessScopeRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateNetworkInsightsAccessScopeRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

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
    inline CreateNetworkInsightsAccessScopeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccessScopePathRequest> m_matchPaths;
    bool m_matchPathsHasBeenSet = false;

    Aws::Vector<AccessScopePathRequest> m_excludePaths;
    bool m_excludePathsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
