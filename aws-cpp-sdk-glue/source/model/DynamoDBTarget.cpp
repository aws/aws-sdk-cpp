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

#include <aws/glue/model/DynamoDBTarget.h>
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

DynamoDBTarget::DynamoDBTarget() : 
    m_pathHasBeenSet(false),
    m_scanAll(false),
    m_scanAllHasBeenSet(false),
    m_scanRate(0.0),
    m_scanRateHasBeenSet(false)
{
}

DynamoDBTarget::DynamoDBTarget(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_scanAll(false),
    m_scanAllHasBeenSet(false),
    m_scanRate(0.0),
    m_scanRateHasBeenSet(false)
{
  *this = jsonValue;
}

DynamoDBTarget& DynamoDBTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanAll"))
  {
    m_scanAll = jsonValue.GetBool("scanAll");

    m_scanAllHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanRate"))
  {
    m_scanRate = jsonValue.GetDouble("scanRate");

    m_scanRateHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamoDBTarget::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_scanAllHasBeenSet)
  {
   payload.WithBool("scanAll", m_scanAll);

  }

  if(m_scanRateHasBeenSet)
  {
   payload.WithDouble("scanRate", m_scanRate);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
