/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/StopReplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StopReplicationResult::StopReplicationResult()
{
}

StopReplicationResult::StopReplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StopReplicationResult& StopReplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sourceServer"))
  {
    m_sourceServer = jsonValue.GetObject("sourceServer");

  }



  return *this;
}
