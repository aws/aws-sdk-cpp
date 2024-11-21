﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/CommitmentPurchaseAnalysisConfiguration.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class StartCommitmentPurchaseAnalysisRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API StartCommitmentPurchaseAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCommitmentPurchaseAnalysis"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The configuration for the commitment purchase analysis.</p>
     */
    inline const CommitmentPurchaseAnalysisConfiguration& GetCommitmentPurchaseAnalysisConfiguration() const{ return m_commitmentPurchaseAnalysisConfiguration; }
    inline bool CommitmentPurchaseAnalysisConfigurationHasBeenSet() const { return m_commitmentPurchaseAnalysisConfigurationHasBeenSet; }
    inline void SetCommitmentPurchaseAnalysisConfiguration(const CommitmentPurchaseAnalysisConfiguration& value) { m_commitmentPurchaseAnalysisConfigurationHasBeenSet = true; m_commitmentPurchaseAnalysisConfiguration = value; }
    inline void SetCommitmentPurchaseAnalysisConfiguration(CommitmentPurchaseAnalysisConfiguration&& value) { m_commitmentPurchaseAnalysisConfigurationHasBeenSet = true; m_commitmentPurchaseAnalysisConfiguration = std::move(value); }
    inline StartCommitmentPurchaseAnalysisRequest& WithCommitmentPurchaseAnalysisConfiguration(const CommitmentPurchaseAnalysisConfiguration& value) { SetCommitmentPurchaseAnalysisConfiguration(value); return *this;}
    inline StartCommitmentPurchaseAnalysisRequest& WithCommitmentPurchaseAnalysisConfiguration(CommitmentPurchaseAnalysisConfiguration&& value) { SetCommitmentPurchaseAnalysisConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    CommitmentPurchaseAnalysisConfiguration m_commitmentPurchaseAnalysisConfiguration;
    bool m_commitmentPurchaseAnalysisConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
