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

#include <aws/config/model/ExecutionControls.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ExecutionControls::ExecutionControls() : 
    m_ssmControlsHasBeenSet(false)
{
}

ExecutionControls::ExecutionControls(JsonView jsonValue) : 
    m_ssmControlsHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionControls& ExecutionControls::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SsmControls"))
  {
    m_ssmControls = jsonValue.GetObject("SsmControls");

    m_ssmControlsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionControls::Jsonize() const
{
  JsonValue payload;

  if(m_ssmControlsHasBeenSet)
  {
   payload.WithObject("SsmControls", m_ssmControls.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
