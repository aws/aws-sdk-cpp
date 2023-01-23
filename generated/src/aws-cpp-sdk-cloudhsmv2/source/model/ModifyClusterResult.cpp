/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/ModifyClusterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ModifyClusterResult::ModifyClusterResult()
{
}

ModifyClusterResult::ModifyClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ModifyClusterResult& ModifyClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Cluster"))
  {
    m_cluster = jsonValue.GetObject("Cluster");

  }



  return *this;
}
