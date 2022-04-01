/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetProtocolsListResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProtocolsListResult::GetProtocolsListResult()
{
}

GetProtocolsListResult::GetProtocolsListResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetProtocolsListResult& GetProtocolsListResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProtocolsList"))
  {
    m_protocolsList = jsonValue.GetObject("ProtocolsList");

  }

  if(jsonValue.ValueExists("ProtocolsListArn"))
  {
    m_protocolsListArn = jsonValue.GetString("ProtocolsListArn");

  }



  return *this;
}
