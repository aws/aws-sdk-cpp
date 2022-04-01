/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstanceDataReplicationError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

RecoveryInstanceDataReplicationError::RecoveryInstanceDataReplicationError() : 
    m_error(FailbackReplicationError::NOT_SET),
    m_errorHasBeenSet(false),
    m_rawErrorHasBeenSet(false)
{
}

RecoveryInstanceDataReplicationError::RecoveryInstanceDataReplicationError(JsonView jsonValue) : 
    m_error(FailbackReplicationError::NOT_SET),
    m_errorHasBeenSet(false),
    m_rawErrorHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryInstanceDataReplicationError& RecoveryInstanceDataReplicationError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("error"))
  {
    m_error = FailbackReplicationErrorMapper::GetFailbackReplicationErrorForName(jsonValue.GetString("error"));

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rawError"))
  {
    m_rawError = jsonValue.GetString("rawError");

    m_rawErrorHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryInstanceDataReplicationError::Jsonize() const
{
  JsonValue payload;

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", FailbackReplicationErrorMapper::GetNameForFailbackReplicationError(m_error));
  }

  if(m_rawErrorHasBeenSet)
  {
   payload.WithString("rawError", m_rawError);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
