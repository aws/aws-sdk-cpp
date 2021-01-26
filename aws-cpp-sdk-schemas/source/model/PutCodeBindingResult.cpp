/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/PutCodeBindingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutCodeBindingResult::PutCodeBindingResult() : 
    m_status(CodeGenerationStatus::NOT_SET)
{
}

PutCodeBindingResult::PutCodeBindingResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(CodeGenerationStatus::NOT_SET)
{
  *this = result;
}

PutCodeBindingResult& PutCodeBindingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

  }

  if(jsonValue.ValueExists("SchemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("SchemaVersion");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CodeGenerationStatusMapper::GetCodeGenerationStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
