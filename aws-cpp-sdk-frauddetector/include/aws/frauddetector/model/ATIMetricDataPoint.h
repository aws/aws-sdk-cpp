/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>

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
   * <p> The Account Takeover Insights (ATI) model performance metrics data points.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ATIMetricDataPoint">AWS
   * API Reference</a></p>
   */
  class ATIMetricDataPoint
  {
  public:
    AWS_FRAUDDETECTOR_API ATIMetricDataPoint();
    AWS_FRAUDDETECTOR_API ATIMetricDataPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ATIMetricDataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The challenge rate. This indicates the percentage of login events that the
     * model recommends to challenge such as one-time password, multi-factor
     * authentication, and investigations. </p>
     */
    inline double GetCr() const{ return m_cr; }

    /**
     * <p> The challenge rate. This indicates the percentage of login events that the
     * model recommends to challenge such as one-time password, multi-factor
     * authentication, and investigations. </p>
     */
    inline bool CrHasBeenSet() const { return m_crHasBeenSet; }

    /**
     * <p> The challenge rate. This indicates the percentage of login events that the
     * model recommends to challenge such as one-time password, multi-factor
     * authentication, and investigations. </p>
     */
    inline void SetCr(double value) { m_crHasBeenSet = true; m_cr = value; }

    /**
     * <p> The challenge rate. This indicates the percentage of login events that the
     * model recommends to challenge such as one-time password, multi-factor
     * authentication, and investigations. </p>
     */
    inline ATIMetricDataPoint& WithCr(double value) { SetCr(value); return *this;}


    /**
     * <p> The anomaly discovery rate. This metric quantifies the percentage of
     * anomalies that can be detected by the model at the selected score threshold. A
     * lower score threshold increases the percentage of anomalies captured by the
     * model, but would also require challenging a larger percentage of login events,
     * leading to a higher customer friction. </p>
     */
    inline double GetAdr() const{ return m_adr; }

    /**
     * <p> The anomaly discovery rate. This metric quantifies the percentage of
     * anomalies that can be detected by the model at the selected score threshold. A
     * lower score threshold increases the percentage of anomalies captured by the
     * model, but would also require challenging a larger percentage of login events,
     * leading to a higher customer friction. </p>
     */
    inline bool AdrHasBeenSet() const { return m_adrHasBeenSet; }

    /**
     * <p> The anomaly discovery rate. This metric quantifies the percentage of
     * anomalies that can be detected by the model at the selected score threshold. A
     * lower score threshold increases the percentage of anomalies captured by the
     * model, but would also require challenging a larger percentage of login events,
     * leading to a higher customer friction. </p>
     */
    inline void SetAdr(double value) { m_adrHasBeenSet = true; m_adr = value; }

    /**
     * <p> The anomaly discovery rate. This metric quantifies the percentage of
     * anomalies that can be detected by the model at the selected score threshold. A
     * lower score threshold increases the percentage of anomalies captured by the
     * model, but would also require challenging a larger percentage of login events,
     * leading to a higher customer friction. </p>
     */
    inline ATIMetricDataPoint& WithAdr(double value) { SetAdr(value); return *this;}


    /**
     * <p> The model's threshold that specifies an acceptable fraud capture rate. For
     * example, a threshold of 500 means any model score 500 or above is labeled as
     * fraud. </p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p> The model's threshold that specifies an acceptable fraud capture rate. For
     * example, a threshold of 500 means any model score 500 or above is labeled as
     * fraud. </p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p> The model's threshold that specifies an acceptable fraud capture rate. For
     * example, a threshold of 500 means any model score 500 or above is labeled as
     * fraud. </p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p> The model's threshold that specifies an acceptable fraud capture rate. For
     * example, a threshold of 500 means any model score 500 or above is labeled as
     * fraud. </p>
     */
    inline ATIMetricDataPoint& WithThreshold(double value) { SetThreshold(value); return *this;}


    /**
     * <p> The account takeover discovery rate. This metric quantifies the percentage
     * of account compromise events that can be detected by the model at the selected
     * score threshold. This metric is only available if 50 or more entities with
     * at-least one labeled account takeover event is present in the ingested dataset.
     * </p>
     */
    inline double GetAtodr() const{ return m_atodr; }

    /**
     * <p> The account takeover discovery rate. This metric quantifies the percentage
     * of account compromise events that can be detected by the model at the selected
     * score threshold. This metric is only available if 50 or more entities with
     * at-least one labeled account takeover event is present in the ingested dataset.
     * </p>
     */
    inline bool AtodrHasBeenSet() const { return m_atodrHasBeenSet; }

    /**
     * <p> The account takeover discovery rate. This metric quantifies the percentage
     * of account compromise events that can be detected by the model at the selected
     * score threshold. This metric is only available if 50 or more entities with
     * at-least one labeled account takeover event is present in the ingested dataset.
     * </p>
     */
    inline void SetAtodr(double value) { m_atodrHasBeenSet = true; m_atodr = value; }

    /**
     * <p> The account takeover discovery rate. This metric quantifies the percentage
     * of account compromise events that can be detected by the model at the selected
     * score threshold. This metric is only available if 50 or more entities with
     * at-least one labeled account takeover event is present in the ingested dataset.
     * </p>
     */
    inline ATIMetricDataPoint& WithAtodr(double value) { SetAtodr(value); return *this;}

  private:

    double m_cr;
    bool m_crHasBeenSet = false;

    double m_adr;
    bool m_adrHasBeenSet = false;

    double m_threshold;
    bool m_thresholdHasBeenSet = false;

    double m_atodr;
    bool m_atodrHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
