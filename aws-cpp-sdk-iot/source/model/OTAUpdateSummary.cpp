/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

OTAUpdateSummary::OTAUpdateSummary(const JsonValue& jsonValue) : 
    m_otaUpdateIdHasBeenSet(false),
    m_otaUpdateArnHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

OTAUpdateSummary& OTAUpdateSummary::operator =(const JsonValue& jsonValue)
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
