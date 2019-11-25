/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/CreateProvisioningTemplateVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateProvisioningTemplateVersionResult::CreateProvisioningTemplateVersionResult() : 
    m_versionId(0),
    m_isDefaultVersion(false)
{
}

CreateProvisioningTemplateVersionResult::CreateProvisioningTemplateVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_versionId(0),
    m_isDefaultVersion(false)
{
  *this = result;
}

CreateProvisioningTemplateVersionResult& CreateProvisioningTemplateVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("templateArn"))
  {
    m_templateArn = jsonValue.GetString("templateArn");

  }

  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");

  }

  if(jsonValue.ValueExists("versionId"))
  {
    m_versionId = jsonValue.GetInteger("versionId");

  }

  if(jsonValue.ValueExists("isDefaultVersion"))
  {
    m_isDefaultVersion = jsonValue.GetBool("isDefaultVersion");

  }



  return *this;
}
