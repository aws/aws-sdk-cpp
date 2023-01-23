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
   * <p> The Account Takeover Insights (ATI) model performance score. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ATIModelPerformance">AWS
   * API Reference</a></p>
   */
  class ATIModelPerformance
  {
  public:
    AWS_FRAUDDETECTOR_API ATIModelPerformance();
    AWS_FRAUDDETECTOR_API ATIModelPerformance(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ATIModelPerformance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The anomaly separation index (ASI) score. This metric summarizes the overall
     * ability of the model to separate anomalous activities from the normal behavior.
     * Depending on the business, a large fraction of these anomalous activities can be
     * malicious and correspond to the account takeover attacks. A model with no
     * separability power will have the lowest possible ASI score of 0.5, whereas the a
     * model with a high separability power will have the highest possible ASI score of
     * 1.0 </p>
     */
    inline double GetAsi() const{ return m_asi; }

    /**
     * <p> The anomaly separation index (ASI) score. This metric summarizes the overall
     * ability of the model to separate anomalous activities from the normal behavior.
     * Depending on the business, a large fraction of these anomalous activities can be
     * malicious and correspond to the account takeover attacks. A model with no
     * separability power will have the lowest possible ASI score of 0.5, whereas the a
     * model with a high separability power will have the highest possible ASI score of
     * 1.0 </p>
     */
    inline bool AsiHasBeenSet() const { return m_asiHasBeenSet; }

    /**
     * <p> The anomaly separation index (ASI) score. This metric summarizes the overall
     * ability of the model to separate anomalous activities from the normal behavior.
     * Depending on the business, a large fraction of these anomalous activities can be
     * malicious and correspond to the account takeover attacks. A model with no
     * separability power will have the lowest possible ASI score of 0.5, whereas the a
     * model with a high separability power will have the highest possible ASI score of
     * 1.0 </p>
     */
    inline void SetAsi(double value) { m_asiHasBeenSet = true; m_asi = value; }

    /**
     * <p> The anomaly separation index (ASI) score. This metric summarizes the overall
     * ability of the model to separate anomalous activities from the normal behavior.
     * Depending on the business, a large fraction of these anomalous activities can be
     * malicious and correspond to the account takeover attacks. A model with no
     * separability power will have the lowest possible ASI score of 0.5, whereas the a
     * model with a high separability power will have the highest possible ASI score of
     * 1.0 </p>
     */
    inline ATIModelPerformance& WithAsi(double value) { SetAsi(value); return *this;}

  private:

    double m_asi;
    bool m_asiHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
