/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/model/UploadDocumentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
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

UploadDocumentsResult::UploadDocumentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_adds(0),
    m_deletes(0)
{
  *this = result;
}

UploadDocumentsResult& UploadDocumentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsObject());
    }
  }



  return *this;
}
