/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/BadRequestDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

BadRequestDetails::BadRequestDetails() : 
    m_invalidConfigurationHasBeenSet(false)
{
}

BadRequestDetails::BadRequestDetails(JsonView jsonValue) : 
    m_invalidConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

BadRequestDetails& BadRequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvalidConfiguration"))
  {
    Aws::Utils::Array<JsonView> invalidConfigurationJsonList = jsonValue.GetArray("InvalidConfiguration");
    for(unsigned invalidConfigurationIndex = 0; invalidConfigurationIndex < invalidConfigurationJsonList.GetLength(); ++invalidConfigurationIndex)
    {
      m_invalidConfiguration.push_back(invalidConfigurationJsonList[invalidConfigurationIndex].AsObject());
    }
    m_invalidConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue BadRequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_invalidConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invalidConfigurationJsonList(m_invalidConfiguration.size());
   for(unsigned invalidConfigurationIndex = 0; invalidConfigurationIndex < invalidConfigurationJsonList.GetLength(); ++invalidConfigurationIndex)
   {
     invalidConfigurationJsonList[invalidConfigurationIndex].AsObject(m_invalidConfiguration[invalidConfigurationIndex].Jsonize());
   }
   payload.WithArray("InvalidConfiguration", std::move(invalidConfigurationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
