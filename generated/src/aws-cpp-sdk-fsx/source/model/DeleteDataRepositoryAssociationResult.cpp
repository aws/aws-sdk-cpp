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

DeleteDataRepositoryAssociationResult::DeleteDataRepositoryAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteDataRepositoryAssociationResult& DeleteDataRepositoryAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");
    m_associationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = DataRepositoryLifecycleMapper::GetDataRepositoryLifecycleForName(jsonValue.GetString("Lifecycle"));
    m_lifecycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeleteDataInFileSystem"))
  {
    m_deleteDataInFileSystem = jsonValue.GetBool("DeleteDataInFileSystem");
    m_deleteDataInFileSystemHasBeenSet = true;
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
