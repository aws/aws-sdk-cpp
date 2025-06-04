/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/Check.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EVS
{
namespace Model
{

Check::Check(JsonView jsonValue)
{
  *this = jsonValue;
}

Check& Check::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = CheckTypeMapper::GetCheckTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("result"))
  {
    m_result = CheckResultMapper::GetCheckResultForName(jsonValue.GetString("result"));
    m_resultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("impairedSince"))
  {
    m_impairedSince = jsonValue.GetDouble("impairedSince");
    m_impairedSinceHasBeenSet = true;
  }
  return *this;
}

JsonValue Check::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CheckTypeMapper::GetNameForCheckType(m_type));
  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", CheckResultMapper::GetNameForCheckResult(m_result));
  }

  if(m_impairedSinceHasBeenSet)
  {
   payload.WithDouble("impairedSince", m_impairedSince.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws
