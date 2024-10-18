/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetImportedModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImportedModelResult::GetImportedModelResult() : 
    m_instructSupported(false)
{
}

GetImportedModelResult::GetImportedModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetImportedModelResult()
{
  *this = result;
}

GetImportedModelResult& GetImportedModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");

  }

  if(jsonValue.ValueExists("modelName"))
  {
    m_modelName = jsonValue.GetString("modelName");

  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

  }

  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

  }

  if(jsonValue.ValueExists("modelDataSource"))
  {
    m_modelDataSource = jsonValue.GetObject("modelDataSource");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("modelArchitecture"))
  {
    m_modelArchitecture = jsonValue.GetString("modelArchitecture");

  }

  if(jsonValue.ValueExists("modelKmsKeyArn"))
  {
    m_modelKmsKeyArn = jsonValue.GetString("modelKmsKeyArn");

  }

  if(jsonValue.ValueExists("instructSupported"))
  {
    m_instructSupported = jsonValue.GetBool("instructSupported");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
