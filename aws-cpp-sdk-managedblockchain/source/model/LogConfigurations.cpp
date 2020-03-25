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

#include <aws/managedblockchain/model/LogConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

LogConfigurations::LogConfigurations() : 
    m_cloudwatchHasBeenSet(false)
{
}

LogConfigurations::LogConfigurations(JsonView jsonValue) : 
    m_cloudwatchHasBeenSet(false)
{
  *this = jsonValue;
}

LogConfigurations& LogConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cloudwatch"))
  {
    m_cloudwatch = jsonValue.GetObject("Cloudwatch");

    m_cloudwatchHasBeenSet = true;
  }

  return *this;
}

JsonValue LogConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_cloudwatchHasBeenSet)
  {
   payload.WithObject("Cloudwatch", m_cloudwatch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
