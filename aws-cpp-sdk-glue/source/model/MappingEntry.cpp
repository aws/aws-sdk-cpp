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

#include <aws/glue/model/MappingEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

MappingEntry::MappingEntry() : 
    m_sourceTableHasBeenSet(false),
    m_sourcePathHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetTableHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_targetTypeHasBeenSet(false)
{
}

MappingEntry::MappingEntry(const JsonValue& jsonValue) : 
    m_sourceTableHasBeenSet(false),
    m_sourcePathHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetTableHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_targetTypeHasBeenSet(false)
{
  *this = jsonValue;
}

MappingEntry& MappingEntry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SourceTable"))
  {
    m_sourceTable = jsonValue.GetString("SourceTable");

    m_sourceTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePath"))
  {
    m_sourcePath = jsonValue.GetString("SourcePath");

    m_sourcePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTable"))
  {
    m_targetTable = jsonValue.GetString("TargetTable");

    m_targetTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetPath"))
  {
    m_targetPath = jsonValue.GetString("TargetPath");

    m_targetPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = jsonValue.GetString("TargetType");

    m_targetTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue MappingEntry::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTableHasBeenSet)
  {
   payload.WithString("SourceTable", m_sourceTable);

  }

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("SourcePath", m_sourcePath);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_targetTableHasBeenSet)
  {
   payload.WithString("TargetTable", m_targetTable);

  }

  if(m_targetPathHasBeenSet)
  {
   payload.WithString("TargetPath", m_targetPath);

  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", m_targetType);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
