/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MetricsSource.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Represents the drift check data quality baselines that can be used when the
   * model monitor is set using the model package. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DriftCheckModelDataQuality">AWS
   * API Reference</a></p>
   */
  class DriftCheckModelDataQuality
  {
  public:
    AWS_SAGEMAKER_API DriftCheckModelDataQuality();
    AWS_SAGEMAKER_API DriftCheckModelDataQuality(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DriftCheckModelDataQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The drift check model data quality statistics.</p>
     */
    inline const MetricsSource& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The drift check model data quality statistics.</p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>The drift check model data quality statistics.</p>
     */
    inline void SetStatistics(const MetricsSource& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>The drift check model data quality statistics.</p>
     */
    inline void SetStatistics(MetricsSource&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>The drift check model data quality statistics.</p>
     */
    inline DriftCheckModelDataQuality& WithStatistics(const MetricsSource& value) { SetStatistics(value); return *this;}

    /**
     * <p>The drift check model data quality statistics.</p>
     */
    inline DriftCheckModelDataQuality& WithStatistics(MetricsSource&& value) { SetStatistics(std::move(value)); return *this;}


    /**
     * <p>The drift check model data quality constraints.</p>
     */
    inline const MetricsSource& GetConstraints() const{ return m_constraints; }

    /**
     * <p>The drift check model data quality constraints.</p>
     */
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }

    /**
     * <p>The drift check model data quality constraints.</p>
     */
    inline void SetConstraints(const MetricsSource& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>The drift check model data quality constraints.</p>
     */
    inline void SetConstraints(MetricsSource&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }

    /**
     * <p>The drift check model data quality constraints.</p>
     */
    inline DriftCheckModelDataQuality& WithConstraints(const MetricsSource& value) { SetConstraints(value); return *this;}

    /**
     * <p>The drift check model data quality constraints.</p>
     */
    inline DriftCheckModelDataQuality& WithConstraints(MetricsSource&& value) { SetConstraints(std::move(value)); return *this;}

  private:

    MetricsSource m_statistics;
    bool m_statisticsHasBeenSet = false;

    MetricsSource m_constraints;
    bool m_constraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
