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

#include <aws/servicecatalog/model/DescribeCopyProductStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCopyProductStatusResult::DescribeCopyProductStatusResult() : 
    m_copyProductStatus(CopyProductStatus::NOT_SET)
{
}

DescribeCopyProductStatusResult::DescribeCopyProductStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_copyProductStatus(CopyProductStatus::NOT_SET)
{
  *this = result;
}

DescribeCopyProductStatusResult& DescribeCopyProductStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("CopyProductStatus"))
  {
    m_copyProductStatus = CopyProductStatusMapper::GetCopyProductStatusForName(jsonValue.GetString("CopyProductStatus"));

  }

  if(jsonValue.ValueExists("TargetProductId"))
  {
    m_targetProductId = jsonValue.GetString("TargetProductId");

  }

  if(jsonValue.ValueExists("StatusDetail"))
  {
    m_statusDetail = jsonValue.GetString("StatusDetail");

  }



  return *this;
}
