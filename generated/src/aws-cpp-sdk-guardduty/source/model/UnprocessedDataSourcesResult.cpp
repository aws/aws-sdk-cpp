/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UnprocessedDataSourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

UnprocessedDataSourcesResult::UnprocessedDataSourcesResult() : 
    m_malwareProtectionHasBeenSet(false)
{
}

UnprocessedDataSourcesResult::UnprocessedDataSourcesResult(JsonView jsonValue) : 
    m_malwareProtectionHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedDataSourcesResult& UnprocessedDataSourcesResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("malwareProtection"))
  {
    m_malwareProtection = jsonValue.GetObject("malwareProtection");

    m_malwareProtectionHasBeenSet = true;
  }

  return *this;
}

JsonValue UnprocessedDataSourcesResult::Jsonize() const
{
  JsonValue payload;

  if(m_malwareProtectionHasBeenSet)
  {
   payload.WithObject("malwareProtection", m_malwareProtection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
