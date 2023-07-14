/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CopyImageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CopyImageResult::CopyImageResult()
{
}

CopyImageResult::CopyImageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CopyImageResult& CopyImageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DestinationImageName"))
  {
    m_destinationImageName = jsonValue.GetString("DestinationImageName");

  }



  return *this;
}
