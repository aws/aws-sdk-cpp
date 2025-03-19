/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/GetInvoiceUnitResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInvoiceUnitResult::GetInvoiceUnitResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInvoiceUnitResult& GetInvoiceUnitResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
