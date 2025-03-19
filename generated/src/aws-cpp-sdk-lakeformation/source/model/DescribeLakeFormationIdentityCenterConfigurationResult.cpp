/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DescribeLakeFormationIdentityCenterConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLakeFormationIdentityCenterConfigurationResult::DescribeLakeFormationIdentityCenterConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLakeFormationIdentityCenterConfigurationResult& DescribeLakeFormationIdentityCenterConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");
    m_catalogIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceArn"))
  {
    m_instanceArn = jsonValue.GetString("InstanceArn");
    m_instanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExternalFiltering"))
  {
    m_externalFiltering = jsonValue.GetObject("ExternalFiltering");
    m_externalFilteringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShareRecipients"))
  {
    Aws::Utils::Array<JsonView> shareRecipientsJsonList = jsonValue.GetArray("ShareRecipients");
    for(unsigned shareRecipientsIndex = 0; shareRecipientsIndex < shareRecipientsJsonList.GetLength(); ++shareRecipientsIndex)
    {
      m_shareRecipients.push_back(shareRecipientsJsonList[shareRecipientsIndex].AsObject());
    }
    m_shareRecipientsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceShare"))
  {
    m_resourceShare = jsonValue.GetString("ResourceShare");
    m_resourceShareHasBeenSet = true;
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
