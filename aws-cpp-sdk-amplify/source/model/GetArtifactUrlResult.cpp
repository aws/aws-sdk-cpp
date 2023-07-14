/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/GetArtifactUrlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetArtifactUrlResult::GetArtifactUrlResult()
{
}

GetArtifactUrlResult::GetArtifactUrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetArtifactUrlResult& GetArtifactUrlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("artifactId"))
  {
    m_artifactId = jsonValue.GetString("artifactId");

  }

  if(jsonValue.ValueExists("artifactUrl"))
  {
    m_artifactUrl = jsonValue.GetString("artifactUrl");

  }



  return *this;
}
