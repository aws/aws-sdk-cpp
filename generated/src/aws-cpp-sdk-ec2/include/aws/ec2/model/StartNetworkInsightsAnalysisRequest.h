﻿/**
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
    AWS_EC2_API StartNetworkInsightsAnalysisRequest();

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
    inline const Aws::String& GetNetworkInsightsPathId() const{ return m_networkInsightsPathId; }
    inline bool NetworkInsightsPathIdHasBeenSet() const { return m_networkInsightsPathIdHasBeenSet; }
    inline void SetNetworkInsightsPathId(const Aws::String& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = value; }
    inline void SetNetworkInsightsPathId(Aws::String&& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = std::move(value); }
    inline void SetNetworkInsightsPathId(const char* value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId.assign(value); }
    inline StartNetworkInsightsAnalysisRequest& WithNetworkInsightsPathId(const Aws::String& value) { SetNetworkInsightsPathId(value); return *this;}
    inline StartNetworkInsightsAnalysisRequest& WithNetworkInsightsPathId(Aws::String&& value) { SetNetworkInsightsPathId(std::move(value)); return *this;}
    inline StartNetworkInsightsAnalysisRequest& WithNetworkInsightsPathId(const char* value) { SetNetworkInsightsPathId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalAccounts() const{ return m_additionalAccounts; }
    inline bool AdditionalAccountsHasBeenSet() const { return m_additionalAccountsHasBeenSet; }
    inline void SetAdditionalAccounts(const Aws::Vector<Aws::String>& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts = value; }
    inline void SetAdditionalAccounts(Aws::Vector<Aws::String>&& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts = std::move(value); }
    inline StartNetworkInsightsAnalysisRequest& WithAdditionalAccounts(const Aws::Vector<Aws::String>& value) { SetAdditionalAccounts(value); return *this;}
    inline StartNetworkInsightsAnalysisRequest& WithAdditionalAccounts(Aws::Vector<Aws::String>&& value) { SetAdditionalAccounts(std::move(value)); return *this;}
    inline StartNetworkInsightsAnalysisRequest& AddAdditionalAccounts(const Aws::String& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts.push_back(value); return *this; }
    inline StartNetworkInsightsAnalysisRequest& AddAdditionalAccounts(Aws::String&& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts.push_back(std::move(value)); return *this; }
    inline StartNetworkInsightsAnalysisRequest& AddAdditionalAccounts(const char* value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the resources that the path must
     * traverse.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterInArns() const{ return m_filterInArns; }
    inline bool FilterInArnsHasBeenSet() const { return m_filterInArnsHasBeenSet; }
    inline void SetFilterInArns(const Aws::Vector<Aws::String>& value) { m_filterInArnsHasBeenSet = true; m_filterInArns = value; }
    inline void SetFilterInArns(Aws::Vector<Aws::String>&& value) { m_filterInArnsHasBeenSet = true; m_filterInArns = std::move(value); }
    inline StartNetworkInsightsAnalysisRequest& WithFilterInArns(const Aws::Vector<Aws::String>& value) { SetFilterInArns(value); return *this;}
    inline StartNetworkInsightsAnalysisRequest& WithFilterInArns(Aws::Vector<Aws::String>&& value) { SetFilterInArns(std::move(value)); return *this;}
    inline StartNetworkInsightsAnalysisRequest& AddFilterInArns(const Aws::String& value) { m_filterInArnsHasBeenSet = true; m_filterInArns.push_back(value); return *this; }
    inline StartNetworkInsightsAnalysisRequest& AddFilterInArns(Aws::String&& value) { m_filterInArnsHasBeenSet = true; m_filterInArns.push_back(std::move(value)); return *this; }
    inline StartNetworkInsightsAnalysisRequest& AddFilterInArns(const char* value) { m_filterInArnsHasBeenSet = true; m_filterInArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline StartNetworkInsightsAnalysisRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline StartNetworkInsightsAnalysisRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline StartNetworkInsightsAnalysisRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline StartNetworkInsightsAnalysisRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline StartNetworkInsightsAnalysisRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartNetworkInsightsAnalysisRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartNetworkInsightsAnalysisRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartNetworkInsightsAnalysisRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_networkInsightsPathId;
    bool m_networkInsightsPathIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalAccounts;
    bool m_additionalAccountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterInArns;
    bool m_filterInArnsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
