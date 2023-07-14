/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeLoaResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLoaResult::DescribeLoaResult() : 
    m_loaContentType(LoaContentType::NOT_SET)
{
}

DescribeLoaResult::DescribeLoaResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_loaContentType(LoaContentType::NOT_SET)
{
  *this = result;
}

DescribeLoaResult& DescribeLoaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("loaContent"))
  {
    m_loaContent = HashingUtils::Base64Decode(jsonValue.GetString("loaContent"));
  }

  if(jsonValue.ValueExists("loaContentType"))
  {
    m_loaContentType = LoaContentTypeMapper::GetLoaContentTypeForName(jsonValue.GetString("loaContentType"));

  }



  return *this;
}
