/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SalesforceSourceProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SalesforceSourceProperties::SalesforceSourceProperties() : 
    m_objectHasBeenSet(false),
    m_enableDynamicFieldUpdate(false),
    m_enableDynamicFieldUpdateHasBeenSet(false),
    m_includeDeletedRecords(false),
    m_includeDeletedRecordsHasBeenSet(false)
{
}

SalesforceSourceProperties::SalesforceSourceProperties(JsonView jsonValue) : 
    m_objectHasBeenSet(false),
    m_enableDynamicFieldUpdate(false),
    m_enableDynamicFieldUpdateHasBeenSet(false),
    m_includeDeletedRecords(false),
    m_includeDeletedRecordsHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceSourceProperties& SalesforceSourceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("object"))
  {
    m_object = jsonValue.GetString("object");

    m_objectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableDynamicFieldUpdate"))
  {
    m_enableDynamicFieldUpdate = jsonValue.GetBool("enableDynamicFieldUpdate");

    m_enableDynamicFieldUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeDeletedRecords"))
  {
    m_includeDeletedRecords = jsonValue.GetBool("includeDeletedRecords");

    m_includeDeletedRecordsHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceSourceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectHasBeenSet)
  {
   payload.WithString("object", m_object);

  }

  if(m_enableDynamicFieldUpdateHasBeenSet)
  {
   payload.WithBool("enableDynamicFieldUpdate", m_enableDynamicFieldUpdate);

  }

  if(m_includeDeletedRecordsHasBeenSet)
  {
   payload.WithBool("includeDeletedRecords", m_includeDeletedRecords);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
