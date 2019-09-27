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

#include <aws/amplify/model/Artifact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

Artifact::Artifact() : 
    m_artifactFileNameHasBeenSet(false),
    m_artifactIdHasBeenSet(false)
{
}

Artifact::Artifact(JsonView jsonValue) : 
    m_artifactFileNameHasBeenSet(false),
    m_artifactIdHasBeenSet(false)
{
  *this = jsonValue;
}

Artifact& Artifact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("artifactFileName"))
  {
    m_artifactFileName = jsonValue.GetString("artifactFileName");

    m_artifactFileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifactId"))
  {
    m_artifactId = jsonValue.GetString("artifactId");

    m_artifactIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Artifact::Jsonize() const
{
  JsonValue payload;

  if(m_artifactFileNameHasBeenSet)
  {
   payload.WithString("artifactFileName", m_artifactFileName);

  }

  if(m_artifactIdHasBeenSet)
  {
   payload.WithString("artifactId", m_artifactId);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
