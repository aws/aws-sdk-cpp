/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/GetDASHStreamingSessionURLResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDASHStreamingSessionURLResult::GetDASHStreamingSessionURLResult()
{
}

GetDASHStreamingSessionURLResult::GetDASHStreamingSessionURLResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDASHStreamingSessionURLResult& GetDASHStreamingSessionURLResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DASHStreamingSessionURL"))
  {
    m_dASHStreamingSessionURL = jsonValue.GetString("DASHStreamingSessionURL");

  }



  return *this;
}
