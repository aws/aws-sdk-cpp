/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactSearchSummaryAgentInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ContactSearchSummaryAgentInfo::ContactSearchSummaryAgentInfo() : 
    m_idHasBeenSet(false),
    m_connectedToAgentTimestampHasBeenSet(false)
{
}

ContactSearchSummaryAgentInfo::ContactSearchSummaryAgentInfo(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_connectedToAgentTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ContactSearchSummaryAgentInfo& ContactSearchSummaryAgentInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectedToAgentTimestamp"))
  {
    m_connectedToAgentTimestamp = jsonValue.GetDouble("ConnectedToAgentTimestamp");

    m_connectedToAgentTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactSearchSummaryAgentInfo::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_connectedToAgentTimestampHasBeenSet)
  {
   payload.WithDouble("ConnectedToAgentTimestamp", m_connectedToAgentTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
