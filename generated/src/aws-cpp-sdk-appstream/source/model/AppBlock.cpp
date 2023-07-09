/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AppBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

AppBlock::AppBlock() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_sourceS3LocationHasBeenSet(false),
    m_setupScriptDetailsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_postSetupScriptDetailsHasBeenSet(false),
    m_packagingType(PackagingType::NOT_SET),
    m_packagingTypeHasBeenSet(false),
    m_state(AppBlockState::NOT_SET),
    m_stateHasBeenSet(false),
    m_appBlockErrorsHasBeenSet(false)
{
}

AppBlock::AppBlock(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_sourceS3LocationHasBeenSet(false),
    m_setupScriptDetailsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_postSetupScriptDetailsHasBeenSet(false),
    m_packagingType(PackagingType::NOT_SET),
    m_packagingTypeHasBeenSet(false),
    m_state(AppBlockState::NOT_SET),
    m_stateHasBeenSet(false),
    m_appBlockErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

AppBlock& AppBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceS3Location"))
  {
    m_sourceS3Location = jsonValue.GetObject("SourceS3Location");

    m_sourceS3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SetupScriptDetails"))
  {
    m_setupScriptDetails = jsonValue.GetObject("SetupScriptDetails");

    m_setupScriptDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostSetupScriptDetails"))
  {
    m_postSetupScriptDetails = jsonValue.GetObject("PostSetupScriptDetails");

    m_postSetupScriptDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackagingType"))
  {
    m_packagingType = PackagingTypeMapper::GetPackagingTypeForName(jsonValue.GetString("PackagingType"));

    m_packagingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = AppBlockStateMapper::GetAppBlockStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppBlockErrors"))
  {
    Aws::Utils::Array<JsonView> appBlockErrorsJsonList = jsonValue.GetArray("AppBlockErrors");
    for(unsigned appBlockErrorsIndex = 0; appBlockErrorsIndex < appBlockErrorsJsonList.GetLength(); ++appBlockErrorsIndex)
    {
      m_appBlockErrors.push_back(appBlockErrorsJsonList[appBlockErrorsIndex].AsObject());
    }
    m_appBlockErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue AppBlock::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_sourceS3LocationHasBeenSet)
  {
   payload.WithObject("SourceS3Location", m_sourceS3Location.Jsonize());

  }

  if(m_setupScriptDetailsHasBeenSet)
  {
   payload.WithObject("SetupScriptDetails", m_setupScriptDetails.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_postSetupScriptDetailsHasBeenSet)
  {
   payload.WithObject("PostSetupScriptDetails", m_postSetupScriptDetails.Jsonize());

  }

  if(m_packagingTypeHasBeenSet)
  {
   payload.WithString("PackagingType", PackagingTypeMapper::GetNameForPackagingType(m_packagingType));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", AppBlockStateMapper::GetNameForAppBlockState(m_state));
  }

  if(m_appBlockErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appBlockErrorsJsonList(m_appBlockErrors.size());
   for(unsigned appBlockErrorsIndex = 0; appBlockErrorsIndex < appBlockErrorsJsonList.GetLength(); ++appBlockErrorsIndex)
   {
     appBlockErrorsJsonList[appBlockErrorsIndex].AsObject(m_appBlockErrors[appBlockErrorsIndex].Jsonize());
   }
   payload.WithArray("AppBlockErrors", std::move(appBlockErrorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
