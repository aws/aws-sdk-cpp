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

#include <aws/personalize/model/BatchInferenceJobOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

BatchInferenceJobOutput::BatchInferenceJobOutput() : 
    m_s3DataDestinationHasBeenSet(false)
{
}

BatchInferenceJobOutput::BatchInferenceJobOutput(JsonView jsonValue) : 
    m_s3DataDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

BatchInferenceJobOutput& BatchInferenceJobOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3DataDestination"))
  {
    m_s3DataDestination = jsonValue.GetObject("s3DataDestination");

    m_s3DataDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchInferenceJobOutput::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataDestinationHasBeenSet)
  {
   payload.WithObject("s3DataDestination", m_s3DataDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
