/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/SourceApiAssociationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

SourceApiAssociationConfig::SourceApiAssociationConfig() : 
    m_mergeType(MergeType::NOT_SET),
    m_mergeTypeHasBeenSet(false)
{
}

SourceApiAssociationConfig::SourceApiAssociationConfig(JsonView jsonValue) : 
    m_mergeType(MergeType::NOT_SET),
    m_mergeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SourceApiAssociationConfig& SourceApiAssociationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mergeType"))
  {
    m_mergeType = MergeTypeMapper::GetMergeTypeForName(jsonValue.GetString("mergeType"));

    m_mergeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceApiAssociationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_mergeTypeHasBeenSet)
  {
   payload.WithString("mergeType", MergeTypeMapper::GetNameForMergeType(m_mergeType));
  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
