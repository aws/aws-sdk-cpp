/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/schemas/model/DescribeCodeBindingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCodeBindingResult::DescribeCodeBindingResult() : 
    m_status(CodeGenerationStatus::NOT_SET)
{
}

DescribeCodeBindingResult::DescribeCodeBindingResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(CodeGenerationStatus::NOT_SET)
{
  *this = result;
}

DescribeCodeBindingResult& DescribeCodeBindingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
