/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ExplainabilityInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

ExplainabilityInfo::ExplainabilityInfo() : 
    m_explainabilityArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ExplainabilityInfo::ExplainabilityInfo(JsonView jsonValue) : 
    m_explainabilityArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ExplainabilityInfo& ExplainabilityInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExplainabilityArn"))
  {
    m_explainabilityArn = jsonValue.GetString("ExplainabilityArn");

    m_explainabilityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ExplainabilityInfo::Jsonize() const
{
  JsonValue payload;

  if(m_explainabilityArnHasBeenSet)
  {
   payload.WithString("ExplainabilityArn", m_explainabilityArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
