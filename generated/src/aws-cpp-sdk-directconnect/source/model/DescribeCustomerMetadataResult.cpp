/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeCustomerMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCustomerMetadataResult::DescribeCustomerMetadataResult() : 
    m_nniPartnerType(NniPartnerType::NOT_SET)
{
}

DescribeCustomerMetadataResult::DescribeCustomerMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_nniPartnerType(NniPartnerType::NOT_SET)
{
  *this = result;
}

DescribeCustomerMetadataResult& DescribeCustomerMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agreements"))
  {
    Aws::Utils::Array<JsonView> agreementsJsonList = jsonValue.GetArray("agreements");
    for(unsigned agreementsIndex = 0; agreementsIndex < agreementsJsonList.GetLength(); ++agreementsIndex)
    {
      m_agreements.push_back(agreementsJsonList[agreementsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nniPartnerType"))
  {
    m_nniPartnerType = NniPartnerTypeMapper::GetNniPartnerTypeForName(jsonValue.GetString("nniPartnerType"));

  }



  return *this;
}
