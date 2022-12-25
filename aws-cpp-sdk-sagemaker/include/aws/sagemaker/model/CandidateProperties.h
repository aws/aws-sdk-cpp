/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CandidateArtifactLocations.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/MetricDatum.h>
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
   * <p>The properties of an AutoML candidate job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CandidateProperties">AWS
   * API Reference</a></p>
   */
  class CandidateProperties
  {
  public:
    AWS_SAGEMAKER_API CandidateProperties();
    AWS_SAGEMAKER_API CandidateProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CandidateProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline const CandidateArtifactLocations& GetCandidateArtifactLocations() const{ return m_candidateArtifactLocations; }

    /**
     * <p>The Amazon S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline bool CandidateArtifactLocationsHasBeenSet() const { return m_candidateArtifactLocationsHasBeenSet; }

    /**
     * <p>The Amazon S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline void SetCandidateArtifactLocations(const CandidateArtifactLocations& value) { m_candidateArtifactLocationsHasBeenSet = true; m_candidateArtifactLocations = value; }

    /**
     * <p>The Amazon S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline void SetCandidateArtifactLocations(CandidateArtifactLocations&& value) { m_candidateArtifactLocationsHasBeenSet = true; m_candidateArtifactLocations = std::move(value); }

    /**
     * <p>The Amazon S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline CandidateProperties& WithCandidateArtifactLocations(const CandidateArtifactLocations& value) { SetCandidateArtifactLocations(value); return *this;}

    /**
     * <p>The Amazon S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline CandidateProperties& WithCandidateArtifactLocations(CandidateArtifactLocations&& value) { SetCandidateArtifactLocations(std::move(value)); return *this;}


    /**
     * <p>Information about the candidate metrics for an AutoML job.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetCandidateMetrics() const{ return m_candidateMetrics; }

    /**
     * <p>Information about the candidate metrics for an AutoML job.</p>
     */
    inline bool CandidateMetricsHasBeenSet() const { return m_candidateMetricsHasBeenSet; }

    /**
     * <p>Information about the candidate metrics for an AutoML job.</p>
     */
    inline void SetCandidateMetrics(const Aws::Vector<MetricDatum>& value) { m_candidateMetricsHasBeenSet = true; m_candidateMetrics = value; }

    /**
     * <p>Information about the candidate metrics for an AutoML job.</p>
     */
    inline void SetCandidateMetrics(Aws::Vector<MetricDatum>&& value) { m_candidateMetricsHasBeenSet = true; m_candidateMetrics = std::move(value); }

    /**
     * <p>Information about the candidate metrics for an AutoML job.</p>
     */
    inline CandidateProperties& WithCandidateMetrics(const Aws::Vector<MetricDatum>& value) { SetCandidateMetrics(value); return *this;}

    /**
     * <p>Information about the candidate metrics for an AutoML job.</p>
     */
    inline CandidateProperties& WithCandidateMetrics(Aws::Vector<MetricDatum>&& value) { SetCandidateMetrics(std::move(value)); return *this;}

    /**
     * <p>Information about the candidate metrics for an AutoML job.</p>
     */
    inline CandidateProperties& AddCandidateMetrics(const MetricDatum& value) { m_candidateMetricsHasBeenSet = true; m_candidateMetrics.push_back(value); return *this; }

    /**
     * <p>Information about the candidate metrics for an AutoML job.</p>
     */
    inline CandidateProperties& AddCandidateMetrics(MetricDatum&& value) { m_candidateMetricsHasBeenSet = true; m_candidateMetrics.push_back(std::move(value)); return *this; }

  private:

    CandidateArtifactLocations m_candidateArtifactLocations;
    bool m_candidateArtifactLocationsHasBeenSet = false;

    Aws::Vector<MetricDatum> m_candidateMetrics;
    bool m_candidateMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
