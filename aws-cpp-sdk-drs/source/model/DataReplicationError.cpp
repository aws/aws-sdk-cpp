/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DataReplicationError.h>
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

DataReplicationError::DataReplicationError() : 
    m_error(DataReplicationErrorString::NOT_SET),
    m_errorHasBeenSet(false),
    m_rawErrorHasBeenSet(false)
{
}

DataReplicationError::DataReplicationError(JsonView jsonValue) : 
    m_error(DataReplicationErrorString::NOT_SET),
    m_errorHasBeenSet(false),
    m_rawErrorHasBeenSet(false)
{
  *this = jsonValue;
}

DataReplicationError& DataReplicationError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("error"))
  {
    m_error = DataReplicationErrorStringMapper::GetDataReplicationErrorStringForName(jsonValue.GetString("error"));

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rawError"))
  {
    m_rawError = jsonValue.GetString("rawError");

    m_rawErrorHasBeenSet = true;
  }

  return *this;
}

JsonValue DataReplicationError::Jsonize() const
{
  JsonValue payload;

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", DataReplicationErrorStringMapper::GetNameForDataReplicationErrorString(m_error));
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
