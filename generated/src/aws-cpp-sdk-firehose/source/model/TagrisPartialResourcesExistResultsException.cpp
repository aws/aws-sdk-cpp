/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/TagrisPartialResourcesExistResultsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

TagrisPartialResourcesExistResultsException::TagrisPartialResourcesExistResultsException() : 
    m_messageHasBeenSet(false),
    m_resourceExistenceInformationHasBeenSet(false)
{
}

TagrisPartialResourcesExistResultsException::TagrisPartialResourcesExistResultsException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceExistenceInformationHasBeenSet(false)
{
  *this = jsonValue;
}

TagrisPartialResourcesExistResultsException& TagrisPartialResourcesExistResultsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceExistenceInformation"))
  {
    Aws::Map<Aws::String, JsonView> resourceExistenceInformationJsonMap = jsonValue.GetObject("resourceExistenceInformation").GetAllObjects();
    for(auto& resourceExistenceInformationItem : resourceExistenceInformationJsonMap)
    {
      m_resourceExistenceInformation[resourceExistenceInformationItem.first] = TagrisStatusMapper::GetTagrisStatusForName(resourceExistenceInformationItem.second.AsString());
    }
    m_resourceExistenceInformationHasBeenSet = true;
  }

  return *this;
}

JsonValue TagrisPartialResourcesExistResultsException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_resourceExistenceInformationHasBeenSet)
  {
   JsonValue resourceExistenceInformationJsonMap;
   for(auto& resourceExistenceInformationItem : m_resourceExistenceInformation)
   {
     resourceExistenceInformationJsonMap.WithString(resourceExistenceInformationItem.first, TagrisStatusMapper::GetNameForTagrisStatus(resourceExistenceInformationItem.second));
   }
   payload.WithObject("resourceExistenceInformation", std::move(resourceExistenceInformationJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
