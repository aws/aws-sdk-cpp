/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/Receipt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

Receipt::Receipt() : 
    m_contactChannelArnHasBeenSet(false),
    m_receiptType(ReceiptType::NOT_SET),
    m_receiptTypeHasBeenSet(false),
    m_receiptInfoHasBeenSet(false),
    m_receiptTimeHasBeenSet(false)
{
}

Receipt::Receipt(JsonView jsonValue) : 
    m_contactChannelArnHasBeenSet(false),
    m_receiptType(ReceiptType::NOT_SET),
    m_receiptTypeHasBeenSet(false),
    m_receiptInfoHasBeenSet(false),
    m_receiptTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Receipt& Receipt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactChannelArn"))
  {
    m_contactChannelArn = jsonValue.GetString("ContactChannelArn");

    m_contactChannelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReceiptType"))
  {
    m_receiptType = ReceiptTypeMapper::GetReceiptTypeForName(jsonValue.GetString("ReceiptType"));

    m_receiptTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReceiptInfo"))
  {
    m_receiptInfo = jsonValue.GetString("ReceiptInfo");

    m_receiptInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReceiptTime"))
  {
    m_receiptTime = jsonValue.GetDouble("ReceiptTime");

    m_receiptTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Receipt::Jsonize() const
{
  JsonValue payload;

  if(m_contactChannelArnHasBeenSet)
  {
   payload.WithString("ContactChannelArn", m_contactChannelArn);

  }

  if(m_receiptTypeHasBeenSet)
  {
   payload.WithString("ReceiptType", ReceiptTypeMapper::GetNameForReceiptType(m_receiptType));
  }

  if(m_receiptInfoHasBeenSet)
  {
   payload.WithString("ReceiptInfo", m_receiptInfo);

  }

  if(m_receiptTimeHasBeenSet)
  {
   payload.WithDouble("ReceiptTime", m_receiptTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
