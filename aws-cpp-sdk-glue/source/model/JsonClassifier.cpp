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

#include <aws/glue/model/JsonClassifier.h>
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

JsonClassifier::JsonClassifier() : 
    m_nameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_jsonPathHasBeenSet(false)
{
}

JsonClassifier::JsonClassifier(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_jsonPathHasBeenSet(false)
{
  *this = jsonValue;
}

JsonClassifier& JsonClassifier::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JsonPath"))
  {
    m_jsonPath = jsonValue.GetString("JsonPath");

    m_jsonPathHasBeenSet = true;
  }

  return *this;
}

JsonValue JsonClassifier::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("Version", m_version);

  }

  if(m_jsonPathHasBeenSet)
  {
   payload.WithString("JsonPath", m_jsonPath);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
