/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/SavingsPlansPurchaseAnalysisConfiguration.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The configuration for the commitment purchase analysis.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CommitmentPurchaseAnalysisConfiguration">AWS
   * API Reference</a></p>
   */
  class CommitmentPurchaseAnalysisConfiguration
  {
  public:
    AWS_COSTEXPLORER_API CommitmentPurchaseAnalysisConfiguration() = default;
    AWS_COSTEXPLORER_API CommitmentPurchaseAnalysisConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CommitmentPurchaseAnalysisConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the Savings Plans purchase analysis.</p>
     */
    inline const SavingsPlansPurchaseAnalysisConfiguration& GetSavingsPlansPurchaseAnalysisConfiguration() const { return m_savingsPlansPurchaseAnalysisConfiguration; }
    inline bool SavingsPlansPurchaseAnalysisConfigurationHasBeenSet() const { return m_savingsPlansPurchaseAnalysisConfigurationHasBeenSet; }
    template<typename SavingsPlansPurchaseAnalysisConfigurationT = SavingsPlansPurchaseAnalysisConfiguration>
    void SetSavingsPlansPurchaseAnalysisConfiguration(SavingsPlansPurchaseAnalysisConfigurationT&& value) { m_savingsPlansPurchaseAnalysisConfigurationHasBeenSet = true; m_savingsPlansPurchaseAnalysisConfiguration = std::forward<SavingsPlansPurchaseAnalysisConfigurationT>(value); }
    template<typename SavingsPlansPurchaseAnalysisConfigurationT = SavingsPlansPurchaseAnalysisConfiguration>
    CommitmentPurchaseAnalysisConfiguration& WithSavingsPlansPurchaseAnalysisConfiguration(SavingsPlansPurchaseAnalysisConfigurationT&& value) { SetSavingsPlansPurchaseAnalysisConfiguration(std::forward<SavingsPlansPurchaseAnalysisConfigurationT>(value)); return *this;}
    ///@}
  private:

    SavingsPlansPurchaseAnalysisConfiguration m_savingsPlansPurchaseAnalysisConfiguration;
    bool m_savingsPlansPurchaseAnalysisConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
