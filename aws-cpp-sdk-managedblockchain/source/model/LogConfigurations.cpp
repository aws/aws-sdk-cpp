/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
