/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

OpenZFSClientConfiguration::OpenZFSClientConfiguration() : 
    m_clientsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

OpenZFSClientConfiguration::OpenZFSClientConfiguration(JsonView jsonValue) : 
    m_clientsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
  *this = jsonValue;
}

OpenZFSClientConfiguration& OpenZFSClientConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Clients"))
  {
    m_clients = jsonValue.GetString("Clients");

    m_clientsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("Options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(optionsJsonList[optionsIndex].AsString());
    }
    m_optionsHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenZFSClientConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_clientsHasBeenSet)
  {
   payload.WithString("Clients", m_clients);

  }

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsString(m_options[optionsIndex]);
   }
   payload.WithArray("Options", std::move(optionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
