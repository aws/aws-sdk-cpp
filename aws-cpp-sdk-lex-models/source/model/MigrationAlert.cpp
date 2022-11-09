/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/MigrationAlert.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

MigrationAlert::MigrationAlert() : 
    m_type(MigrationAlertType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_referenceURLsHasBeenSet(false)
{
}

MigrationAlert::MigrationAlert(JsonView jsonValue) : 
    m_type(MigrationAlertType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_referenceURLsHasBeenSet(false)
{
  *this = jsonValue;
}

MigrationAlert& MigrationAlert::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = MigrationAlertTypeMapper::GetMigrationAlertTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    Aws::Utils::Array<JsonView> detailsJsonList = jsonValue.GetArray("details");
    for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
    {
      m_details.push_back(detailsJsonList[detailsIndex].AsString());
    }
    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceURLs"))
  {
    Aws::Utils::Array<JsonView> referenceURLsJsonList = jsonValue.GetArray("referenceURLs");
    for(unsigned referenceURLsIndex = 0; referenceURLsIndex < referenceURLsJsonList.GetLength(); ++referenceURLsIndex)
    {
      m_referenceURLs.push_back(referenceURLsJsonList[referenceURLsIndex].AsString());
    }
    m_referenceURLsHasBeenSet = true;
  }

  return *this;
}

JsonValue MigrationAlert::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MigrationAlertTypeMapper::GetNameForMigrationAlertType(m_type));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_detailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detailsJsonList(m_details.size());
   for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
   {
     detailsJsonList[detailsIndex].AsString(m_details[detailsIndex]);
   }
   payload.WithArray("details", std::move(detailsJsonList));

  }

  if(m_referenceURLsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referenceURLsJsonList(m_referenceURLs.size());
   for(unsigned referenceURLsIndex = 0; referenceURLsIndex < referenceURLsJsonList.GetLength(); ++referenceURLsIndex)
   {
     referenceURLsJsonList[referenceURLsIndex].AsString(m_referenceURLs[referenceURLsIndex]);
   }
   payload.WithArray("referenceURLs", std::move(referenceURLsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
