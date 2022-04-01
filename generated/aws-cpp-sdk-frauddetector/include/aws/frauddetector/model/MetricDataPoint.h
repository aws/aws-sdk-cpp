﻿/**
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
   * <p>Model performance metrics data points.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/MetricDataPoint">AWS
   * API Reference</a></p>
   */
  class AWS_FRAUDDETECTOR_API MetricDataPoint
  {
  public:
    MetricDataPoint();
    MetricDataPoint(Aws::Utils::Json::JsonView jsonValue);
    MetricDataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The false positive rate. This is the percentage of total legitimate events
     * that are incorrectly predicted as fraud.</p>
     */
    inline double GetFpr() const{ return m_fpr; }

    /**
     * <p>The false positive rate. This is the percentage of total legitimate events
     * that are incorrectly predicted as fraud.</p>
     */
    inline bool FprHasBeenSet() const { return m_fprHasBeenSet; }

    /**
     * <p>The false positive rate. This is the percentage of total legitimate events
     * that are incorrectly predicted as fraud.</p>
     */
    inline void SetFpr(double value) { m_fprHasBeenSet = true; m_fpr = value; }

    /**
     * <p>The false positive rate. This is the percentage of total legitimate events
     * that are incorrectly predicted as fraud.</p>
     */
    inline MetricDataPoint& WithFpr(double value) { SetFpr(value); return *this;}


    /**
     * <p>The percentage of fraud events correctly predicted as fraudulent as compared
     * to all events predicted as fraudulent.</p>
     */
    inline double GetPrecision() const{ return m_precision; }

    /**
     * <p>The percentage of fraud events correctly predicted as fraudulent as compared
     * to all events predicted as fraudulent.</p>
     */
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }

    /**
     * <p>The percentage of fraud events correctly predicted as fraudulent as compared
     * to all events predicted as fraudulent.</p>
     */
    inline void SetPrecision(double value) { m_precisionHasBeenSet = true; m_precision = value; }

    /**
     * <p>The percentage of fraud events correctly predicted as fraudulent as compared
     * to all events predicted as fraudulent.</p>
     */
    inline MetricDataPoint& WithPrecision(double value) { SetPrecision(value); return *this;}


    /**
     * <p>The true positive rate. This is the percentage of total fraud the model
     * detects. Also known as capture rate.</p>
     */
    inline double GetTpr() const{ return m_tpr; }

    /**
     * <p>The true positive rate. This is the percentage of total fraud the model
     * detects. Also known as capture rate.</p>
     */
    inline bool TprHasBeenSet() const { return m_tprHasBeenSet; }

    /**
     * <p>The true positive rate. This is the percentage of total fraud the model
     * detects. Also known as capture rate.</p>
     */
    inline void SetTpr(double value) { m_tprHasBeenSet = true; m_tpr = value; }

    /**
     * <p>The true positive rate. This is the percentage of total fraud the model
     * detects. Also known as capture rate.</p>
     */
    inline MetricDataPoint& WithTpr(double value) { SetTpr(value); return *this;}


    /**
     * <p>The model threshold that specifies an acceptable fraud capture rate. For
     * example, a threshold of 500 means any model score 500 or above is labeled as
     * fraud.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>The model threshold that specifies an acceptable fraud capture rate. For
     * example, a threshold of 500 means any model score 500 or above is labeled as
     * fraud.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The model threshold that specifies an acceptable fraud capture rate. For
     * example, a threshold of 500 means any model score 500 or above is labeled as
     * fraud.</p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The model threshold that specifies an acceptable fraud capture rate. For
     * example, a threshold of 500 means any model score 500 or above is labeled as
     * fraud.</p>
     */
    inline MetricDataPoint& WithThreshold(double value) { SetThreshold(value); return *this;}

  private:

    double m_fpr;
    bool m_fprHasBeenSet;

    double m_precision;
    bool m_precisionHasBeenSet;

    double m_tpr;
    bool m_tprHasBeenSet;

    double m_threshold;
    bool m_thresholdHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
