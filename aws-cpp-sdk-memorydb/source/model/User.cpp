/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/User.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

User::User() : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_accessStringHasBeenSet(false),
    m_aCLNamesHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
}

User::User(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_accessStringHasBeenSet(false),
    m_aCLNamesHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessString"))
  {
    m_accessString = jsonValue.GetString("AccessString");

    m_accessStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ACLNames"))
  {
    Aws::Utils::Array<JsonView> aCLNamesJsonList = jsonValue.GetArray("ACLNames");
    for(unsigned aCLNamesIndex = 0; aCLNamesIndex < aCLNamesJsonList.GetLength(); ++aCLNamesIndex)
    {
      m_aCLNames.push_back(aCLNamesJsonList[aCLNamesIndex].AsString());
    }
    m_aCLNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumEngineVersion"))
  {
    m_minimumEngineVersion = jsonValue.GetString("MinimumEngineVersion");

    m_minimumEngineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Authentication"))
  {
    m_authentication = jsonValue.GetObject("Authentication");

    m_authenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  return *this;
}

JsonValue User::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_accessStringHasBeenSet)
  {
   payload.WithString("AccessString", m_accessString);

  }

  if(m_aCLNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aCLNamesJsonList(m_aCLNames.size());
   for(unsigned aCLNamesIndex = 0; aCLNamesIndex < aCLNamesJsonList.GetLength(); ++aCLNamesIndex)
   {
     aCLNamesJsonList[aCLNamesIndex].AsString(m_aCLNames[aCLNamesIndex]);
   }
   payload.WithArray("ACLNames", std::move(aCLNamesJsonList));

  }

  if(m_minimumEngineVersionHasBeenSet)
  {
   payload.WithString("MinimumEngineVersion", m_minimumEngineVersion);

  }

  if(m_authenticationHasBeenSet)
  {
   payload.WithObject("Authentication", m_authentication.Jsonize());

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
