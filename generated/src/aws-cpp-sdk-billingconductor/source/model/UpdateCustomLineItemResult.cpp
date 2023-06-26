/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdateCustomLineItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateCustomLineItemResult::UpdateCustomLineItemResult() : 
    m_lastModifiedTime(0),
    m_associationSize(0)
{
}

UpdateCustomLineItemResult::UpdateCustomLineItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lastModifiedTime(0),
    m_associationSize(0)
{
  *this = result;
}

UpdateCustomLineItemResult& UpdateCustomLineItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("BillingGroupArn"))
  {
    m_billingGroupArn = jsonValue.GetString("BillingGroupArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ChargeDetails"))
  {
    m_chargeDetails = jsonValue.GetObject("ChargeDetails");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("LastModifiedTime");

  }

  if(jsonValue.ValueExists("AssociationSize"))
  {
    m_associationSize = jsonValue.GetInt64("AssociationSize");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
