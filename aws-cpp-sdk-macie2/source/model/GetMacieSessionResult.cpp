/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetMacieSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMacieSessionResult::GetMacieSessionResult() : 
    m_findingPublishingFrequency(FindingPublishingFrequency::NOT_SET),
    m_status(MacieStatus::NOT_SET)
{
}

GetMacieSessionResult::GetMacieSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_findingPublishingFrequency(FindingPublishingFrequency::NOT_SET),
    m_status(MacieStatus::NOT_SET)
{
  *this = result;
}

GetMacieSessionResult& GetMacieSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("findingPublishingFrequency"))
  {
    m_findingPublishingFrequency = FindingPublishingFrequencyMapper::GetFindingPublishingFrequencyForName(jsonValue.GetString("findingPublishingFrequency"));

  }

  if(jsonValue.ValueExists("serviceRole"))
  {
    m_serviceRole = jsonValue.GetString("serviceRole");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MacieStatusMapper::GetMacieStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }



  return *this;
}
