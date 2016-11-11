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
#include <aws/servicecatalog/model/AccessLevelFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

AccessLevelFilter::AccessLevelFilter() : 
    m_key(AccessLevelFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AccessLevelFilter::AccessLevelFilter(const JsonValue& jsonValue) : 
    m_key(AccessLevelFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AccessLevelFilter& AccessLevelFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = AccessLevelFilterKeyMapper::GetAccessLevelFilterKeyForName(jsonValue.GetString("Key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessLevelFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", AccessLevelFilterKeyMapper::GetNameForAccessLevelFilterKey(m_key));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws