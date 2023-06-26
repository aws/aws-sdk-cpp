/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/IngestedFilesSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

IngestedFilesSummary::IngestedFilesSummary() : 
    m_totalNumberOfFiles(0),
    m_totalNumberOfFilesHasBeenSet(false),
    m_ingestedNumberOfFiles(0),
    m_ingestedNumberOfFilesHasBeenSet(false),
    m_discardedFilesHasBeenSet(false)
{
}

IngestedFilesSummary::IngestedFilesSummary(JsonView jsonValue) : 
    m_totalNumberOfFiles(0),
    m_totalNumberOfFilesHasBeenSet(false),
    m_ingestedNumberOfFiles(0),
    m_ingestedNumberOfFilesHasBeenSet(false),
    m_discardedFilesHasBeenSet(false)
{
  *this = jsonValue;
}

IngestedFilesSummary& IngestedFilesSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalNumberOfFiles"))
  {
    m_totalNumberOfFiles = jsonValue.GetInteger("TotalNumberOfFiles");

    m_totalNumberOfFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IngestedNumberOfFiles"))
  {
    m_ingestedNumberOfFiles = jsonValue.GetInteger("IngestedNumberOfFiles");

    m_ingestedNumberOfFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiscardedFiles"))
  {
    Aws::Utils::Array<JsonView> discardedFilesJsonList = jsonValue.GetArray("DiscardedFiles");
    for(unsigned discardedFilesIndex = 0; discardedFilesIndex < discardedFilesJsonList.GetLength(); ++discardedFilesIndex)
    {
      m_discardedFiles.push_back(discardedFilesJsonList[discardedFilesIndex].AsObject());
    }
    m_discardedFilesHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestedFilesSummary::Jsonize() const
{
  JsonValue payload;

  if(m_totalNumberOfFilesHasBeenSet)
  {
   payload.WithInteger("TotalNumberOfFiles", m_totalNumberOfFiles);

  }

  if(m_ingestedNumberOfFilesHasBeenSet)
  {
   payload.WithInteger("IngestedNumberOfFiles", m_ingestedNumberOfFiles);

  }

  if(m_discardedFilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> discardedFilesJsonList(m_discardedFiles.size());
   for(unsigned discardedFilesIndex = 0; discardedFilesIndex < discardedFilesJsonList.GetLength(); ++discardedFilesIndex)
   {
     discardedFilesJsonList[discardedFilesIndex].AsObject(m_discardedFiles[discardedFilesIndex].Jsonize());
   }
   payload.WithArray("DiscardedFiles", std::move(discardedFilesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
