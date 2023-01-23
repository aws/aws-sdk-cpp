/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/StartICD10CMInferenceJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComprehendMedical::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartICD10CMInferenceJobResult::StartICD10CMInferenceJobResult()
{
}

StartICD10CMInferenceJobResult::StartICD10CMInferenceJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartICD10CMInferenceJobResult& StartICD10CMInferenceJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }



  return *this;
}
