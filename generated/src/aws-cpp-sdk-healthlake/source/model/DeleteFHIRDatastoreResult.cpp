/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/DeleteFHIRDatastoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteFHIRDatastoreResult::DeleteFHIRDatastoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteFHIRDatastoreResult& DeleteFHIRDatastoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatastoreId"))
  {
    m_datastoreId = jsonValue.GetString("DatastoreId");
    m_datastoreIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatastoreArn"))
  {
    m_datastoreArn = jsonValue.GetString("DatastoreArn");
    m_datastoreArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatastoreStatus"))
  {
    m_datastoreStatus = DatastoreStatusMapper::GetDatastoreStatusForName(jsonValue.GetString("DatastoreStatus"));
    m_datastoreStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatastoreEndpoint"))
  {
    m_datastoreEndpoint = jsonValue.GetString("DatastoreEndpoint");
    m_datastoreEndpointHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
