/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/BatchGetRepositoryScanningConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetRepositoryScanningConfigurationResult::BatchGetRepositoryScanningConfigurationResult()
{
}

BatchGetRepositoryScanningConfigurationResult::BatchGetRepositoryScanningConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetRepositoryScanningConfigurationResult& BatchGetRepositoryScanningConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("scanningConfigurations"))
  {
    Aws::Utils::Array<JsonView> scanningConfigurationsJsonList = jsonValue.GetArray("scanningConfigurations");
    for(unsigned scanningConfigurationsIndex = 0; scanningConfigurationsIndex < scanningConfigurationsJsonList.GetLength(); ++scanningConfigurationsIndex)
    {
      m_scanningConfigurations.push_back(scanningConfigurationsJsonList[scanningConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failures"))
  {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
  }



  return *this;
}
