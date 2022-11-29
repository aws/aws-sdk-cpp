/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/AccessPolicyStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

AccessPolicyStats::AccessPolicyStats() : 
    m_dataPolicyCount(0),
    m_dataPolicyCountHasBeenSet(false)
{
}

AccessPolicyStats::AccessPolicyStats(JsonView jsonValue) : 
    m_dataPolicyCount(0),
    m_dataPolicyCountHasBeenSet(false)
{
  *this = jsonValue;
}

AccessPolicyStats& AccessPolicyStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataPolicyCount"))
  {
    m_dataPolicyCount = jsonValue.GetInt64("DataPolicyCount");

    m_dataPolicyCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessPolicyStats::Jsonize() const
{
  JsonValue payload;

  if(m_dataPolicyCountHasBeenSet)
  {
   payload.WithInt64("DataPolicyCount", m_dataPolicyCount);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
