/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ReportGroup::ReportGroup() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ReportType::NOT_SET),
    m_typeHasBeenSet(false),
    m_exportConfigHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_status(ReportGroupStatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ReportGroup::ReportGroup(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ReportType::NOT_SET),
    m_typeHasBeenSet(false),
    m_exportConfigHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_status(ReportGroupStatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ReportGroup& ReportGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ReportTypeMapper::GetReportTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exportConfig"))
  {
    m_exportConfig = jsonValue.GetObject("exportConfig");

    m_exportConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetDouble("lastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReportGroupStatusTypeMapper::GetReportGroupStatusTypeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportGroup::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ReportTypeMapper::GetNameForReportType(m_type));
  }

  if(m_exportConfigHasBeenSet)
  {
   payload.WithObject("exportConfig", m_exportConfig.Jsonize());

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("lastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReportGroupStatusTypeMapper::GetNameForReportGroupStatusType(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
