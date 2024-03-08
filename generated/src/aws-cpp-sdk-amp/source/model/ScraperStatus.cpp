/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/ScraperStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

ScraperStatus::ScraperStatus() : 
    m_statusCode(ScraperStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
}

ScraperStatus::ScraperStatus(JsonView jsonValue) : 
    m_statusCode(ScraperStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

ScraperStatus& ScraperStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = ScraperStatusCodeMapper::GetScraperStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScraperStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", ScraperStatusCodeMapper::GetNameForScraperStatusCode(m_statusCode));
  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
