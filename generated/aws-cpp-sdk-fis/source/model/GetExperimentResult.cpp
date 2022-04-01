/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/GetExperimentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExperimentResult::GetExperimentResult()
{
}

GetExperimentResult::GetExperimentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetExperimentResult& GetExperimentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("experiment"))
  {
    m_experiment = jsonValue.GetObject("experiment");

  }



  return *this;
}
