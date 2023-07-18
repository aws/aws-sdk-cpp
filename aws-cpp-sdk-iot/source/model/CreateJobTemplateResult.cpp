/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateJobTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateJobTemplateResult::CreateJobTemplateResult()
{
}

CreateJobTemplateResult::CreateJobTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateJobTemplateResult& CreateJobTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobTemplateArn"))
  {
    m_jobTemplateArn = jsonValue.GetString("jobTemplateArn");

  }

  if(jsonValue.ValueExists("jobTemplateId"))
  {
    m_jobTemplateId = jsonValue.GetString("jobTemplateId");

  }



  return *this;
}
