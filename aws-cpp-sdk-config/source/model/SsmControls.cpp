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

#include <aws/config/model/SsmControls.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

SsmControls::SsmControls() : 
    m_concurrentExecutionRatePercentage(0),
    m_concurrentExecutionRatePercentageHasBeenSet(false),
    m_errorPercentage(0),
    m_errorPercentageHasBeenSet(false)
{
}

SsmControls::SsmControls(JsonView jsonValue) : 
    m_concurrentExecutionRatePercentage(0),
    m_concurrentExecutionRatePercentageHasBeenSet(false),
    m_errorPercentage(0),
    m_errorPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

SsmControls& SsmControls::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConcurrentExecutionRatePercentage"))
  {
    m_concurrentExecutionRatePercentage = jsonValue.GetInteger("ConcurrentExecutionRatePercentage");

    m_concurrentExecutionRatePercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorPercentage"))
  {
    m_errorPercentage = jsonValue.GetInteger("ErrorPercentage");

    m_errorPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue SsmControls::Jsonize() const
{
  JsonValue payload;

  if(m_concurrentExecutionRatePercentageHasBeenSet)
  {
   payload.WithInteger("ConcurrentExecutionRatePercentage", m_concurrentExecutionRatePercentage);

  }

  if(m_errorPercentageHasBeenSet)
  {
   payload.WithInteger("ErrorPercentage", m_errorPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
