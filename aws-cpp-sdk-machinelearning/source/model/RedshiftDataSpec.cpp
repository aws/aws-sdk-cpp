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
#include <aws/machinelearning/model/RedshiftDataSpec.h>
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

RedshiftDataSpec::RedshiftDataSpec() : 
    m_databaseInformationHasBeenSet(false),
    m_selectSqlQueryHasBeenSet(false),
    m_databaseCredentialsHasBeenSet(false),
    m_s3StagingLocationHasBeenSet(false),
    m_dataRearrangementHasBeenSet(false),
    m_dataSchemaHasBeenSet(false),
    m_dataSchemaUriHasBeenSet(false)
{
}

RedshiftDataSpec::RedshiftDataSpec(const JsonValue& jsonValue) : 
    m_databaseInformationHasBeenSet(false),
    m_selectSqlQueryHasBeenSet(false),
    m_databaseCredentialsHasBeenSet(false),
    m_s3StagingLocationHasBeenSet(false),
    m_dataRearrangementHasBeenSet(false),
    m_dataSchemaHasBeenSet(false),
    m_dataSchemaUriHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftDataSpec& RedshiftDataSpec::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DatabaseInformation"))
  {
    m_databaseInformation = jsonValue.GetObject("DatabaseInformation");

    m_databaseInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectSqlQuery"))
  {
    m_selectSqlQuery = jsonValue.GetString("SelectSqlQuery");

    m_selectSqlQueryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseCredentials"))
  {
    m_databaseCredentials = jsonValue.GetObject("DatabaseCredentials");

    m_databaseCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3StagingLocation"))
  {
    m_s3StagingLocation = jsonValue.GetString("S3StagingLocation");

    m_s3StagingLocationHasBeenSet = true;
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

  if(jsonValue.ValueExists("DataSchemaUri"))
  {
    m_dataSchemaUri = jsonValue.GetString("DataSchemaUri");

    m_dataSchemaUriHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftDataSpec::Jsonize() const
{
  JsonValue payload;

  if(m_databaseInformationHasBeenSet)
  {
   payload.WithObject("DatabaseInformation", m_databaseInformation.Jsonize());

  }

  if(m_selectSqlQueryHasBeenSet)
  {
   payload.WithString("SelectSqlQuery", m_selectSqlQuery);

  }

  if(m_databaseCredentialsHasBeenSet)
  {
   payload.WithObject("DatabaseCredentials", m_databaseCredentials.Jsonize());

  }

  if(m_s3StagingLocationHasBeenSet)
  {
   payload.WithString("S3StagingLocation", m_s3StagingLocation);

  }

  if(m_dataRearrangementHasBeenSet)
  {
   payload.WithString("DataRearrangement", m_dataRearrangement);

  }

  if(m_dataSchemaHasBeenSet)
  {
   payload.WithString("DataSchema", m_dataSchema);

  }

  if(m_dataSchemaUriHasBeenSet)
  {
   payload.WithString("DataSchemaUri", m_dataSchemaUri);

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws