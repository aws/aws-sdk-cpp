/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12FunctionalGroupHeaders.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

X12FunctionalGroupHeaders::X12FunctionalGroupHeaders(JsonView jsonValue)
{
  *this = jsonValue;
}

X12FunctionalGroupHeaders& X12FunctionalGroupHeaders::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationSenderCode"))
  {
    m_applicationSenderCode = jsonValue.GetString("applicationSenderCode");
    m_applicationSenderCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationReceiverCode"))
  {
    m_applicationReceiverCode = jsonValue.GetString("applicationReceiverCode");
    m_applicationReceiverCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responsibleAgencyCode"))
  {
    m_responsibleAgencyCode = jsonValue.GetString("responsibleAgencyCode");
    m_responsibleAgencyCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue X12FunctionalGroupHeaders::Jsonize() const
{
  JsonValue payload;

  if(m_applicationSenderCodeHasBeenSet)
  {
   payload.WithString("applicationSenderCode", m_applicationSenderCode);

  }

  if(m_applicationReceiverCodeHasBeenSet)
  {
   payload.WithString("applicationReceiverCode", m_applicationReceiverCode);

  }

  if(m_responsibleAgencyCodeHasBeenSet)
  {
   payload.WithString("responsibleAgencyCode", m_responsibleAgencyCode);

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
