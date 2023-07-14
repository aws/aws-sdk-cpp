/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/PutSigningProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutSigningProfileResult::PutSigningProfileResult()
{
}

PutSigningProfileResult::PutSigningProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutSigningProfileResult& PutSigningProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("profileVersion"))
  {
    m_profileVersion = jsonValue.GetString("profileVersion");

  }

  if(jsonValue.ValueExists("profileVersionArn"))
  {
    m_profileVersionArn = jsonValue.GetString("profileVersionArn");

  }



  return *this;
}
