/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> invalidLabelsJsonList = jsonValue.GetArray("InvalidLabels");
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
