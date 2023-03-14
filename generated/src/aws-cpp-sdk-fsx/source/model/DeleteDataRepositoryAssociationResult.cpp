/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteDataRepositoryAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteDataRepositoryAssociationResult::DeleteDataRepositoryAssociationResult() : 
    m_lifecycle(DataRepositoryLifecycle::NOT_SET),
    m_deleteDataInFileSystem(false)
{
}

DeleteDataRepositoryAssociationResult::DeleteDataRepositoryAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lifecycle(DataRepositoryLifecycle::NOT_SET),
    m_deleteDataInFileSystem(false)
{
  *this = result;
}

DeleteDataRepositoryAssociationResult& DeleteDataRepositoryAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = DataRepositoryLifecycleMapper::GetDataRepositoryLifecycleForName(jsonValue.GetString("Lifecycle"));

  }

  if(jsonValue.ValueExists("DeleteDataInFileSystem"))
  {
    m_deleteDataInFileSystem = jsonValue.GetBool("DeleteDataInFileSystem");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
