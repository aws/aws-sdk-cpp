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

#include <aws/sagemaker/model/EndpointConfigSummary.h>
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

EndpointConfigSummary::EndpointConfigSummary() : 
    m_endpointConfigNameHasBeenSet(false),
    m_endpointConfigArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

EndpointConfigSummary::EndpointConfigSummary(const JsonValue& jsonValue) : 
    m_endpointConfigNameHasBeenSet(false),
    m_endpointConfigArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointConfigSummary& EndpointConfigSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EndpointConfigName"))
  {
    m_endpointConfigName = jsonValue.GetString("EndpointConfigName");

    m_endpointConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointConfigArn"))
  {
    m_endpointConfigArn = jsonValue.GetString("EndpointConfigArn");

    m_endpointConfigArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_endpointConfigNameHasBeenSet)
  {
   payload.WithString("EndpointConfigName", m_endpointConfigName);

  }

  if(m_endpointConfigArnHasBeenSet)
  {
   payload.WithString("EndpointConfigArn", m_endpointConfigArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
