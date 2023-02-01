/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/CreateDirectoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDirectoryResult::CreateDirectoryResult()
{
}

CreateDirectoryResult::CreateDirectoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDirectoryResult& CreateDirectoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DirectoryArn"))
  {
    m_directoryArn = jsonValue.GetString("DirectoryArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("ObjectIdentifier"))
  {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");

  }

  if(jsonValue.ValueExists("AppliedSchemaArn"))
  {
    m_appliedSchemaArn = jsonValue.GetString("AppliedSchemaArn");

  }



  return *this;
}
