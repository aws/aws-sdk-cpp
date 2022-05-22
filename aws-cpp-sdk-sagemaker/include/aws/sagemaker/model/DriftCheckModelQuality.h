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
   * <p>Represents the drift check model quality baselines that can be used when the
   * model monitor is set using the model package. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DriftCheckModelQuality">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API DriftCheckModelQuality
  {
  public:
    DriftCheckModelQuality();
    DriftCheckModelQuality(Aws::Utils::Json::JsonView jsonValue);
    DriftCheckModelQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const MetricsSource& GetStatistics() const{ return m_statistics; }

    
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    
    inline void SetStatistics(const MetricsSource& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    
    inline void SetStatistics(MetricsSource&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    
    inline DriftCheckModelQuality& WithStatistics(const MetricsSource& value) { SetStatistics(value); return *this;}

    
    inline DriftCheckModelQuality& WithStatistics(MetricsSource&& value) { SetStatistics(std::move(value)); return *this;}


    
    inline const MetricsSource& GetConstraints() const{ return m_constraints; }

    
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }

    
    inline void SetConstraints(const MetricsSource& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    
    inline void SetConstraints(MetricsSource&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }

    
    inline DriftCheckModelQuality& WithConstraints(const MetricsSource& value) { SetConstraints(value); return *this;}

    
    inline DriftCheckModelQuality& WithConstraints(MetricsSource&& value) { SetConstraints(std::move(value)); return *this;}

  private:

    MetricsSource m_statistics;
    bool m_statisticsHasBeenSet;

    MetricsSource m_constraints;
    bool m_constraintsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
