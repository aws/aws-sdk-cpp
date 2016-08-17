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
#include <aws/cloudsearchdomain/model/UploadDocumentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudSearchDomain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UploadDocumentsResult::UploadDocumentsResult() : 
    m_adds(0),
    m_deletes(0)
{
}

UploadDocumentsResult::UploadDocumentsResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_adds(0),
    m_deletes(0)
{
  *this = result;
}

UploadDocumentsResult& UploadDocumentsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

  }

  if(jsonValue.ValueExists("adds"))
  {
    m_adds = jsonValue.GetInt64("adds");

  }

  if(jsonValue.ValueExists("deletes"))
  {
    m_deletes = jsonValue.GetInt64("deletes");

  }

  if(jsonValue.ValueExists("warnings"))
  {
    Array<JsonValue> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsObject());
    }
  }



  return *this;
}
