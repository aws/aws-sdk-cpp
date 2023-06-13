/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/JobLogEventData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

JobLogEventData::JobLogEventData() : 
    m_conversionPropertiesHasBeenSet(false),
    m_conversionServerIDHasBeenSet(false),
    m_eventResourceDataHasBeenSet(false),
    m_rawErrorHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_targetInstanceIDHasBeenSet(false)
{
}

JobLogEventData::JobLogEventData(JsonView jsonValue) : 
    m_conversionPropertiesHasBeenSet(false),
    m_conversionServerIDHasBeenSet(false),
    m_eventResourceDataHasBeenSet(false),
    m_rawErrorHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_targetInstanceIDHasBeenSet(false)
{
  *this = jsonValue;
}

JobLogEventData& JobLogEventData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conversionProperties"))
  {
    m_conversionProperties = jsonValue.GetObject("conversionProperties");

    m_conversionPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conversionServerID"))
  {
    m_conversionServerID = jsonValue.GetString("conversionServerID");

    m_conversionServerIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventResourceData"))
  {
    m_eventResourceData = jsonValue.GetObject("eventResourceData");

    m_eventResourceDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rawError"))
  {
    m_rawError = jsonValue.GetString("rawError");

    m_rawErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

    m_sourceServerIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetInstanceID"))
  {
    m_targetInstanceID = jsonValue.GetString("targetInstanceID");

    m_targetInstanceIDHasBeenSet = true;
  }

  return *this;
}

JsonValue JobLogEventData::Jsonize() const
{
  JsonValue payload;

  if(m_conversionPropertiesHasBeenSet)
  {
   payload.WithObject("conversionProperties", m_conversionProperties.Jsonize());

  }

  if(m_conversionServerIDHasBeenSet)
  {
   payload.WithString("conversionServerID", m_conversionServerID);

  }

  if(m_eventResourceDataHasBeenSet)
  {
   payload.WithObject("eventResourceData", m_eventResourceData.Jsonize());

  }

  if(m_rawErrorHasBeenSet)
  {
   payload.WithString("rawError", m_rawError);

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  if(m_targetInstanceIDHasBeenSet)
  {
   payload.WithString("targetInstanceID", m_targetInstanceID);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
