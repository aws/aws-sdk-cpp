/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminSetUserPasswordResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AdminSetUserPasswordResult::AdminSetUserPasswordResult()
{
}

AdminSetUserPasswordResult::AdminSetUserPasswordResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AdminSetUserPasswordResult& AdminSetUserPasswordResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  return *this;
}
