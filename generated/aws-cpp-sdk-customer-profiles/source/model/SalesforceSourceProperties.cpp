/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/SalesforceSourceProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
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
  if(jsonValue.ValueExists("Object"))
  {
    m_object = jsonValue.GetString("Object");

    m_objectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableDynamicFieldUpdate"))
  {
    m_enableDynamicFieldUpdate = jsonValue.GetBool("EnableDynamicFieldUpdate");

    m_enableDynamicFieldUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeDeletedRecords"))
  {
    m_includeDeletedRecords = jsonValue.GetBool("IncludeDeletedRecords");

    m_includeDeletedRecordsHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceSourceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectHasBeenSet)
  {
   payload.WithString("Object", m_object);

  }

  if(m_enableDynamicFieldUpdateHasBeenSet)
  {
   payload.WithBool("EnableDynamicFieldUpdate", m_enableDynamicFieldUpdate);

  }

  if(m_includeDeletedRecordsHasBeenSet)
  {
   payload.WithBool("IncludeDeletedRecords", m_includeDeletedRecords);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
