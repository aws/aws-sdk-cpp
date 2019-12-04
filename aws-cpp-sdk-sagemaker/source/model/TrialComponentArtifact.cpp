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

#include <aws/sagemaker/model/TrialComponentArtifact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TrialComponentArtifact::TrialComponentArtifact() : 
    m_mediaTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

TrialComponentArtifact::TrialComponentArtifact(JsonView jsonValue) : 
    m_mediaTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

TrialComponentArtifact& TrialComponentArtifact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaType"))
  {
    m_mediaType = jsonValue.GetString("MediaType");

    m_mediaTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue TrialComponentArtifact::Jsonize() const
{
  JsonValue payload;

  if(m_mediaTypeHasBeenSet)
  {
   payload.WithString("MediaType", m_mediaType);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
