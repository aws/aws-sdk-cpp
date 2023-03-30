/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FeaturedResultsSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

FeaturedResultsSet::FeaturedResultsSet() : 
    m_featuredResultsSetIdHasBeenSet(false),
    m_featuredResultsSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(FeaturedResultsSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_queryTextsHasBeenSet(false),
    m_featuredDocumentsHasBeenSet(false),
    m_lastUpdatedTimestamp(0),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_creationTimestamp(0),
    m_creationTimestampHasBeenSet(false)
{
}

FeaturedResultsSet::FeaturedResultsSet(JsonView jsonValue) : 
    m_featuredResultsSetIdHasBeenSet(false),
    m_featuredResultsSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(FeaturedResultsSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_queryTextsHasBeenSet(false),
    m_featuredDocumentsHasBeenSet(false),
    m_lastUpdatedTimestamp(0),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_creationTimestamp(0),
    m_creationTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

FeaturedResultsSet& FeaturedResultsSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeaturedResultsSetId"))
  {
    m_featuredResultsSetId = jsonValue.GetString("FeaturedResultsSetId");

    m_featuredResultsSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeaturedResultsSetName"))
  {
    m_featuredResultsSetName = jsonValue.GetString("FeaturedResultsSetName");

    m_featuredResultsSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FeaturedResultsSetStatusMapper::GetFeaturedResultsSetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryTexts"))
  {
    Aws::Utils::Array<JsonView> queryTextsJsonList = jsonValue.GetArray("QueryTexts");
    for(unsigned queryTextsIndex = 0; queryTextsIndex < queryTextsJsonList.GetLength(); ++queryTextsIndex)
    {
      m_queryTexts.push_back(queryTextsJsonList[queryTextsIndex].AsString());
    }
    m_queryTextsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeaturedDocuments"))
  {
    Aws::Utils::Array<JsonView> featuredDocumentsJsonList = jsonValue.GetArray("FeaturedDocuments");
    for(unsigned featuredDocumentsIndex = 0; featuredDocumentsIndex < featuredDocumentsJsonList.GetLength(); ++featuredDocumentsIndex)
    {
      m_featuredDocuments.push_back(featuredDocumentsJsonList[featuredDocumentsIndex].AsObject());
    }
    m_featuredDocumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetInt64("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetInt64("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue FeaturedResultsSet::Jsonize() const
{
  JsonValue payload;

  if(m_featuredResultsSetIdHasBeenSet)
  {
   payload.WithString("FeaturedResultsSetId", m_featuredResultsSetId);

  }

  if(m_featuredResultsSetNameHasBeenSet)
  {
   payload.WithString("FeaturedResultsSetName", m_featuredResultsSetName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FeaturedResultsSetStatusMapper::GetNameForFeaturedResultsSetStatus(m_status));
  }

  if(m_queryTextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryTextsJsonList(m_queryTexts.size());
   for(unsigned queryTextsIndex = 0; queryTextsIndex < queryTextsJsonList.GetLength(); ++queryTextsIndex)
   {
     queryTextsJsonList[queryTextsIndex].AsString(m_queryTexts[queryTextsIndex]);
   }
   payload.WithArray("QueryTexts", std::move(queryTextsJsonList));

  }

  if(m_featuredDocumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuredDocumentsJsonList(m_featuredDocuments.size());
   for(unsigned featuredDocumentsIndex = 0; featuredDocumentsIndex < featuredDocumentsJsonList.GetLength(); ++featuredDocumentsIndex)
   {
     featuredDocumentsJsonList[featuredDocumentsIndex].AsObject(m_featuredDocuments[featuredDocumentsIndex].Jsonize());
   }
   payload.WithArray("FeaturedDocuments", std::move(featuredDocumentsJsonList));

  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithInt64("LastUpdatedTimestamp", m_lastUpdatedTimestamp);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithInt64("CreationTimestamp", m_creationTimestamp);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
