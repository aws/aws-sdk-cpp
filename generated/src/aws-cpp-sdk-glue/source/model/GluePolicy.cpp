/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GluePolicy.h>
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

GluePolicy::GluePolicy() : 
    m_policyInJsonHasBeenSet(false),
    m_policyHashHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

GluePolicy::GluePolicy(JsonView jsonValue) : 
    m_policyInJsonHasBeenSet(false),
    m_policyHashHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

GluePolicy& GluePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyInJson"))
  {
    m_policyInJson = jsonValue.GetString("PolicyInJson");

    m_policyInJsonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyHash"))
  {
    m_policyHash = jsonValue.GetString("PolicyHash");

    m_policyHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetDouble("UpdateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue GluePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyInJsonHasBeenSet)
  {
   payload.WithString("PolicyInJson", m_policyInJson);

  }

  if(m_policyHashHasBeenSet)
  {
   payload.WithString("PolicyHash", m_policyHash);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("UpdateTime", m_updateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
