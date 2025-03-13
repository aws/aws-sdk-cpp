/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class DescribeLogPatternRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeLogPatternRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLogPattern"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const { return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    template<typename ResourceGroupNameT = Aws::String>
    void SetResourceGroupName(ResourceGroupNameT&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::forward<ResourceGroupNameT>(value); }
    template<typename ResourceGroupNameT = Aws::String>
    DescribeLogPatternRequest& WithResourceGroupName(ResourceGroupNameT&& value) { SetResourceGroupName(std::forward<ResourceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log pattern set.</p>
     */
    inline const Aws::String& GetPatternSetName() const { return m_patternSetName; }
    inline bool PatternSetNameHasBeenSet() const { return m_patternSetNameHasBeenSet; }
    template<typename PatternSetNameT = Aws::String>
    void SetPatternSetName(PatternSetNameT&& value) { m_patternSetNameHasBeenSet = true; m_patternSetName = std::forward<PatternSetNameT>(value); }
    template<typename PatternSetNameT = Aws::String>
    DescribeLogPatternRequest& WithPatternSetName(PatternSetNameT&& value) { SetPatternSetName(std::forward<PatternSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log pattern.</p>
     */
    inline const Aws::String& GetPatternName() const { return m_patternName; }
    inline bool PatternNameHasBeenSet() const { return m_patternNameHasBeenSet; }
    template<typename PatternNameT = Aws::String>
    void SetPatternName(PatternNameT&& value) { m_patternNameHasBeenSet = true; m_patternName = std::forward<PatternNameT>(value); }
    template<typename PatternNameT = Aws::String>
    DescribeLogPatternRequest& WithPatternName(PatternNameT&& value) { SetPatternName(std::forward<PatternNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the resource group owner.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    DescribeLogPatternRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_patternSetName;
    bool m_patternSetNameHasBeenSet = false;

    Aws::String m_patternName;
    bool m_patternNameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
