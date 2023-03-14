/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/CreateFHIRDatastoreResult.h>
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

CreateFHIRDatastoreResult::CreateFHIRDatastoreResult() : 
    m_datastoreStatus(DatastoreStatus::NOT_SET)
{
}

CreateFHIRDatastoreResult::CreateFHIRDatastoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_datastoreStatus(DatastoreStatus::NOT_SET)
{
  *this = result;
}

CreateFHIRDatastoreResult& CreateFHIRDatastoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatastoreId"))
  {
    m_datastoreId = jsonValue.GetString("DatastoreId");

  }

  if(jsonValue.ValueExists("DatastoreArn"))
  {
    m_datastoreArn = jsonValue.GetString("DatastoreArn");

  }

  if(jsonValue.ValueExists("DatastoreStatus"))
  {
    m_datastoreStatus = DatastoreStatusMapper::GetDatastoreStatusForName(jsonValue.GetString("DatastoreStatus"));

  }

  if(jsonValue.ValueExists("DatastoreEndpoint"))
  {
    m_datastoreEndpoint = jsonValue.GetString("DatastoreEndpoint");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
