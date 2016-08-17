/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

BootstrapActionDetail::BootstrapActionDetail(const JsonValue& jsonValue) : 
    m_bootstrapActionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

BootstrapActionDetail& BootstrapActionDetail::operator =(const JsonValue& jsonValue)
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