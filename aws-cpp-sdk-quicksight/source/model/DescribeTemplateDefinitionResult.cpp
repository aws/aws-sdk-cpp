/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeTemplateDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTemplateDefinitionResult::DescribeTemplateDefinitionResult() : 
    m_resourceStatus(ResourceStatus::NOT_SET),
    m_status(0)
{
}

DescribeTemplateDefinitionResult::DescribeTemplateDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_resourceStatus(ResourceStatus::NOT_SET),
    m_status(0)
{
  *this = result;
}

DescribeTemplateDefinitionResult& DescribeTemplateDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("TemplateId"))
  {
    m_templateId = jsonValue.GetString("TemplateId");

  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ResourceStatus"))
  {
    m_resourceStatus = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("ResourceStatus"));

  }

  if(jsonValue.ValueExists("ThemeArn"))
  {
    m_themeArn = jsonValue.GetString("ThemeArn");

  }

  if(jsonValue.ValueExists("Definition"))
  {
    m_definition = jsonValue.GetObject("Definition");

  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
