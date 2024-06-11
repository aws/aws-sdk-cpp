﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/UncertaintyRange.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The Transaction Fraud Insights (TFI) model performance score. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TFIModelPerformance">AWS
   * API Reference</a></p>
   */
  class TFIModelPerformance
  {
  public:
    AWS_FRAUDDETECTOR_API TFIModelPerformance();
    AWS_FRAUDDETECTOR_API TFIModelPerformance(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TFIModelPerformance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The area under the curve (auc). This summarizes the total positive rate
     * (tpr) and false positive rate (FPR) across all possible model score thresholds.
     * </p>
     */
    inline double GetAuc() const{ return m_auc; }
    inline bool AucHasBeenSet() const { return m_aucHasBeenSet; }
    inline void SetAuc(double value) { m_aucHasBeenSet = true; m_auc = value; }
    inline TFIModelPerformance& WithAuc(double value) { SetAuc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the range of area under curve (auc) expected from the TFI model. A
     * range greater than 0.1 indicates higher model uncertainity. </p>
     */
    inline const UncertaintyRange& GetUncertaintyRange() const{ return m_uncertaintyRange; }
    inline bool UncertaintyRangeHasBeenSet() const { return m_uncertaintyRangeHasBeenSet; }
    inline void SetUncertaintyRange(const UncertaintyRange& value) { m_uncertaintyRangeHasBeenSet = true; m_uncertaintyRange = value; }
    inline void SetUncertaintyRange(UncertaintyRange&& value) { m_uncertaintyRangeHasBeenSet = true; m_uncertaintyRange = std::move(value); }
    inline TFIModelPerformance& WithUncertaintyRange(const UncertaintyRange& value) { SetUncertaintyRange(value); return *this;}
    inline TFIModelPerformance& WithUncertaintyRange(UncertaintyRange&& value) { SetUncertaintyRange(std::move(value)); return *this;}
    ///@}
  private:

    double m_auc;
    bool m_aucHasBeenSet = false;

    UncertaintyRange m_uncertaintyRange;
    bool m_uncertaintyRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
