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
#include <aws/kinesisanalytics/model/JSONMappingParameters.h>
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

JSONMappingParameters::JSONMappingParameters() : 
    m_recordRowPathHasBeenSet(false)
{
}

JSONMappingParameters::JSONMappingParameters(const JsonValue& jsonValue) : 
    m_recordRowPathHasBeenSet(false)
{
  *this = jsonValue;
}

JSONMappingParameters& JSONMappingParameters::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RecordRowPath"))
  {
    m_recordRowPath = jsonValue.GetString("RecordRowPath");

    m_recordRowPathHasBeenSet = true;
  }

  return *this;
}

JsonValue JSONMappingParameters::Jsonize() const
{
  JsonValue payload;

  if(m_recordRowPathHasBeenSet)
  {
   payload.WithString("RecordRowPath", m_recordRowPath);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws