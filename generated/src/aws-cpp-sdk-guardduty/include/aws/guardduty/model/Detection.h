/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Anomaly.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the detected behavior.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Detection">AWS
   * API Reference</a></p>
   */
  class Detection
  {
  public:
    AWS_GUARDDUTY_API Detection();
    AWS_GUARDDUTY_API Detection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Detection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details about the anomalous activity that caused GuardDuty to generate
     * the finding.</p>
     */
    inline const Anomaly& GetAnomaly() const{ return m_anomaly; }

    /**
     * <p>The details about the anomalous activity that caused GuardDuty to generate
     * the finding.</p>
     */
    inline bool AnomalyHasBeenSet() const { return m_anomalyHasBeenSet; }

    /**
     * <p>The details about the anomalous activity that caused GuardDuty to generate
     * the finding.</p>
     */
    inline void SetAnomaly(const Anomaly& value) { m_anomalyHasBeenSet = true; m_anomaly = value; }

    /**
     * <p>The details about the anomalous activity that caused GuardDuty to generate
     * the finding.</p>
     */
    inline void SetAnomaly(Anomaly&& value) { m_anomalyHasBeenSet = true; m_anomaly = std::move(value); }

    /**
     * <p>The details about the anomalous activity that caused GuardDuty to generate
     * the finding.</p>
     */
    inline Detection& WithAnomaly(const Anomaly& value) { SetAnomaly(value); return *this;}

    /**
     * <p>The details about the anomalous activity that caused GuardDuty to generate
     * the finding.</p>
     */
    inline Detection& WithAnomaly(Anomaly&& value) { SetAnomaly(std::move(value)); return *this;}

  private:

    Anomaly m_anomaly;
    bool m_anomalyHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
