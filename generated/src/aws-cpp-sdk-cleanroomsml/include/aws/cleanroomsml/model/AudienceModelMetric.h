/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/AudienceModelMetricType.h>
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
   * <p>The audience model metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AudienceModelMetric">AWS
   * API Reference</a></p>
   */
  class AudienceModelMetric
  {
  public:
    AWS_CLEANROOMSML_API AudienceModelMetric();
    AWS_CLEANROOMSML_API AudienceModelMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API AudienceModelMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of users that were used to generate these model metrics.</p>
     */
    inline int GetForTopKItemPredictions() const{ return m_forTopKItemPredictions; }

    /**
     * <p>The number of users that were used to generate these model metrics.</p>
     */
    inline bool ForTopKItemPredictionsHasBeenSet() const { return m_forTopKItemPredictionsHasBeenSet; }

    /**
     * <p>The number of users that were used to generate these model metrics.</p>
     */
    inline void SetForTopKItemPredictions(int value) { m_forTopKItemPredictionsHasBeenSet = true; m_forTopKItemPredictions = value; }

    /**
     * <p>The number of users that were used to generate these model metrics.</p>
     */
    inline AudienceModelMetric& WithForTopKItemPredictions(int value) { SetForTopKItemPredictions(value); return *this;}


    /**
     * <p>The audience model metric.</p>
     */
    inline const AudienceModelMetricType& GetType() const{ return m_type; }

    /**
     * <p>The audience model metric.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The audience model metric.</p>
     */
    inline void SetType(const AudienceModelMetricType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The audience model metric.</p>
     */
    inline void SetType(AudienceModelMetricType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The audience model metric.</p>
     */
    inline AudienceModelMetric& WithType(const AudienceModelMetricType& value) { SetType(value); return *this;}

    /**
     * <p>The audience model metric.</p>
     */
    inline AudienceModelMetric& WithType(AudienceModelMetricType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The value of the audience model metric</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the audience model metric</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the audience model metric</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the audience model metric</p>
     */
    inline AudienceModelMetric& WithValue(double value) { SetValue(value); return *this;}

  private:

    int m_forTopKItemPredictions;
    bool m_forTopKItemPredictionsHasBeenSet = false;

    AudienceModelMetricType m_type;
    bool m_typeHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
