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

#include <aws/mediatailor/model/Bumper.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

Bumper::Bumper() : 
    m_endUrlHasBeenSet(false),
    m_startUrlHasBeenSet(false)
{
}

Bumper::Bumper(JsonView jsonValue) : 
    m_endUrlHasBeenSet(false),
    m_startUrlHasBeenSet(false)
{
  *this = jsonValue;
}

Bumper& Bumper::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndUrl"))
  {
    m_endUrl = jsonValue.GetString("EndUrl");

    m_endUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartUrl"))
  {
    m_startUrl = jsonValue.GetString("StartUrl");

    m_startUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue Bumper::Jsonize() const
{
  JsonValue payload;

  if(m_endUrlHasBeenSet)
  {
   payload.WithString("EndUrl", m_endUrl);

  }

  if(m_startUrlHasBeenSet)
  {
   payload.WithString("StartUrl", m_startUrl);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
