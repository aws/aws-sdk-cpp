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

GetInvoiceUnitResult::GetInvoiceUnitResult() : 
    m_taxInheritanceDisabled(false)
{
}

GetInvoiceUnitResult::GetInvoiceUnitResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetInvoiceUnitResult()
{
  *this = result;
}

GetInvoiceUnitResult& GetInvoiceUnitResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InvoiceUnitArn"))
  {
    m_invoiceUnitArn = jsonValue.GetString("InvoiceUnitArn");

  }

  if(jsonValue.ValueExists("InvoiceReceiver"))
  {
    m_invoiceReceiver = jsonValue.GetString("InvoiceReceiver");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("TaxInheritanceDisabled"))
  {
    m_taxInheritanceDisabled = jsonValue.GetBool("TaxInheritanceDisabled");

  }

  if(jsonValue.ValueExists("Rule"))
  {
    m_rule = jsonValue.GetObject("Rule");

  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
