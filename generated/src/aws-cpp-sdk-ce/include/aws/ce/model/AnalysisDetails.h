﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/SavingsPlansPurchaseAnalysisDetails.h>
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
   * <p>Details about the analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/AnalysisDetails">AWS
   * API Reference</a></p>
   */
  class AnalysisDetails
  {
  public:
    AWS_COSTEXPLORER_API AnalysisDetails();
    AWS_COSTEXPLORER_API AnalysisDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API AnalysisDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the Savings Plans purchase analysis.</p>
     */
    inline const SavingsPlansPurchaseAnalysisDetails& GetSavingsPlansPurchaseAnalysisDetails() const{ return m_savingsPlansPurchaseAnalysisDetails; }
    inline bool SavingsPlansPurchaseAnalysisDetailsHasBeenSet() const { return m_savingsPlansPurchaseAnalysisDetailsHasBeenSet; }
    inline void SetSavingsPlansPurchaseAnalysisDetails(const SavingsPlansPurchaseAnalysisDetails& value) { m_savingsPlansPurchaseAnalysisDetailsHasBeenSet = true; m_savingsPlansPurchaseAnalysisDetails = value; }
    inline void SetSavingsPlansPurchaseAnalysisDetails(SavingsPlansPurchaseAnalysisDetails&& value) { m_savingsPlansPurchaseAnalysisDetailsHasBeenSet = true; m_savingsPlansPurchaseAnalysisDetails = std::move(value); }
    inline AnalysisDetails& WithSavingsPlansPurchaseAnalysisDetails(const SavingsPlansPurchaseAnalysisDetails& value) { SetSavingsPlansPurchaseAnalysisDetails(value); return *this;}
    inline AnalysisDetails& WithSavingsPlansPurchaseAnalysisDetails(SavingsPlansPurchaseAnalysisDetails&& value) { SetSavingsPlansPurchaseAnalysisDetails(std::move(value)); return *this;}
    ///@}
  private:

    SavingsPlansPurchaseAnalysisDetails m_savingsPlansPurchaseAnalysisDetails;
    bool m_savingsPlansPurchaseAnalysisDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
