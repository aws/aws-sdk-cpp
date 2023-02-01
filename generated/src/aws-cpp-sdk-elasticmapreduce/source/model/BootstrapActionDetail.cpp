/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/BootstrapActionDetail.h>
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

BootstrapActionDetail::BootstrapActionDetail() : 
    m_bootstrapActionConfigHasBeenSet(false)
{
}

BootstrapActionDetail::BootstrapActionDetail(JsonView jsonValue) : 
    m_bootstrapActionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

BootstrapActionDetail& BootstrapActionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BootstrapActionConfig"))
  {
    m_bootstrapActionConfig = jsonValue.GetObject("BootstrapActionConfig");

    m_bootstrapActionConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue BootstrapActionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_bootstrapActionConfigHasBeenSet)
  {
   payload.WithObject("BootstrapActionConfig", m_bootstrapActionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
