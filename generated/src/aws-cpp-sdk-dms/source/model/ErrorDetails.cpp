/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ErrorDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ErrorDetails::ErrorDetails() : 
    m_defaultErrorDetailsHasBeenSet(false)
{
}

ErrorDetails::ErrorDetails(JsonView jsonValue) : 
    m_defaultErrorDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorDetails& ErrorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultErrorDetails"))
  {
    m_defaultErrorDetails = jsonValue.GetObject("defaultErrorDetails");

    m_defaultErrorDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_defaultErrorDetailsHasBeenSet)
  {
   payload.WithObject("defaultErrorDetails", m_defaultErrorDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
