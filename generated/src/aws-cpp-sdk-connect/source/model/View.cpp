/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/View.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

View::View() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ViewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(ViewType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_versionDescriptionHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_viewContentSha256HasBeenSet(false)
{
}

View::View(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ViewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(ViewType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_versionDescriptionHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_viewContentSha256HasBeenSet(false)
{
  *this = jsonValue;
}

View& View::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ViewStatusMapper::GetViewStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ViewTypeMapper::GetViewTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionDescription"))
  {
    m_versionDescription = jsonValue.GetString("VersionDescription");

    m_versionDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetObject("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViewContentSha256"))
  {
    m_viewContentSha256 = jsonValue.GetString("ViewContentSha256");

    m_viewContentSha256HasBeenSet = true;
  }

  return *this;
}

JsonValue View::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ViewStatusMapper::GetNameForViewStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ViewTypeMapper::GetNameForViewType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("VersionDescription", m_versionDescription);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("Content", m_content.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_viewContentSha256HasBeenSet)
  {
   payload.WithString("ViewContentSha256", m_viewContentSha256);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
