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
    AWS_FRAUDDETECTOR_API TrainingMetricsV2();
    AWS_FRAUDDETECTOR_API TrainingMetricsV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TrainingMetricsV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Online Fraud Insights (OFI) model training metric details. </p>
     */
    inline const OFITrainingMetricsValue& GetOfi() const{ return m_ofi; }

    /**
     * <p> The Online Fraud Insights (OFI) model training metric details. </p>
     */
    inline bool OfiHasBeenSet() const { return m_ofiHasBeenSet; }

    /**
     * <p> The Online Fraud Insights (OFI) model training metric details. </p>
     */
    inline void SetOfi(const OFITrainingMetricsValue& value) { m_ofiHasBeenSet = true; m_ofi = value; }

    /**
     * <p> The Online Fraud Insights (OFI) model training metric details. </p>
     */
    inline void SetOfi(OFITrainingMetricsValue&& value) { m_ofiHasBeenSet = true; m_ofi = std::move(value); }

    /**
     * <p> The Online Fraud Insights (OFI) model training metric details. </p>
     */
    inline TrainingMetricsV2& WithOfi(const OFITrainingMetricsValue& value) { SetOfi(value); return *this;}

    /**
     * <p> The Online Fraud Insights (OFI) model training metric details. </p>
     */
    inline TrainingMetricsV2& WithOfi(OFITrainingMetricsValue&& value) { SetOfi(std::move(value)); return *this;}


    /**
     * <p> The Transaction Fraud Insights (TFI) model training metric details. </p>
     */
    inline const TFITrainingMetricsValue& GetTfi() const{ return m_tfi; }

    /**
     * <p> The Transaction Fraud Insights (TFI) model training metric details. </p>
     */
    inline bool TfiHasBeenSet() const { return m_tfiHasBeenSet; }

    /**
     * <p> The Transaction Fraud Insights (TFI) model training metric details. </p>
     */
    inline void SetTfi(const TFITrainingMetricsValue& value) { m_tfiHasBeenSet = true; m_tfi = value; }

    /**
     * <p> The Transaction Fraud Insights (TFI) model training metric details. </p>
     */
    inline void SetTfi(TFITrainingMetricsValue&& value) { m_tfiHasBeenSet = true; m_tfi = std::move(value); }

    /**
     * <p> The Transaction Fraud Insights (TFI) model training metric details. </p>
     */
    inline TrainingMetricsV2& WithTfi(const TFITrainingMetricsValue& value) { SetTfi(value); return *this;}

    /**
     * <p> The Transaction Fraud Insights (TFI) model training metric details. </p>
     */
    inline TrainingMetricsV2& WithTfi(TFITrainingMetricsValue&& value) { SetTfi(std::move(value)); return *this;}


    /**
     * <p> The Account Takeover Insights (ATI) model training metric details. </p>
     */
    inline const ATITrainingMetricsValue& GetAti() const{ return m_ati; }

    /**
     * <p> The Account Takeover Insights (ATI) model training metric details. </p>
     */
    inline bool AtiHasBeenSet() const { return m_atiHasBeenSet; }

    /**
     * <p> The Account Takeover Insights (ATI) model training metric details. </p>
     */
    inline void SetAti(const ATITrainingMetricsValue& value) { m_atiHasBeenSet = true; m_ati = value; }

    /**
     * <p> The Account Takeover Insights (ATI) model training metric details. </p>
     */
    inline void SetAti(ATITrainingMetricsValue&& value) { m_atiHasBeenSet = true; m_ati = std::move(value); }

    /**
     * <p> The Account Takeover Insights (ATI) model training metric details. </p>
     */
    inline TrainingMetricsV2& WithAti(const ATITrainingMetricsValue& value) { SetAti(value); return *this;}

    /**
     * <p> The Account Takeover Insights (ATI) model training metric details. </p>
     */
    inline TrainingMetricsV2& WithAti(ATITrainingMetricsValue&& value) { SetAti(std::move(value)); return *this;}

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
