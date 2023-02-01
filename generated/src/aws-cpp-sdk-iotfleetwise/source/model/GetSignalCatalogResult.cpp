/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetSignalCatalogResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSignalCatalogResult::GetSignalCatalogResult()
{
}

GetSignalCatalogResult::GetSignalCatalogResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSignalCatalogResult& GetSignalCatalogResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("nodeCounts"))
  {
    m_nodeCounts = jsonValue.GetObject("nodeCounts");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("lastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("lastModificationTime");

  }



  return *this;
}
