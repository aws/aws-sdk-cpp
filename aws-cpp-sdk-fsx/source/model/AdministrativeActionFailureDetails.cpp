/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AdministrativeActionFailureDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

AdministrativeActionFailureDetails::AdministrativeActionFailureDetails() : 
    m_messageHasBeenSet(false)
{
}

AdministrativeActionFailureDetails::AdministrativeActionFailureDetails(JsonView jsonValue) : 
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

AdministrativeActionFailureDetails& AdministrativeActionFailureDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue AdministrativeActionFailureDetails::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
