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
    AWS_CLEANROOMSML_API AudienceQualityMetrics();
    AWS_CLEANROOMSML_API AudienceQualityMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API AudienceQualityMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The relevance scores of the generated audience.</p>
     */
    inline const Aws::Vector<RelevanceMetric>& GetRelevanceMetrics() const{ return m_relevanceMetrics; }

    /**
     * <p>The relevance scores of the generated audience.</p>
     */
    inline bool RelevanceMetricsHasBeenSet() const { return m_relevanceMetricsHasBeenSet; }

    /**
     * <p>The relevance scores of the generated audience.</p>
     */
    inline void SetRelevanceMetrics(const Aws::Vector<RelevanceMetric>& value) { m_relevanceMetricsHasBeenSet = true; m_relevanceMetrics = value; }

    /**
     * <p>The relevance scores of the generated audience.</p>
     */
    inline void SetRelevanceMetrics(Aws::Vector<RelevanceMetric>&& value) { m_relevanceMetricsHasBeenSet = true; m_relevanceMetrics = std::move(value); }

    /**
     * <p>The relevance scores of the generated audience.</p>
     */
    inline AudienceQualityMetrics& WithRelevanceMetrics(const Aws::Vector<RelevanceMetric>& value) { SetRelevanceMetrics(value); return *this;}

    /**
     * <p>The relevance scores of the generated audience.</p>
     */
    inline AudienceQualityMetrics& WithRelevanceMetrics(Aws::Vector<RelevanceMetric>&& value) { SetRelevanceMetrics(std::move(value)); return *this;}

    /**
     * <p>The relevance scores of the generated audience.</p>
     */
    inline AudienceQualityMetrics& AddRelevanceMetrics(const RelevanceMetric& value) { m_relevanceMetricsHasBeenSet = true; m_relevanceMetrics.push_back(value); return *this; }

    /**
     * <p>The relevance scores of the generated audience.</p>
     */
    inline AudienceQualityMetrics& AddRelevanceMetrics(RelevanceMetric&& value) { m_relevanceMetricsHasBeenSet = true; m_relevanceMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RelevanceMetric> m_relevanceMetrics;
    bool m_relevanceMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
