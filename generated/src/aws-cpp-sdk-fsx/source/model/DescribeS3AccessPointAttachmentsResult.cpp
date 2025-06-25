/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeS3AccessPointAttachmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeS3AccessPointAttachmentsResult::DescribeS3AccessPointAttachmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeS3AccessPointAttachmentsResult& DescribeS3AccessPointAttachmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("S3AccessPointAttachments"))
  {
    Aws::Utils::Array<JsonView> s3AccessPointAttachmentsJsonList = jsonValue.GetArray("S3AccessPointAttachments");
    for(unsigned s3AccessPointAttachmentsIndex = 0; s3AccessPointAttachmentsIndex < s3AccessPointAttachmentsJsonList.GetLength(); ++s3AccessPointAttachmentsIndex)
    {
      m_s3AccessPointAttachments.push_back(s3AccessPointAttachmentsJsonList[s3AccessPointAttachmentsIndex].AsObject());
    }
    m_s3AccessPointAttachmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
