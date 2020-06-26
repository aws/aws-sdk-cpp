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

#include <aws/sagemaker/model/ModelClientConfig.h>
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

ModelClientConfig::ModelClientConfig() : 
    m_invocationsTimeoutInSeconds(0),
    m_invocationsTimeoutInSecondsHasBeenSet(false),
    m_invocationsMaxRetries(0),
    m_invocationsMaxRetriesHasBeenSet(false)
{
}

ModelClientConfig::ModelClientConfig(JsonView jsonValue) : 
    m_invocationsTimeoutInSeconds(0),
    m_invocationsTimeoutInSecondsHasBeenSet(false),
    m_invocationsMaxRetries(0),
    m_invocationsMaxRetriesHasBeenSet(false)
{
  *this = jsonValue;
}

ModelClientConfig& ModelClientConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvocationsTimeoutInSeconds"))
  {
    m_invocationsTimeoutInSeconds = jsonValue.GetInteger("InvocationsTimeoutInSeconds");

    m_invocationsTimeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationsMaxRetries"))
  {
    m_invocationsMaxRetries = jsonValue.GetInteger("InvocationsMaxRetries");

    m_invocationsMaxRetriesHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelClientConfig::Jsonize() const
{
  JsonValue payload;

  if(m_invocationsTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("InvocationsTimeoutInSeconds", m_invocationsTimeoutInSeconds);

  }

  if(m_invocationsMaxRetriesHasBeenSet)
  {
   payload.WithInteger("InvocationsMaxRetries", m_invocationsMaxRetries);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
