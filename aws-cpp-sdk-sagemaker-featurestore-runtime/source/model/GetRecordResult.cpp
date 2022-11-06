/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/GetRecordResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecordResult::GetRecordResult()
{
}

GetRecordResult::GetRecordResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRecordResult& GetRecordResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Record"))
  {
    Aws::Utils::Array<JsonView> recordJsonList = jsonValue.GetArray("Record");
    for(unsigned recordIndex = 0; recordIndex < recordJsonList.GetLength(); ++recordIndex)
    {
      m_record.push_back(recordJsonList[recordIndex].AsObject());
    }
  }



  return *this;
}
