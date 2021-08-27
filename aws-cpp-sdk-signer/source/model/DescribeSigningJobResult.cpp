/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  if(jsonValue.ValueExists("platformDisplayName"))
  {
    m_platformDisplayName = jsonValue.GetString("platformDisplayName");

  }

  if(jsonValue.ValueExists("profileName"))
  {
    m_profileName = jsonValue.GetString("profileName");

  }

  if(jsonValue.ValueExists("profileVersion"))
  {
    m_profileVersion = jsonValue.GetString("profileVersion");

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

  if(jsonValue.ValueExists("signatureExpiresAt"))
  {
    m_signatureExpiresAt = jsonValue.GetDouble("signatureExpiresAt");

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

  if(jsonValue.ValueExists("revocationRecord"))
  {
    m_revocationRecord = jsonValue.GetObject("revocationRecord");

  }

  if(jsonValue.ValueExists("signedObject"))
  {
    m_signedObject = jsonValue.GetObject("signedObject");

  }

  if(jsonValue.ValueExists("jobOwner"))
  {
    m_jobOwner = jsonValue.GetString("jobOwner");

  }

  if(jsonValue.ValueExists("jobInvoker"))
  {
    m_jobInvoker = jsonValue.GetString("jobInvoker");

  }



  return *this;
}
