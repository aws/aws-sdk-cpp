/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  JsonView jsonValue = result.GetPayload().View();
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
