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
    AWS_LOOKOUTFORVISION_API DatasetImageStats();
    AWS_LOOKOUTFORVISION_API DatasetImageStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API DatasetImageStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of images in the dataset.</p>
     */
    inline int GetTotal() const{ return m_total; }

    /**
     * <p>The total number of images in the dataset.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total number of images in the dataset.</p>
     */
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total number of images in the dataset.</p>
     */
    inline DatasetImageStats& WithTotal(int value) { SetTotal(value); return *this;}


    /**
     * <p>The total number of labeled images.</p>
     */
    inline int GetLabeled() const{ return m_labeled; }

    /**
     * <p>The total number of labeled images.</p>
     */
    inline bool LabeledHasBeenSet() const { return m_labeledHasBeenSet; }

    /**
     * <p>The total number of labeled images.</p>
     */
    inline void SetLabeled(int value) { m_labeledHasBeenSet = true; m_labeled = value; }

    /**
     * <p>The total number of labeled images.</p>
     */
    inline DatasetImageStats& WithLabeled(int value) { SetLabeled(value); return *this;}


    /**
     * <p>The total number of images labeled as normal.</p>
     */
    inline int GetNormal() const{ return m_normal; }

    /**
     * <p>The total number of images labeled as normal.</p>
     */
    inline bool NormalHasBeenSet() const { return m_normalHasBeenSet; }

    /**
     * <p>The total number of images labeled as normal.</p>
     */
    inline void SetNormal(int value) { m_normalHasBeenSet = true; m_normal = value; }

    /**
     * <p>The total number of images labeled as normal.</p>
     */
    inline DatasetImageStats& WithNormal(int value) { SetNormal(value); return *this;}


    /**
     * <p>the total number of images labeled as an anomaly.</p>
     */
    inline int GetAnomaly() const{ return m_anomaly; }

    /**
     * <p>the total number of images labeled as an anomaly.</p>
     */
    inline bool AnomalyHasBeenSet() const { return m_anomalyHasBeenSet; }

    /**
     * <p>the total number of images labeled as an anomaly.</p>
     */
    inline void SetAnomaly(int value) { m_anomalyHasBeenSet = true; m_anomaly = value; }

    /**
     * <p>the total number of images labeled as an anomaly.</p>
     */
    inline DatasetImageStats& WithAnomaly(int value) { SetAnomaly(value); return *this;}

  private:

    int m_total;
    bool m_totalHasBeenSet = false;

    int m_labeled;
    bool m_labeledHasBeenSet = false;

    int m_normal;
    bool m_normalHasBeenSet = false;

    int m_anomaly;
    bool m_anomalyHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
