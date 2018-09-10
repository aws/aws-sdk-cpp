﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/GetPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPolicyResult::GetPolicyResult()
{
}

GetPolicyResult::GetPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPolicyResult& GetPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("policyName"))
  {
    m_policyName = jsonValue.GetString("policyName");

  }

  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");

  }

  if(jsonValue.ValueExists("policyDocument"))
  {
    m_policyDocument = jsonValue.GetString("policyDocument");

  }

  if(jsonValue.ValueExists("defaultVersionId"))
  {
    m_defaultVersionId = jsonValue.GetString("defaultVersionId");

  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

  }

  if(jsonValue.ValueExists("generationId"))
  {
    m_generationId = jsonValue.GetString("generationId");

  }



  return *this;
}
