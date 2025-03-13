/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisconnectDetails.h>
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

DisconnectDetails::DisconnectDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

DisconnectDetails& DisconnectDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PotentialDisconnectIssue"))
  {
    m_potentialDisconnectIssue = jsonValue.GetString("PotentialDisconnectIssue");
    m_potentialDisconnectIssueHasBeenSet = true;
  }
  return *this;
}

JsonValue DisconnectDetails::Jsonize() const
{
  JsonValue payload;

  if(m_potentialDisconnectIssueHasBeenSet)
  {
   payload.WithString("PotentialDisconnectIssue", m_potentialDisconnectIssue);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
