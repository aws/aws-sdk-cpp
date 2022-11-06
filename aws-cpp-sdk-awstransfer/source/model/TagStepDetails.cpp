/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/TagStepDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

TagStepDetails::TagStepDetails() : 
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_sourceFileLocationHasBeenSet(false)
{
}

TagStepDetails::TagStepDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_sourceFileLocationHasBeenSet(false)
{
  *this = jsonValue;
}

TagStepDetails& TagStepDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceFileLocation"))
  {
    m_sourceFileLocation = jsonValue.GetString("SourceFileLocation");

    m_sourceFileLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue TagStepDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_sourceFileLocationHasBeenSet)
  {
   payload.WithString("SourceFileLocation", m_sourceFileLocation);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
