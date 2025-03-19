/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SchemaAnalysisRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

SchemaAnalysisRuleRequest::SchemaAnalysisRuleRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

SchemaAnalysisRuleRequest& SchemaAnalysisRuleRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = AnalysisRuleTypeMapper::GetAnalysisRuleTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue SchemaAnalysisRuleRequest::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AnalysisRuleTypeMapper::GetNameForAnalysisRuleType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
