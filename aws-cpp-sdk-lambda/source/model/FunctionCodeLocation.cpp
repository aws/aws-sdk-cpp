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
#include <aws/lambda/model/FunctionCodeLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

FunctionCodeLocation::FunctionCodeLocation() : 
    m_repositoryTypeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

FunctionCodeLocation::FunctionCodeLocation(const JsonValue& jsonValue) : 
    m_repositoryTypeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionCodeLocation& FunctionCodeLocation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RepositoryType"))
  {
    m_repositoryType = jsonValue.GetString("RepositoryType");

    m_repositoryTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionCodeLocation::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryTypeHasBeenSet)
  {
   payload.WithString("RepositoryType", m_repositoryType);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws