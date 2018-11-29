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

#include <aws/serverlessrepo/model/ApplicationDependencySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

ApplicationDependencySummary::ApplicationDependencySummary() : 
    m_applicationIdHasBeenSet(false),
    m_semanticVersionHasBeenSet(false)
{
}

ApplicationDependencySummary::ApplicationDependencySummary(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_semanticVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationDependencySummary& ApplicationDependencySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("semanticVersion"))
  {
    m_semanticVersion = jsonValue.GetString("semanticVersion");

    m_semanticVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationDependencySummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  return payload;
}

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
