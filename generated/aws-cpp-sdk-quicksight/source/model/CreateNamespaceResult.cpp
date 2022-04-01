/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateNamespaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateNamespaceResult::CreateNamespaceResult() : 
    m_creationStatus(NamespaceStatus::NOT_SET),
    m_identityStore(IdentityStore::NOT_SET),
    m_status(0)
{
}

CreateNamespaceResult::CreateNamespaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_creationStatus(NamespaceStatus::NOT_SET),
    m_identityStore(IdentityStore::NOT_SET),
    m_status(0)
{
  *this = result;
}

CreateNamespaceResult& CreateNamespaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("CapacityRegion"))
  {
    m_capacityRegion = jsonValue.GetString("CapacityRegion");

  }

  if(jsonValue.ValueExists("CreationStatus"))
  {
    m_creationStatus = NamespaceStatusMapper::GetNamespaceStatusForName(jsonValue.GetString("CreationStatus"));

  }

  if(jsonValue.ValueExists("IdentityStore"))
  {
    m_identityStore = IdentityStoreMapper::GetIdentityStoreForName(jsonValue.GetString("IdentityStore"));

  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
