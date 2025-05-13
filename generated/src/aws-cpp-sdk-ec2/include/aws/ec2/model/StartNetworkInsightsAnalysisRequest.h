/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class StartNetworkInsightsAnalysisRequest : public EC2Request
  {
  public:
    AWS_EC2_API StartNetworkInsightsAnalysisRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartNetworkInsightsAnalysis"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathId() const { return m_networkInsightsPathId; }
    inline bool NetworkInsightsPathIdHasBeenSet() const { return m_networkInsightsPathIdHasBeenSet; }
    template<typename NetworkInsightsPathIdT = Aws::String>
    void SetNetworkInsightsPathId(NetworkInsightsPathIdT&& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = std::forward<NetworkInsightsPathIdT>(value); }
    template<typename NetworkInsightsPathIdT = Aws::String>
    StartNetworkInsightsAnalysisRequest& WithNetworkInsightsPathId(NetworkInsightsPathIdT&& value) { SetNetworkInsightsPathId(std::forward<NetworkInsightsPathIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalAccounts() const { return m_additionalAccounts; }
    inline bool AdditionalAccountsHasBeenSet() const { return m_additionalAccountsHasBeenSet; }
    template<typename AdditionalAccountsT = Aws::Vector<Aws::String>>
    void SetAdditionalAccounts(AdditionalAccountsT&& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts = std::forward<AdditionalAccountsT>(value); }
    template<typename AdditionalAccountsT = Aws::Vector<Aws::String>>
    StartNetworkInsightsAnalysisRequest& WithAdditionalAccounts(AdditionalAccountsT&& value) { SetAdditionalAccounts(std::forward<AdditionalAccountsT>(value)); return *this;}
    template<typename AdditionalAccountsT = Aws::String>
    StartNetworkInsightsAnalysisRequest& AddAdditionalAccounts(AdditionalAccountsT&& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts.emplace_back(std::forward<AdditionalAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the resources that the path must
     * traverse.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterInArns() const { return m_filterInArns; }
    inline bool FilterInArnsHasBeenSet() const { return m_filterInArnsHasBeenSet; }
    template<typename FilterInArnsT = Aws::Vector<Aws::String>>
    void SetFilterInArns(FilterInArnsT&& value) { m_filterInArnsHasBeenSet = true; m_filterInArns = std::forward<FilterInArnsT>(value); }
    template<typename FilterInArnsT = Aws::Vector<Aws::String>>
    StartNetworkInsightsAnalysisRequest& WithFilterInArns(FilterInArnsT&& value) { SetFilterInArns(std::forward<FilterInArnsT>(value)); return *this;}
    template<typename FilterInArnsT = Aws::String>
    StartNetworkInsightsAnalysisRequest& AddFilterInArns(FilterInArnsT&& value) { m_filterInArnsHasBeenSet = true; m_filterInArns.emplace_back(std::forward<FilterInArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the resources that the path will
     * ignore.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterOutArns() const { return m_filterOutArns; }
    inline bool FilterOutArnsHasBeenSet() const { return m_filterOutArnsHasBeenSet; }
    template<typename FilterOutArnsT = Aws::Vector<Aws::String>>
    void SetFilterOutArns(FilterOutArnsT&& value) { m_filterOutArnsHasBeenSet = true; m_filterOutArns = std::forward<FilterOutArnsT>(value); }
    template<typename FilterOutArnsT = Aws::Vector<Aws::String>>
    StartNetworkInsightsAnalysisRequest& WithFilterOutArns(FilterOutArnsT&& value) { SetFilterOutArns(std::forward<FilterOutArnsT>(value)); return *this;}
    template<typename FilterOutArnsT = Aws::String>
    StartNetworkInsightsAnalysisRequest& AddFilterOutArns(FilterOutArnsT&& value) { m_filterOutArnsHasBeenSet = true; m_filterOutArns.emplace_back(std::forward<FilterOutArnsT>(value)); return *this; }
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
    inline StartNetworkInsightsAnalysisRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
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
    StartNetworkInsightsAnalysisRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    StartNetworkInsightsAnalysisRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
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
    StartNetworkInsightsAnalysisRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkInsightsPathId;
    bool m_networkInsightsPathIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalAccounts;
    bool m_additionalAccountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterInArns;
    bool m_filterInArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterOutArns;
    bool m_filterOutArnsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
