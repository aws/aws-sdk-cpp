/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ArtifactSourceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ArtifactSourceType::ArtifactSourceType() : 
    m_sourceIdType(ArtifactSourceIdType::NOT_SET),
    m_sourceIdTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ArtifactSourceType::ArtifactSourceType(JsonView jsonValue) : 
    m_sourceIdType(ArtifactSourceIdType::NOT_SET),
    m_sourceIdTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactSourceType& ArtifactSourceType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceIdType"))
  {
    m_sourceIdType = ArtifactSourceIdTypeMapper::GetArtifactSourceIdTypeForName(jsonValue.GetString("SourceIdType"));

    m_sourceIdTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactSourceType::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIdTypeHasBeenSet)
  {
   payload.WithString("SourceIdType", ArtifactSourceIdTypeMapper::GetNameForArtifactSourceIdType(m_sourceIdType));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
