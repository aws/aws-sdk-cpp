/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CustomerAgreement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

CustomerAgreement::CustomerAgreement() : 
    m_agreementNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CustomerAgreement::CustomerAgreement(JsonView jsonValue) : 
    m_agreementNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerAgreement& CustomerAgreement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agreementName"))
  {
    m_agreementName = jsonValue.GetString("agreementName");

    m_agreementNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerAgreement::Jsonize() const
{
  JsonValue payload;

  if(m_agreementNameHasBeenSet)
  {
   payload.WithString("agreementName", m_agreementName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
