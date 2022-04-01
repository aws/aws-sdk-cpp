/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/RestoreDomainAccessResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RestoreDomainAccessResult::RestoreDomainAccessResult()
{
}

RestoreDomainAccessResult::RestoreDomainAccessResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RestoreDomainAccessResult& RestoreDomainAccessResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  return *this;
}
