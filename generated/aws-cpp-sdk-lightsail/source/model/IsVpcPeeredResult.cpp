/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/IsVpcPeeredResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

IsVpcPeeredResult::IsVpcPeeredResult() : 
    m_isPeered(false)
{
}

IsVpcPeeredResult::IsVpcPeeredResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isPeered(false)
{
  *this = result;
}

IsVpcPeeredResult& IsVpcPeeredResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("isPeered"))
  {
    m_isPeered = jsonValue.GetBool("isPeered");

  }



  return *this;
}
