/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/OFITrainingMetricsValue.h>
#include <aws/frauddetector/model/TFITrainingMetricsValue.h>
#include <aws/frauddetector/model/ATITrainingMetricsValue.h>
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
   * <p> The training metrics details. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TrainingMetricsV2">AWS
   * API Reference</a></p>
   */
  class TrainingMetricsV2
  {
  public:
    AWS_FRAUDDETECTOR_API TrainingMetricsV2() = default;
    AWS_FRAUDDETECTOR_API TrainingMetricsV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TrainingMetricsV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Online Fraud Insights (OFI) model training metric details. </p>
     */
    inline const OFITrainingMetricsValue& GetOfi() const { return m_ofi; }
    inline bool OfiHasBeenSet() const { return m_ofiHasBeenSet; }
    template<typename OfiT = OFITrainingMetricsValue>
    void SetOfi(OfiT&& value) { m_ofiHasBeenSet = true; m_ofi = std::forward<OfiT>(value); }
    template<typename OfiT = OFITrainingMetricsValue>
    TrainingMetricsV2& WithOfi(OfiT&& value) { SetOfi(std::forward<OfiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Transaction Fraud Insights (TFI) model training metric details. </p>
     */
    inline const TFITrainingMetricsValue& GetTfi() const { return m_tfi; }
    inline bool TfiHasBeenSet() const { return m_tfiHasBeenSet; }
    template<typename TfiT = TFITrainingMetricsValue>
    void SetTfi(TfiT&& value) { m_tfiHasBeenSet = true; m_tfi = std::forward<TfiT>(value); }
    template<typename TfiT = TFITrainingMetricsValue>
    TrainingMetricsV2& WithTfi(TfiT&& value) { SetTfi(std::forward<TfiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Account Takeover Insights (ATI) model training metric details. </p>
     */
    inline const ATITrainingMetricsValue& GetAti() const { return m_ati; }
    inline bool AtiHasBeenSet() const { return m_atiHasBeenSet; }
    template<typename AtiT = ATITrainingMetricsValue>
    void SetAti(AtiT&& value) { m_atiHasBeenSet = true; m_ati = std::forward<AtiT>(value); }
    template<typename AtiT = ATITrainingMetricsValue>
    TrainingMetricsV2& WithAti(AtiT&& value) { SetAti(std::forward<AtiT>(value)); return *this;}
    ///@}
  private:

    OFITrainingMetricsValue m_ofi;
    bool m_ofiHasBeenSet = false;

    TFITrainingMetricsValue m_tfi;
    bool m_tfiHasBeenSet = false;

    ATITrainingMetricsValue m_ati;
    bool m_atiHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
