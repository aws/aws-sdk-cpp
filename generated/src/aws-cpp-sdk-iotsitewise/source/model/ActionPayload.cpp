/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ActionPayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ActionPayload::ActionPayload() : 
    m_stringValueHasBeenSet(false)
{
}

ActionPayload::ActionPayload(JsonView jsonValue) : 
    m_stringValueHasBeenSet(false)
{
  *this = jsonValue;
}

ActionPayload& ActionPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionPayload::Jsonize() const
{
  JsonValue payload;

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
