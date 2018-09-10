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

#include <aws/ssm/model/OutputSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OutputSource::OutputSource() : 
    m_outputSourceIdHasBeenSet(false),
    m_outputSourceTypeHasBeenSet(false)
{
}

OutputSource::OutputSource(JsonView jsonValue) : 
    m_outputSourceIdHasBeenSet(false),
    m_outputSourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

OutputSource& OutputSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputSourceId"))
  {
    m_outputSourceId = jsonValue.GetString("OutputSourceId");

    m_outputSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputSourceType"))
  {
    m_outputSourceType = jsonValue.GetString("OutputSourceType");

    m_outputSourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputSource::Jsonize() const
{
  JsonValue payload;

  if(m_outputSourceIdHasBeenSet)
  {
   payload.WithString("OutputSourceId", m_outputSourceId);

  }

  if(m_outputSourceTypeHasBeenSet)
  {
   payload.WithString("OutputSourceType", m_outputSourceType);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
