/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/GetNamespaceDeletionStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNamespaceDeletionStatusResult::GetNamespaceDeletionStatusResult() : 
    m_status(NamespaceDeletionStatus::NOT_SET),
    m_errorCode(NamespaceDeletionStatusErrorCodes::NOT_SET)
{
}

GetNamespaceDeletionStatusResult::GetNamespaceDeletionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(NamespaceDeletionStatus::NOT_SET),
    m_errorCode(NamespaceDeletionStatusErrorCodes::NOT_SET)
{
  *this = result;
}

GetNamespaceDeletionStatusResult& GetNamespaceDeletionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("namespaceArn"))
  {
    m_namespaceArn = jsonValue.GetString("namespaceArn");

  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = NamespaceDeletionStatusMapper::GetNamespaceDeletionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = NamespaceDeletionStatusErrorCodesMapper::GetNamespaceDeletionStatusErrorCodesForName(jsonValue.GetString("errorCode"));

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }



  return *this;
}
