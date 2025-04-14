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

GetProviderServiceResult::GetProviderServiceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetProviderServiceResult& GetProviderServiceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");
    m_providerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerServiceName"))
  {
    m_providerServiceName = jsonValue.GetString("providerServiceName");
    m_providerServiceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerServiceDisplayName"))
  {
    m_providerServiceDisplayName = jsonValue.GetString("providerServiceDisplayName");
    m_providerServiceDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerServiceType"))
  {
    m_providerServiceType = ServiceTypeMapper::GetServiceTypeForName(jsonValue.GetString("providerServiceType"));
    m_providerServiceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerServiceArn"))
  {
    m_providerServiceArn = jsonValue.GetString("providerServiceArn");
    m_providerServiceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerConfigurationDefinition"))
  {
    m_providerConfigurationDefinition = jsonValue.GetObject("providerConfigurationDefinition");
    m_providerConfigurationDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerIdNameSpaceConfiguration"))
  {
    m_providerIdNameSpaceConfiguration = jsonValue.GetObject("providerIdNameSpaceConfiguration");
    m_providerIdNameSpaceConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerJobConfiguration"))
  {
    m_providerJobConfiguration = jsonValue.GetObject("providerJobConfiguration");
    m_providerJobConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerEndpointConfiguration"))
  {
    m_providerEndpointConfiguration = jsonValue.GetObject("providerEndpointConfiguration");
    m_providerEndpointConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("anonymizedOutput"))
  {
    m_anonymizedOutput = jsonValue.GetBool("anonymizedOutput");
    m_anonymizedOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerEntityOutputDefinition"))
  {
    m_providerEntityOutputDefinition = jsonValue.GetObject("providerEntityOutputDefinition");
    m_providerEntityOutputDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerIntermediateDataAccessConfiguration"))
  {
    m_providerIntermediateDataAccessConfiguration = jsonValue.GetObject("providerIntermediateDataAccessConfiguration");
    m_providerIntermediateDataAccessConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerComponentSchema"))
  {
    m_providerComponentSchema = jsonValue.GetObject("providerComponentSchema");
    m_providerComponentSchemaHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
