/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/BlockPublicAccessConfigurationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

BlockPublicAccessConfigurationMetadata::BlockPublicAccessConfigurationMetadata() : 
    m_creationDateTimeHasBeenSet(false),
    m_createdByArnHasBeenSet(false)
{
}

BlockPublicAccessConfigurationMetadata::BlockPublicAccessConfigurationMetadata(JsonView jsonValue) : 
    m_creationDateTimeHasBeenSet(false),
    m_createdByArnHasBeenSet(false)
{
  *this = jsonValue;
}

BlockPublicAccessConfigurationMetadata& BlockPublicAccessConfigurationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedByArn"))
  {
    m_createdByArn = jsonValue.GetString("CreatedByArn");

    m_createdByArnHasBeenSet = true;
  }

  return *this;
}

JsonValue BlockPublicAccessConfigurationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_createdByArnHasBeenSet)
  {
   payload.WithString("CreatedByArn", m_createdByArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
