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

#include <aws/synthetics/model/CanaryCodeOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryCodeOutput::CanaryCodeOutput() : 
    m_sourceLocationArnHasBeenSet(false),
    m_handlerHasBeenSet(false)
{
}

CanaryCodeOutput::CanaryCodeOutput(JsonView jsonValue) : 
    m_sourceLocationArnHasBeenSet(false),
    m_handlerHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryCodeOutput& CanaryCodeOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceLocationArn"))
  {
    m_sourceLocationArn = jsonValue.GetString("SourceLocationArn");

    m_sourceLocationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Handler"))
  {
    m_handler = jsonValue.GetString("Handler");

    m_handlerHasBeenSet = true;
  }

  return *this;
}

JsonValue CanaryCodeOutput::Jsonize() const
{
  JsonValue payload;

  if(m_sourceLocationArnHasBeenSet)
  {
   payload.WithString("SourceLocationArn", m_sourceLocationArn);

  }

  if(m_handlerHasBeenSet)
  {
   payload.WithString("Handler", m_handler);

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
