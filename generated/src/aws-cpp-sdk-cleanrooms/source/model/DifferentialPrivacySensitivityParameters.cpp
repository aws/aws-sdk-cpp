/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DifferentialPrivacySensitivityParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

DifferentialPrivacySensitivityParameters::DifferentialPrivacySensitivityParameters() : 
    m_aggregationType(DifferentialPrivacyAggregationType::NOT_SET),
    m_aggregationTypeHasBeenSet(false),
    m_aggregationExpressionHasBeenSet(false),
    m_userContributionLimit(0),
    m_userContributionLimitHasBeenSet(false),
    m_minColumnValue(0.0),
    m_minColumnValueHasBeenSet(false),
    m_maxColumnValue(0.0),
    m_maxColumnValueHasBeenSet(false)
{
}

DifferentialPrivacySensitivityParameters::DifferentialPrivacySensitivityParameters(JsonView jsonValue) : 
    m_aggregationType(DifferentialPrivacyAggregationType::NOT_SET),
    m_aggregationTypeHasBeenSet(false),
    m_aggregationExpressionHasBeenSet(false),
    m_userContributionLimit(0),
    m_userContributionLimitHasBeenSet(false),
    m_minColumnValue(0.0),
    m_minColumnValueHasBeenSet(false),
    m_maxColumnValue(0.0),
    m_maxColumnValueHasBeenSet(false)
{
  *this = jsonValue;
}

DifferentialPrivacySensitivityParameters& DifferentialPrivacySensitivityParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aggregationType"))
  {
    m_aggregationType = DifferentialPrivacyAggregationTypeMapper::GetDifferentialPrivacyAggregationTypeForName(jsonValue.GetString("aggregationType"));

    m_aggregationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aggregationExpression"))
  {
    m_aggregationExpression = jsonValue.GetString("aggregationExpression");

    m_aggregationExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userContributionLimit"))
  {
    m_userContributionLimit = jsonValue.GetInteger("userContributionLimit");

    m_userContributionLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minColumnValue"))
  {
    m_minColumnValue = jsonValue.GetDouble("minColumnValue");

    m_minColumnValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxColumnValue"))
  {
    m_maxColumnValue = jsonValue.GetDouble("maxColumnValue");

    m_maxColumnValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DifferentialPrivacySensitivityParameters::Jsonize() const
{
  JsonValue payload;

  if(m_aggregationTypeHasBeenSet)
  {
   payload.WithString("aggregationType", DifferentialPrivacyAggregationTypeMapper::GetNameForDifferentialPrivacyAggregationType(m_aggregationType));
  }

  if(m_aggregationExpressionHasBeenSet)
  {
   payload.WithString("aggregationExpression", m_aggregationExpression);

  }

  if(m_userContributionLimitHasBeenSet)
  {
   payload.WithInteger("userContributionLimit", m_userContributionLimit);

  }

  if(m_minColumnValueHasBeenSet)
  {
   payload.WithDouble("minColumnValue", m_minColumnValue);

  }

  if(m_maxColumnValueHasBeenSet)
  {
   payload.WithDouble("maxColumnValue", m_maxColumnValue);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
