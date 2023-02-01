/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetSensitivityInspectionTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSensitivityInspectionTemplateResult::GetSensitivityInspectionTemplateResult()
{
}

GetSensitivityInspectionTemplateResult::GetSensitivityInspectionTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSensitivityInspectionTemplateResult& GetSensitivityInspectionTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("excludes"))
  {
    m_excludes = jsonValue.GetObject("excludes");

  }

  if(jsonValue.ValueExists("includes"))
  {
    m_includes = jsonValue.GetObject("includes");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("sensitivityInspectionTemplateId"))
  {
    m_sensitivityInspectionTemplateId = jsonValue.GetString("sensitivityInspectionTemplateId");

  }



  return *this;
}
