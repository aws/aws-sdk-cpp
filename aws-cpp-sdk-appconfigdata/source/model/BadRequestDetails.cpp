/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/model/BadRequestDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfigData
{
namespace Model
{

BadRequestDetails::BadRequestDetails() : 
    m_invalidParametersHasBeenSet(false)
{
}

BadRequestDetails::BadRequestDetails(JsonView jsonValue) : 
    m_invalidParametersHasBeenSet(false)
{
  *this = jsonValue;
}

BadRequestDetails& BadRequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvalidParameters"))
  {
    Aws::Map<Aws::String, JsonView> invalidParametersJsonMap = jsonValue.GetObject("InvalidParameters").GetAllObjects();
    for(auto& invalidParametersItem : invalidParametersJsonMap)
    {
      m_invalidParameters[invalidParametersItem.first] = invalidParametersItem.second.AsObject();
    }
    m_invalidParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue BadRequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_invalidParametersHasBeenSet)
  {
   JsonValue invalidParametersJsonMap;
   for(auto& invalidParametersItem : m_invalidParameters)
   {
     invalidParametersJsonMap.WithObject(invalidParametersItem.first, invalidParametersItem.second.Jsonize());
   }
   payload.WithObject("InvalidParameters", std::move(invalidParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
