/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/appmesh/model/HeaderMatchMethod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

HeaderMatchMethod::HeaderMatchMethod() : 
    m_exactHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_suffixHasBeenSet(false)
{
}

HeaderMatchMethod::HeaderMatchMethod(JsonView jsonValue) : 
    m_exactHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_suffixHasBeenSet(false)
{
  *this = jsonValue;
}

HeaderMatchMethod& HeaderMatchMethod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exact"))
  {
    m_exact = jsonValue.GetString("exact");

    m_exactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("range"))
  {
    m_range = jsonValue.GetObject("range");

    m_rangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regex"))
  {
    m_regex = jsonValue.GetString("regex");

    m_regexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suffix"))
  {
    m_suffix = jsonValue.GetString("suffix");

    m_suffixHasBeenSet = true;
  }

  return *this;
}

JsonValue HeaderMatchMethod::Jsonize() const
{
  JsonValue payload;

  if(m_exactHasBeenSet)
  {
   payload.WithString("exact", m_exact);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  if(m_rangeHasBeenSet)
  {
   payload.WithObject("range", m_range.Jsonize());

  }

  if(m_regexHasBeenSet)
  {
   payload.WithString("regex", m_regex);

  }

  if(m_suffixHasBeenSet)
  {
   payload.WithString("suffix", m_suffix);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
