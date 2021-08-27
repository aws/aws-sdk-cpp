/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/QueryStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

QueryStatus::QueryStatus() : 
    m_progressPercentage(0.0),
    m_progressPercentageHasBeenSet(false),
    m_cumulativeBytesScanned(0),
    m_cumulativeBytesScannedHasBeenSet(false),
    m_cumulativeBytesMetered(0),
    m_cumulativeBytesMeteredHasBeenSet(false)
{
}

QueryStatus::QueryStatus(JsonView jsonValue) : 
    m_progressPercentage(0.0),
    m_progressPercentageHasBeenSet(false),
    m_cumulativeBytesScanned(0),
    m_cumulativeBytesScannedHasBeenSet(false),
    m_cumulativeBytesMetered(0),
    m_cumulativeBytesMeteredHasBeenSet(false)
{
  *this = jsonValue;
}

QueryStatus& QueryStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProgressPercentage"))
  {
    m_progressPercentage = jsonValue.GetDouble("ProgressPercentage");

    m_progressPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CumulativeBytesScanned"))
  {
    m_cumulativeBytesScanned = jsonValue.GetInt64("CumulativeBytesScanned");

    m_cumulativeBytesScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CumulativeBytesMetered"))
  {
    m_cumulativeBytesMetered = jsonValue.GetInt64("CumulativeBytesMetered");

    m_cumulativeBytesMeteredHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryStatus::Jsonize() const
{
  JsonValue payload;

  if(m_progressPercentageHasBeenSet)
  {
   payload.WithDouble("ProgressPercentage", m_progressPercentage);

  }

  if(m_cumulativeBytesScannedHasBeenSet)
  {
   payload.WithInt64("CumulativeBytesScanned", m_cumulativeBytesScanned);

  }

  if(m_cumulativeBytesMeteredHasBeenSet)
  {
   payload.WithInt64("CumulativeBytesMetered", m_cumulativeBytesMetered);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
