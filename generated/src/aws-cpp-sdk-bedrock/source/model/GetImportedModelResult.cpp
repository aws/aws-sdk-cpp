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

GetImportedModelResult::GetImportedModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetImportedModelResult& GetImportedModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelName"))
  {
    m_modelName = jsonValue.GetString("modelName");
    m_modelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelDataSource"))
  {
    m_modelDataSource = jsonValue.GetObject("modelDataSource");
    m_modelDataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelArchitecture"))
  {
    m_modelArchitecture = jsonValue.GetString("modelArchitecture");
    m_modelArchitectureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelKmsKeyArn"))
  {
    m_modelKmsKeyArn = jsonValue.GetString("modelKmsKeyArn");
    m_modelKmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instructSupported"))
  {
    m_instructSupported = jsonValue.GetBool("instructSupported");
    m_instructSupportedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customModelUnits"))
  {
    m_customModelUnits = jsonValue.GetObject("customModelUnits");
    m_customModelUnitsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
