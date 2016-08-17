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
#include <aws/machinelearning/model/S3DataSpec.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

S3DataSpec::S3DataSpec() : 
    m_dataLocationS3HasBeenSet(false),
    m_dataRearrangementHasBeenSet(false),
    m_dataSchemaHasBeenSet(false),
    m_dataSchemaLocationS3HasBeenSet(false)
{
}

S3DataSpec::S3DataSpec(const JsonValue& jsonValue) : 
    m_dataLocationS3HasBeenSet(false),
    m_dataRearrangementHasBeenSet(false),
    m_dataSchemaHasBeenSet(false),
    m_dataSchemaLocationS3HasBeenSet(false)
{
  *this = jsonValue;
}

S3DataSpec& S3DataSpec::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DataLocationS3"))
  {
    m_dataLocationS3 = jsonValue.GetString("DataLocationS3");

    m_dataLocationS3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataRearrangement"))
  {
    m_dataRearrangement = jsonValue.GetString("DataRearrangement");

    m_dataRearrangementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSchema"))
  {
    m_dataSchema = jsonValue.GetString("DataSchema");

    m_dataSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSchemaLocationS3"))
  {
    m_dataSchemaLocationS3 = jsonValue.GetString("DataSchemaLocationS3");

    m_dataSchemaLocationS3HasBeenSet = true;
  }

  return *this;
}

JsonValue S3DataSpec::Jsonize() const
{
  JsonValue payload;

  if(m_dataLocationS3HasBeenSet)
  {
   payload.WithString("DataLocationS3", m_dataLocationS3);

  }

  if(m_dataRearrangementHasBeenSet)
  {
   payload.WithString("DataRearrangement", m_dataRearrangement);

  }

  if(m_dataSchemaHasBeenSet)
  {
   payload.WithString("DataSchema", m_dataSchema);

  }

  if(m_dataSchemaLocationS3HasBeenSet)
  {
   payload.WithString("DataSchemaLocationS3", m_dataSchemaLocationS3);

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws