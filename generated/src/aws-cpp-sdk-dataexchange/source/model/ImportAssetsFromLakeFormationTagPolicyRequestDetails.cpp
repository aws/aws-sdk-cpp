/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ImportAssetsFromLakeFormationTagPolicyRequestDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

ImportAssetsFromLakeFormationTagPolicyRequestDetails::ImportAssetsFromLakeFormationTagPolicyRequestDetails() : 
    m_catalogIdHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

ImportAssetsFromLakeFormationTagPolicyRequestDetails::ImportAssetsFromLakeFormationTagPolicyRequestDetails(JsonView jsonValue) : 
    m_catalogIdHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
  *this = jsonValue;
}

ImportAssetsFromLakeFormationTagPolicyRequestDetails& ImportAssetsFromLakeFormationTagPolicyRequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

    m_catalogIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetObject("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetObject("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

    m_revisionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportAssetsFromLakeFormationTagPolicyRequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithObject("Database", m_database.Jsonize());

  }

  if(m_tableHasBeenSet)
  {
   payload.WithObject("Table", m_table.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
