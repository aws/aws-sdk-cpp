/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/AccountSources.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

AccountSources::AccountSources() : 
    m_accountHasBeenSet(false),
    m_eventClass(OcsfEventClass::NOT_SET),
    m_eventClassHasBeenSet(false),
    m_logsStatusHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

AccountSources::AccountSources(JsonView jsonValue) : 
    m_accountHasBeenSet(false),
    m_eventClass(OcsfEventClass::NOT_SET),
    m_eventClassHasBeenSet(false),
    m_logsStatusHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AccountSources& AccountSources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("account"))
  {
    m_account = jsonValue.GetString("account");

    m_accountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventClass"))
  {
    m_eventClass = OcsfEventClassMapper::GetOcsfEventClassForName(jsonValue.GetString("eventClass"));

    m_eventClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logsStatus"))
  {
    Aws::Utils::Array<JsonView> logsStatusJsonList = jsonValue.GetArray("logsStatus");
    for(unsigned logsStatusIndex = 0; logsStatusIndex < logsStatusJsonList.GetLength(); ++logsStatusIndex)
    {
      m_logsStatus.push_back(logsStatusJsonList[logsStatusIndex].AsObject());
    }
    m_logsStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = jsonValue.GetString("sourceType");

    m_sourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountSources::Jsonize() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithString("account", m_account);

  }

  if(m_eventClassHasBeenSet)
  {
   payload.WithString("eventClass", OcsfEventClassMapper::GetNameForOcsfEventClass(m_eventClass));
  }

  if(m_logsStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logsStatusJsonList(m_logsStatus.size());
   for(unsigned logsStatusIndex = 0; logsStatusIndex < logsStatusJsonList.GetLength(); ++logsStatusIndex)
   {
     logsStatusJsonList[logsStatusIndex].AsObject(m_logsStatus[logsStatusIndex].Jsonize());
   }
   payload.WithArray("logsStatus", std::move(logsStatusJsonList));

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", m_sourceType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
