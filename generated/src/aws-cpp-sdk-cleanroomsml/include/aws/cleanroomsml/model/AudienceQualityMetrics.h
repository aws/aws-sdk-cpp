/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/RelevanceMetric.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Metrics that describe the quality of the generated audience.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AudienceQualityMetrics">AWS
   * API Reference</a></p>
   */
  class AudienceQualityMetrics
  {
  public:
    AWS_CLEANROOMSML_API AudienceQualityMetrics() = default;
    AWS_CLEANROOMSML_API AudienceQualityMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API AudienceQualityMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The relevance scores of the generated audience.</p>
     */
    inline const Aws::Vector<RelevanceMetric>& GetRelevanceMetrics() const { return m_relevanceMetrics; }
    inline bool RelevanceMetricsHasBeenSet() const { return m_relevanceMetricsHasBeenSet; }
    template<typename RelevanceMetricsT = Aws::Vector<RelevanceMetric>>
    void SetRelevanceMetrics(RelevanceMetricsT&& value) { m_relevanceMetricsHasBeenSet = true; m_relevanceMetrics = std::forward<RelevanceMetricsT>(value); }
    template<typename RelevanceMetricsT = Aws::Vector<RelevanceMetric>>
    AudienceQualityMetrics& WithRelevanceMetrics(RelevanceMetricsT&& value) { SetRelevanceMetrics(std::forward<RelevanceMetricsT>(value)); return *this;}
    template<typename RelevanceMetricsT = RelevanceMetric>
    AudienceQualityMetrics& AddRelevanceMetrics(RelevanceMetricsT&& value) { m_relevanceMetricsHasBeenSet = true; m_relevanceMetrics.emplace_back(std::forward<RelevanceMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recall score of the generated audience. Recall is the percentage of the
     * most similar users (by default, the most similar 20%) from a sample of the
     * training data that are included in the seed audience by the audience generation
     * job. Values range from 0-1, larger values indicate a better audience. A recall
     * value approximately equal to the maximum bin size indicates that the audience
     * model is equivalent to random selection. </p>
     */
    inline double GetRecallMetric() const { return m_recallMetric; }
    inline bool RecallMetricHasBeenSet() const { return m_recallMetricHasBeenSet; }
    inline void SetRecallMetric(double value) { m_recallMetricHasBeenSet = true; m_recallMetric = value; }
    inline AudienceQualityMetrics& WithRecallMetric(double value) { SetRecallMetric(value); return *this;}
    ///@}
  private:

    Aws::Vector<RelevanceMetric> m_relevanceMetrics;
    bool m_relevanceMetricsHasBeenSet = false;

    double m_recallMetric{0.0};
    bool m_recallMetricHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
