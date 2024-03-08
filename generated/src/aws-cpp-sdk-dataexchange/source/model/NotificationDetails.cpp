/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/NotificationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

NotificationDetails::NotificationDetails() : 
    m_dataUpdateHasBeenSet(false),
    m_deprecationHasBeenSet(false),
    m_schemaChangeHasBeenSet(false)
{
}

NotificationDetails::NotificationDetails(JsonView jsonValue) : 
    m_dataUpdateHasBeenSet(false),
    m_deprecationHasBeenSet(false),
    m_schemaChangeHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationDetails& NotificationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataUpdate"))
  {
    m_dataUpdate = jsonValue.GetObject("DataUpdate");

    m_dataUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Deprecation"))
  {
    m_deprecation = jsonValue.GetObject("Deprecation");

    m_deprecationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaChange"))
  {
    m_schemaChange = jsonValue.GetObject("SchemaChange");

    m_schemaChangeHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dataUpdateHasBeenSet)
  {
   payload.WithObject("DataUpdate", m_dataUpdate.Jsonize());

  }

  if(m_deprecationHasBeenSet)
  {
   payload.WithObject("Deprecation", m_deprecation.Jsonize());

  }

  if(m_schemaChangeHasBeenSet)
  {
   payload.WithObject("SchemaChange", m_schemaChange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
