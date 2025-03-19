/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>

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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Statistics about the images in a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DatasetImageStats">AWS
   * API Reference</a></p>
   */
  class DatasetImageStats
  {
  public:
    AWS_LOOKOUTFORVISION_API DatasetImageStats() = default;
    AWS_LOOKOUTFORVISION_API DatasetImageStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API DatasetImageStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of images in the dataset.</p>
     */
    inline int GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }
    inline DatasetImageStats& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of labeled images.</p>
     */
    inline int GetLabeled() const { return m_labeled; }
    inline bool LabeledHasBeenSet() const { return m_labeledHasBeenSet; }
    inline void SetLabeled(int value) { m_labeledHasBeenSet = true; m_labeled = value; }
    inline DatasetImageStats& WithLabeled(int value) { SetLabeled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of images labeled as normal.</p>
     */
    inline int GetNormal() const { return m_normal; }
    inline bool NormalHasBeenSet() const { return m_normalHasBeenSet; }
    inline void SetNormal(int value) { m_normalHasBeenSet = true; m_normal = value; }
    inline DatasetImageStats& WithNormal(int value) { SetNormal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>the total number of images labeled as an anomaly.</p>
     */
    inline int GetAnomaly() const { return m_anomaly; }
    inline bool AnomalyHasBeenSet() const { return m_anomalyHasBeenSet; }
    inline void SetAnomaly(int value) { m_anomalyHasBeenSet = true; m_anomaly = value; }
    inline DatasetImageStats& WithAnomaly(int value) { SetAnomaly(value); return *this;}
    ///@}
  private:

    int m_total{0};
    bool m_totalHasBeenSet = false;

    int m_labeled{0};
    bool m_labeledHasBeenSet = false;

    int m_normal{0};
    bool m_normalHasBeenSet = false;

    int m_anomaly{0};
    bool m_anomalyHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
