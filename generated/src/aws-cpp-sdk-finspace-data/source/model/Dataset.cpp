/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/Dataset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

Dataset::Dataset(JsonView jsonValue)
{
  *this = jsonValue;
}

Dataset& Dataset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datasetId"))
  {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetArn"))
  {
    m_datasetArn = jsonValue.GetString("datasetArn");
    m_datasetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetTitle"))
  {
    m_datasetTitle = jsonValue.GetString("datasetTitle");
    m_datasetTitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kind"))
  {
    m_kind = DatasetKindMapper::GetDatasetKindForName(jsonValue.GetString("kind"));
    m_kindHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetDescription"))
  {
    m_datasetDescription = jsonValue.GetString("datasetDescription");
    m_datasetDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ownerInfo"))
  {
    m_ownerInfo = jsonValue.GetObject("ownerInfo");
    m_ownerInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetInt64("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaDefinition"))
  {
    m_schemaDefinition = jsonValue.GetObject("schemaDefinition");
    m_schemaDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alias"))
  {
    m_alias = jsonValue.GetString("alias");
    m_aliasHasBeenSet = true;
  }
  return *this;
}

JsonValue Dataset::Jsonize() const
{
  JsonValue payload;

  if(m_datasetIdHasBeenSet)
  {
   payload.WithString("datasetId", m_datasetId);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("datasetArn", m_datasetArn);

  }

  if(m_datasetTitleHasBeenSet)
  {
   payload.WithString("datasetTitle", m_datasetTitle);

  }

  if(m_kindHasBeenSet)
  {
   payload.WithString("kind", DatasetKindMapper::GetNameForDatasetKind(m_kind));
  }

  if(m_datasetDescriptionHasBeenSet)
  {
   payload.WithString("datasetDescription", m_datasetDescription);

  }

  if(m_ownerInfoHasBeenSet)
  {
   payload.WithObject("ownerInfo", m_ownerInfo.Jsonize());

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithInt64("createTime", m_createTime);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithInt64("lastModifiedTime", m_lastModifiedTime);

  }

  if(m_schemaDefinitionHasBeenSet)
  {
   payload.WithObject("schemaDefinition", m_schemaDefinition.Jsonize());

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("alias", m_alias);

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
