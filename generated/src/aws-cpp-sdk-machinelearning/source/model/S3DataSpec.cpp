/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

S3DataSpec::S3DataSpec(JsonView jsonValue) : 
    m_dataLocationS3HasBeenSet(false),
    m_dataRearrangementHasBeenSet(false),
    m_dataSchemaHasBeenSet(false),
    m_dataSchemaLocationS3HasBeenSet(false)
{
  *this = jsonValue;
}

S3DataSpec& S3DataSpec::operator =(JsonView jsonValue)
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
