/*
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

#include <aws/signer/model/DescribeSigningJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSigningJobResult::DescribeSigningJobResult() : 
    m_status(SigningStatus::NOT_SET)
{
}

DescribeSigningJobResult::DescribeSigningJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SigningStatus::NOT_SET)
{
  *this = result;
}

DescribeSigningJobResult& DescribeSigningJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

  }

  if(jsonValue.ValueExists("signingMaterial"))
  {
    m_signingMaterial = jsonValue.GetObject("signingMaterial");

  }

  if(jsonValue.ValueExists("platformId"))
  {
    m_platformId = jsonValue.GetString("platformId");

  }

  if(jsonValue.ValueExists("profileName"))
  {
    m_profileName = jsonValue.GetString("profileName");

  }

  if(jsonValue.ValueExists("overrides"))
  {
    m_overrides = jsonValue.GetObject("overrides");

  }

  if(jsonValue.ValueExists("signingParameters"))
  {
    Aws::Map<Aws::String, JsonView> signingParametersJsonMap = jsonValue.GetObject("signingParameters").GetAllObjects();
    for(auto& signingParametersItem : signingParametersJsonMap)
    {
      m_signingParameters[signingParametersItem.first] = signingParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("completedAt"))
  {
    m_completedAt = jsonValue.GetDouble("completedAt");

  }

  if(jsonValue.ValueExists("requestedBy"))
  {
    m_requestedBy = jsonValue.GetString("requestedBy");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SigningStatusMapper::GetSigningStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }

  if(jsonValue.ValueExists("signedObject"))
  {
    m_signedObject = jsonValue.GetObject("signedObject");

  }



  return *this;
}
