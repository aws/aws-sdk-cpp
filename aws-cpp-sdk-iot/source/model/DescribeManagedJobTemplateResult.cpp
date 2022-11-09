/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeManagedJobTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeManagedJobTemplateResult::DescribeManagedJobTemplateResult()
{
}

DescribeManagedJobTemplateResult::DescribeManagedJobTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeManagedJobTemplateResult& DescribeManagedJobTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");

  }

  if(jsonValue.ValueExists("templateArn"))
  {
    m_templateArn = jsonValue.GetString("templateArn");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("templateVersion"))
  {
    m_templateVersion = jsonValue.GetString("templateVersion");

  }

  if(jsonValue.ValueExists("environments"))
  {
    Aws::Utils::Array<JsonView> environmentsJsonList = jsonValue.GetArray("environments");
    for(unsigned environmentsIndex = 0; environmentsIndex < environmentsJsonList.GetLength(); ++environmentsIndex)
    {
      m_environments.push_back(environmentsJsonList[environmentsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("documentParameters"))
  {
    Aws::Utils::Array<JsonView> documentParametersJsonList = jsonValue.GetArray("documentParameters");
    for(unsigned documentParametersIndex = 0; documentParametersIndex < documentParametersJsonList.GetLength(); ++documentParametersIndex)
    {
      m_documentParameters.push_back(documentParametersJsonList[documentParametersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetString("document");

  }



  return *this;
}
