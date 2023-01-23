/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetExternalDataViewAccessDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExternalDataViewAccessDetailsResult::GetExternalDataViewAccessDetailsResult()
{
}

GetExternalDataViewAccessDetailsResult::GetExternalDataViewAccessDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetExternalDataViewAccessDetailsResult& GetExternalDataViewAccessDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("credentials"))
  {
    m_credentials = jsonValue.GetObject("credentials");

  }

  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

  }



  return *this;
}
