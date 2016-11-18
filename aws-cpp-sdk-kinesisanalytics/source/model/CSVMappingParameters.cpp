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
#include <aws/kinesisanalytics/model/CSVMappingParameters.h>
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

CSVMappingParameters::CSVMappingParameters() : 
    m_recordRowDelimiterHasBeenSet(false),
    m_recordColumnDelimiterHasBeenSet(false)
{
}

CSVMappingParameters::CSVMappingParameters(const JsonValue& jsonValue) : 
    m_recordRowDelimiterHasBeenSet(false),
    m_recordColumnDelimiterHasBeenSet(false)
{
  *this = jsonValue;
}

CSVMappingParameters& CSVMappingParameters::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RecordRowDelimiter"))
  {
    m_recordRowDelimiter = jsonValue.GetString("RecordRowDelimiter");

    m_recordRowDelimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordColumnDelimiter"))
  {
    m_recordColumnDelimiter = jsonValue.GetString("RecordColumnDelimiter");

    m_recordColumnDelimiterHasBeenSet = true;
  }

  return *this;
}

JsonValue CSVMappingParameters::Jsonize() const
{
  JsonValue payload;

  if(m_recordRowDelimiterHasBeenSet)
  {
   payload.WithString("RecordRowDelimiter", m_recordRowDelimiter);

  }

  if(m_recordColumnDelimiterHasBeenSet)
  {
   payload.WithString("RecordColumnDelimiter", m_recordColumnDelimiter);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws