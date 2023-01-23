/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateStreamResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateStreamResult::CreateStreamResult() : 
    m_streamVersion(0)
{
}

CreateStreamResult::CreateStreamResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_streamVersion(0)
{
  *this = result;
}

CreateStreamResult& CreateStreamResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");

  }

  if(jsonValue.ValueExists("streamArn"))
  {
    m_streamArn = jsonValue.GetString("streamArn");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("streamVersion"))
  {
    m_streamVersion = jsonValue.GetInteger("streamVersion");

  }



  return *this;
}
