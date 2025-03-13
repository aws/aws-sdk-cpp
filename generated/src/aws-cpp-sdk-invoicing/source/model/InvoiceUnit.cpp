/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/InvoiceUnit.h>
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

InvoiceUnit::InvoiceUnit(JsonView jsonValue)
{
  *this = jsonValue;
}

InvoiceUnit& InvoiceUnit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvoiceUnitArn"))
  {
    m_invoiceUnitArn = jsonValue.GetString("InvoiceUnitArn");
    m_invoiceUnitArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvoiceReceiver"))
  {
    m_invoiceReceiver = jsonValue.GetString("InvoiceReceiver");
    m_invoiceReceiverHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaxInheritanceDisabled"))
  {
    m_taxInheritanceDisabled = jsonValue.GetBool("TaxInheritanceDisabled");
    m_taxInheritanceDisabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Rule"))
  {
    m_rule = jsonValue.GetObject("Rule");
    m_ruleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");
    m_lastModifiedHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceUnit::Jsonize() const
{
  JsonValue payload;

  if(m_invoiceUnitArnHasBeenSet)
  {
   payload.WithString("InvoiceUnitArn", m_invoiceUnitArn);

  }

  if(m_invoiceReceiverHasBeenSet)
  {
   payload.WithString("InvoiceReceiver", m_invoiceReceiver);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_taxInheritanceDisabledHasBeenSet)
  {
   payload.WithBool("TaxInheritanceDisabled", m_taxInheritanceDisabled);

  }

  if(m_ruleHasBeenSet)
  {
   payload.WithObject("Rule", m_rule.Jsonize());

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("LastModified", m_lastModified.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
