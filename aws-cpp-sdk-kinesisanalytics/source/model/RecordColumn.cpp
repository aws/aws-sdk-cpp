/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/model/RecordColumn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

RecordColumn::RecordColumn() : 
    m_nameHasBeenSet(false),
    m_mappingHasBeenSet(false),
    m_sqlTypeHasBeenSet(false)
{
}

RecordColumn::RecordColumn(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_mappingHasBeenSet(false),
    m_sqlTypeHasBeenSet(false)
{
  *this = jsonValue;
}

RecordColumn& RecordColumn::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mapping"))
  {
    m_mapping = jsonValue.GetString("Mapping");

    m_mappingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqlType"))
  {
    m_sqlType = jsonValue.GetString("SqlType");

    m_sqlTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordColumn::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_mappingHasBeenSet)
  {
   payload.WithString("Mapping", m_mapping);

  }

  if(m_sqlTypeHasBeenSet)
  {
   payload.WithString("SqlType", m_sqlType);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws