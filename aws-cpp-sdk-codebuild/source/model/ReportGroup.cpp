/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_lastModifiedHasBeenSet(false)
{
}

ReportGroup::ReportGroup(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ReportType::NOT_SET),
    m_typeHasBeenSet(false),
    m_exportConfigHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
