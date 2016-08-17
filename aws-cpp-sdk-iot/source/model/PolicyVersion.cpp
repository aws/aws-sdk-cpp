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
#include <aws/iot/model/PolicyVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

PolicyVersion::PolicyVersion() : 
    m_versionIdHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
}

PolicyVersion::PolicyVersion(const JsonValue& jsonValue) : 
    m_versionIdHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyVersion& PolicyVersion::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("versionId"))
  {
    m_versionId = jsonValue.GetString("versionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDefaultVersion"))
  {
    m_isDefaultVersion = jsonValue.GetBool("isDefaultVersion");

    m_isDefaultVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createDate"))
  {
    m_createDate = jsonValue.GetDouble("createDate");

    m_createDateHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyVersion::Jsonize() const
{
  JsonValue payload;

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("versionId", m_versionId);

  }

  if(m_isDefaultVersionHasBeenSet)
  {
   payload.WithBool("isDefaultVersion", m_isDefaultVersion);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithDouble("createDate", m_createDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws