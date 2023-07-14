/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/DescribeICD10CMInferenceJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComprehendMedical::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeICD10CMInferenceJobResult::DescribeICD10CMInferenceJobResult()
{
}

DescribeICD10CMInferenceJobResult::DescribeICD10CMInferenceJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeICD10CMInferenceJobResult& DescribeICD10CMInferenceJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ComprehendMedicalAsyncJobProperties"))
  {
    m_comprehendMedicalAsyncJobProperties = jsonValue.GetObject("ComprehendMedicalAsyncJobProperties");

  }



  return *this;
}
