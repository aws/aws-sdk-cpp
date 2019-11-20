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

#include <aws/quicksight/model/DataSourceErrorInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DataSourceErrorInfo::DataSourceErrorInfo() : 
    m_type(DataSourceErrorInfoType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

DataSourceErrorInfo::DataSourceErrorInfo(JsonView jsonValue) : 
    m_type(DataSourceErrorInfoType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceErrorInfo& DataSourceErrorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = DataSourceErrorInfoTypeMapper::GetDataSourceErrorInfoTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceErrorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DataSourceErrorInfoTypeMapper::GetNameForDataSourceErrorInfoType(m_type));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
