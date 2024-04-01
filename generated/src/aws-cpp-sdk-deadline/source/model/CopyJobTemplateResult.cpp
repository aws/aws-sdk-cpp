/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CopyJobTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CopyJobTemplateResult::CopyJobTemplateResult() : 
    m_templateType(JobTemplateType::NOT_SET)
{
}

CopyJobTemplateResult::CopyJobTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_templateType(JobTemplateType::NOT_SET)
{
  *this = result;
}

CopyJobTemplateResult& CopyJobTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("templateType"))
  {
    m_templateType = JobTemplateTypeMapper::GetJobTemplateTypeForName(jsonValue.GetString("templateType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
