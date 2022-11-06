/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/CreateApplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateApplicationResult::CreateApplicationResult() : 
    m_isVerifiedAuthor(false)
{
}

CreateApplicationResult::CreateApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isVerifiedAuthor(false)
{
  *this = result;
}

CreateApplicationResult& CreateApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

  }

  if(jsonValue.ValueExists("author"))
  {
    m_author = jsonValue.GetString("author");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("homePageUrl"))
  {
    m_homePageUrl = jsonValue.GetString("homePageUrl");

  }

  if(jsonValue.ValueExists("isVerifiedAuthor"))
  {
    m_isVerifiedAuthor = jsonValue.GetBool("isVerifiedAuthor");

  }

  if(jsonValue.ValueExists("labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("licenseUrl"))
  {
    m_licenseUrl = jsonValue.GetString("licenseUrl");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("readmeUrl"))
  {
    m_readmeUrl = jsonValue.GetString("readmeUrl");

  }

  if(jsonValue.ValueExists("spdxLicenseId"))
  {
    m_spdxLicenseId = jsonValue.GetString("spdxLicenseId");

  }

  if(jsonValue.ValueExists("verifiedAuthorUrl"))
  {
    m_verifiedAuthorUrl = jsonValue.GetString("verifiedAuthorUrl");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetObject("version");

  }



  return *this;
}
