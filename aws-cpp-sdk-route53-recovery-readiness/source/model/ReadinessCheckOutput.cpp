/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/ReadinessCheckOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

ReadinessCheckOutput::ReadinessCheckOutput() : 
    m_readinessCheckArnHasBeenSet(false),
    m_readinessCheckNameHasBeenSet(false),
    m_resourceSetHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ReadinessCheckOutput::ReadinessCheckOutput(JsonView jsonValue) : 
    m_readinessCheckArnHasBeenSet(false),
    m_readinessCheckNameHasBeenSet(false),
    m_resourceSetHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ReadinessCheckOutput& ReadinessCheckOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("readinessCheckArn"))
  {
    m_readinessCheckArn = jsonValue.GetString("readinessCheckArn");

    m_readinessCheckArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readinessCheckName"))
  {
    m_readinessCheckName = jsonValue.GetString("readinessCheckName");

    m_readinessCheckNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceSet"))
  {
    m_resourceSet = jsonValue.GetString("resourceSet");

    m_resourceSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReadinessCheckOutput::Jsonize() const
{
  JsonValue payload;

  if(m_readinessCheckArnHasBeenSet)
  {
   payload.WithString("readinessCheckArn", m_readinessCheckArn);

  }

  if(m_readinessCheckNameHasBeenSet)
  {
   payload.WithString("readinessCheckName", m_readinessCheckName);

  }

  if(m_resourceSetHasBeenSet)
  {
   payload.WithString("resourceSet", m_resourceSet);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
