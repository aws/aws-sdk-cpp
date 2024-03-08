/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/MetricBasedObservation.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes the observation generated after evaluating the rules and
   * analyzers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityObservation">AWS
   * API Reference</a></p>
   */
  class DataQualityObservation
  {
  public:
    AWS_GLUE_API DataQualityObservation();
    AWS_GLUE_API DataQualityObservation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityObservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the data quality observation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the data quality observation.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the data quality observation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the data quality observation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the data quality observation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the data quality observation.</p>
     */
    inline DataQualityObservation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the data quality observation.</p>
     */
    inline DataQualityObservation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the data quality observation.</p>
     */
    inline DataQualityObservation& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object of type <code>MetricBasedObservation</code> representing the
     * observation that is based on evaluated data quality metrics.</p>
     */
    inline const MetricBasedObservation& GetMetricBasedObservation() const{ return m_metricBasedObservation; }

    /**
     * <p>An object of type <code>MetricBasedObservation</code> representing the
     * observation that is based on evaluated data quality metrics.</p>
     */
    inline bool MetricBasedObservationHasBeenSet() const { return m_metricBasedObservationHasBeenSet; }

    /**
     * <p>An object of type <code>MetricBasedObservation</code> representing the
     * observation that is based on evaluated data quality metrics.</p>
     */
    inline void SetMetricBasedObservation(const MetricBasedObservation& value) { m_metricBasedObservationHasBeenSet = true; m_metricBasedObservation = value; }

    /**
     * <p>An object of type <code>MetricBasedObservation</code> representing the
     * observation that is based on evaluated data quality metrics.</p>
     */
    inline void SetMetricBasedObservation(MetricBasedObservation&& value) { m_metricBasedObservationHasBeenSet = true; m_metricBasedObservation = std::move(value); }

    /**
     * <p>An object of type <code>MetricBasedObservation</code> representing the
     * observation that is based on evaluated data quality metrics.</p>
     */
    inline DataQualityObservation& WithMetricBasedObservation(const MetricBasedObservation& value) { SetMetricBasedObservation(value); return *this;}

    /**
     * <p>An object of type <code>MetricBasedObservation</code> representing the
     * observation that is based on evaluated data quality metrics.</p>
     */
    inline DataQualityObservation& WithMetricBasedObservation(MetricBasedObservation&& value) { SetMetricBasedObservation(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MetricBasedObservation m_metricBasedObservation;
    bool m_metricBasedObservationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
