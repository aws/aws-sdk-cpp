/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DDBELTCatalogAdditionalOptions.h>
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

DDBELTCatalogAdditionalOptions::DDBELTCatalogAdditionalOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DDBELTCatalogAdditionalOptions& DDBELTCatalogAdditionalOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DynamodbExport"))
  {
    m_dynamodbExport = jsonValue.GetString("DynamodbExport");
    m_dynamodbExportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamodbUnnestDDBJson"))
  {
    m_dynamodbUnnestDDBJson = jsonValue.GetBool("DynamodbUnnestDDBJson");
    m_dynamodbUnnestDDBJsonHasBeenSet = true;
  }
  return *this;
}

JsonValue DDBELTCatalogAdditionalOptions::Jsonize() const
{
  JsonValue payload;

  if(m_dynamodbExportHasBeenSet)
  {
   payload.WithString("DynamodbExport", m_dynamodbExport);

  }

  if(m_dynamodbUnnestDDBJsonHasBeenSet)
  {
   payload.WithBool("DynamodbUnnestDDBJson", m_dynamodbUnnestDDBJson);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
