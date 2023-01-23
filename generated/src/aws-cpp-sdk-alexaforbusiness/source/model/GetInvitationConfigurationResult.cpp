/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/GetInvitationConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInvitationConfigurationResult::GetInvitationConfigurationResult()
{
}

GetInvitationConfigurationResult::GetInvitationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInvitationConfigurationResult& GetInvitationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationName"))
  {
    m_organizationName = jsonValue.GetString("OrganizationName");

  }

  if(jsonValue.ValueExists("ContactEmail"))
  {
    m_contactEmail = jsonValue.GetString("ContactEmail");

  }

  if(jsonValue.ValueExists("PrivateSkillIds"))
  {
    Aws::Utils::Array<JsonView> privateSkillIdsJsonList = jsonValue.GetArray("PrivateSkillIds");
    for(unsigned privateSkillIdsIndex = 0; privateSkillIdsIndex < privateSkillIdsJsonList.GetLength(); ++privateSkillIdsIndex)
    {
      m_privateSkillIds.push_back(privateSkillIdsJsonList[privateSkillIdsIndex].AsString());
    }
  }



  return *this;
}
