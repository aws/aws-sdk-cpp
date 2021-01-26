/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DescribePiiEntitiesDetectionJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePiiEntitiesDetectionJobResult::DescribePiiEntitiesDetectionJobResult()
{
}

DescribePiiEntitiesDetectionJobResult::DescribePiiEntitiesDetectionJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePiiEntitiesDetectionJobResult& DescribePiiEntitiesDetectionJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PiiEntitiesDetectionJobProperties"))
  {
    m_piiEntitiesDetectionJobProperties = jsonValue.GetObject("PiiEntitiesDetectionJobProperties");

  }



  return *this;
}
