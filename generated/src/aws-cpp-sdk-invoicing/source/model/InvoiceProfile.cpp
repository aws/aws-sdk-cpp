/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/InvoiceProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Invoicing
{
namespace Model
{

InvoiceProfile::InvoiceProfile(JsonView jsonValue)
{
  *this = jsonValue;
}

InvoiceProfile& InvoiceProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReceiverName"))
  {
    m_receiverName = jsonValue.GetString("ReceiverName");
    m_receiverNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReceiverAddress"))
  {
    m_receiverAddress = jsonValue.GetObject("ReceiverAddress");
    m_receiverAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReceiverEmail"))
  {
    m_receiverEmail = jsonValue.GetString("ReceiverEmail");
    m_receiverEmailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetString("Issuer");
    m_issuerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaxRegistrationNumber"))
  {
    m_taxRegistrationNumber = jsonValue.GetString("TaxRegistrationNumber");
    m_taxRegistrationNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceProfile::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_receiverNameHasBeenSet)
  {
   payload.WithString("ReceiverName", m_receiverName);

  }

  if(m_receiverAddressHasBeenSet)
  {
   payload.WithObject("ReceiverAddress", m_receiverAddress.Jsonize());

  }

  if(m_receiverEmailHasBeenSet)
  {
   payload.WithString("ReceiverEmail", m_receiverEmail);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("Issuer", m_issuer);

  }

  if(m_taxRegistrationNumberHasBeenSet)
  {
   payload.WithString("TaxRegistrationNumber", m_taxRegistrationNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
