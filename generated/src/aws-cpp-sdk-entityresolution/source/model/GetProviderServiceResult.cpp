/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/GetProviderServiceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProviderServiceResult::GetProviderServiceResult() : 
    m_anonymizedOutput(false),
    m_providerServiceType(ServiceType::NOT_SET)
{
}

GetProviderServiceResult::GetProviderServiceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_anonymizedOutput(false),
    m_providerServiceType(ServiceType::NOT_SET)
{
  *this = result;
}

GetProviderServiceResult& GetProviderServiceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("anonymizedOutput"))
  {
    m_anonymizedOutput = jsonValue.GetBool("anonymizedOutput");

  }

  if(jsonValue.ValueExists("providerConfigurationDefinition"))
  {
    m_providerConfigurationDefinition = jsonValue.GetObject("providerConfigurationDefinition");

  }

  if(jsonValue.ValueExists("providerEndpointConfiguration"))
  {
    m_providerEndpointConfiguration = jsonValue.GetObject("providerEndpointConfiguration");

  }

  if(jsonValue.ValueExists("providerEntityOutputDefinition"))
  {
    m_providerEntityOutputDefinition = jsonValue.GetObject("providerEntityOutputDefinition");

  }

  if(jsonValue.ValueExists("providerIntermediateDataAccessConfiguration"))
  {
    m_providerIntermediateDataAccessConfiguration = jsonValue.GetObject("providerIntermediateDataAccessConfiguration");

  }

  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");

  }

  if(jsonValue.ValueExists("providerServiceArn"))
  {
    m_providerServiceArn = jsonValue.GetString("providerServiceArn");

  }

  if(jsonValue.ValueExists("providerServiceDisplayName"))
  {
    m_providerServiceDisplayName = jsonValue.GetString("providerServiceDisplayName");

  }

  if(jsonValue.ValueExists("providerServiceName"))
  {
    m_providerServiceName = jsonValue.GetString("providerServiceName");

  }

  if(jsonValue.ValueExists("providerServiceType"))
  {
    m_providerServiceType = ServiceTypeMapper::GetServiceTypeForName(jsonValue.GetString("providerServiceType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
