/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/LabelParameterVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

LabelParameterVersionResult::LabelParameterVersionResult() : 
    m_parameterVersion(0)
{
}

LabelParameterVersionResult::LabelParameterVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_parameterVersion(0)
{
  *this = result;
}

LabelParameterVersionResult& LabelParameterVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InvalidLabels"))
  {
    Aws::Utils::Array<JsonView> invalidLabelsJsonList = jsonValue.GetArray("InvalidLabels");
    for(unsigned invalidLabelsIndex = 0; invalidLabelsIndex < invalidLabelsJsonList.GetLength(); ++invalidLabelsIndex)
    {
      m_invalidLabels.push_back(invalidLabelsJsonList[invalidLabelsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ParameterVersion"))
  {
    m_parameterVersion = jsonValue.GetInt64("ParameterVersion");

  }



  return *this;
}
