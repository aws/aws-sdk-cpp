/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AnomalySourceMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

AnomalySourceMetadata::AnomalySourceMetadata() : 
    m_sourceHasBeenSet(false),
    m_sourceResourceNameHasBeenSet(false),
    m_sourceResourceTypeHasBeenSet(false)
{
}

AnomalySourceMetadata::AnomalySourceMetadata(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_sourceResourceNameHasBeenSet(false),
    m_sourceResourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalySourceMetadata& AnomalySourceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceResourceName"))
  {
    m_sourceResourceName = jsonValue.GetString("SourceResourceName");

    m_sourceResourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceResourceType"))
  {
    m_sourceResourceType = jsonValue.GetString("SourceResourceType");

    m_sourceResourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalySourceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_sourceResourceNameHasBeenSet)
  {
   payload.WithString("SourceResourceName", m_sourceResourceName);

  }

  if(m_sourceResourceTypeHasBeenSet)
  {
   payload.WithString("SourceResourceType", m_sourceResourceType);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
