/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/OTAUpdateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

OTAUpdateSummary::OTAUpdateSummary() : 
    m_otaUpdateIdHasBeenSet(false),
    m_otaUpdateArnHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

OTAUpdateSummary::OTAUpdateSummary(JsonView jsonValue) : 
    m_otaUpdateIdHasBeenSet(false),
    m_otaUpdateArnHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

OTAUpdateSummary& OTAUpdateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("otaUpdateId"))
  {
    m_otaUpdateId = jsonValue.GetString("otaUpdateId");

    m_otaUpdateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("otaUpdateArn"))
  {
    m_otaUpdateArn = jsonValue.GetString("otaUpdateArn");

    m_otaUpdateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue OTAUpdateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_otaUpdateIdHasBeenSet)
  {
   payload.WithString("otaUpdateId", m_otaUpdateId);

  }

  if(m_otaUpdateArnHasBeenSet)
  {
   payload.WithString("otaUpdateArn", m_otaUpdateArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
