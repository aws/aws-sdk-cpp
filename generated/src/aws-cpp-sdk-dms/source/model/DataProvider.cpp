/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DataProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

DataProvider::DataProvider() : 
    m_dataProviderNameHasBeenSet(false),
    m_dataProviderArnHasBeenSet(false),
    m_dataProviderCreationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

DataProvider::DataProvider(JsonView jsonValue) : 
    m_dataProviderNameHasBeenSet(false),
    m_dataProviderArnHasBeenSet(false),
    m_dataProviderCreationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
  *this = jsonValue;
}

DataProvider& DataProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataProviderName"))
  {
    m_dataProviderName = jsonValue.GetString("DataProviderName");

    m_dataProviderNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataProviderArn"))
  {
    m_dataProviderArn = jsonValue.GetString("DataProviderArn");

    m_dataProviderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataProviderCreationTime"))
  {
    m_dataProviderCreationTime = jsonValue.GetString("DataProviderCreationTime");

    m_dataProviderCreationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = jsonValue.GetString("Engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");

    m_settingsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataProvider::Jsonize() const
{
  JsonValue payload;

  if(m_dataProviderNameHasBeenSet)
  {
   payload.WithString("DataProviderName", m_dataProviderName);

  }

  if(m_dataProviderArnHasBeenSet)
  {
   payload.WithString("DataProviderArn", m_dataProviderArn);

  }

  if(m_dataProviderCreationTimeHasBeenSet)
  {
   payload.WithString("DataProviderCreationTime", m_dataProviderCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
