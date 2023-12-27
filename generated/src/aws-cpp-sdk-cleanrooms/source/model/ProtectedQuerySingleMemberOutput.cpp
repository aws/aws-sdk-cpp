/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQuerySingleMemberOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQuerySingleMemberOutput::ProtectedQuerySingleMemberOutput() : 
    m_accountIdHasBeenSet(false)
{
}

ProtectedQuerySingleMemberOutput::ProtectedQuerySingleMemberOutput(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedQuerySingleMemberOutput& ProtectedQuerySingleMemberOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectedQuerySingleMemberOutput::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
