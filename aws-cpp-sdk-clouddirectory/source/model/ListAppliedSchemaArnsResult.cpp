/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/model/ListAppliedSchemaArnsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppliedSchemaArnsResult::ListAppliedSchemaArnsResult()
{
}

ListAppliedSchemaArnsResult::ListAppliedSchemaArnsResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppliedSchemaArnsResult& ListAppliedSchemaArnsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("SchemaArns"))
  {
    Array<JsonValue> schemaArnsJsonList = jsonValue.GetArray("SchemaArns");
    for(unsigned schemaArnsIndex = 0; schemaArnsIndex < schemaArnsJsonList.GetLength(); ++schemaArnsIndex)
    {
      m_schemaArns.push_back(schemaArnsJsonList[schemaArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
