/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/QueryTransformationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

QueryTransformationConfiguration::QueryTransformationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryTransformationConfiguration& QueryTransformationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = QueryTransformationTypeMapper::GetQueryTransformationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryTransformationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", QueryTransformationTypeMapper::GetNameForQueryTransformationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
