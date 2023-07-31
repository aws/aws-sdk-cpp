/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ApiConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ApiConfiguration::ApiConfiguration() : 
    m_graphQLConfigHasBeenSet(false),
    m_dataStoreConfigHasBeenSet(false),
    m_noApiConfigHasBeenSet(false)
{
}

ApiConfiguration::ApiConfiguration(JsonView jsonValue) : 
    m_graphQLConfigHasBeenSet(false),
    m_dataStoreConfigHasBeenSet(false),
    m_noApiConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ApiConfiguration& ApiConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("graphQLConfig"))
  {
    m_graphQLConfig = jsonValue.GetObject("graphQLConfig");

    m_graphQLConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataStoreConfig"))
  {
    m_dataStoreConfig = jsonValue.GetObject("dataStoreConfig");

    m_dataStoreConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noApiConfig"))
  {
    m_noApiConfig = jsonValue.GetObject("noApiConfig");

    m_noApiConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_graphQLConfigHasBeenSet)
  {
   payload.WithObject("graphQLConfig", m_graphQLConfig.Jsonize());

  }

  if(m_dataStoreConfigHasBeenSet)
  {
   payload.WithObject("dataStoreConfig", m_dataStoreConfig.Jsonize());

  }

  if(m_noApiConfigHasBeenSet)
  {
   payload.WithObject("noApiConfig", m_noApiConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
