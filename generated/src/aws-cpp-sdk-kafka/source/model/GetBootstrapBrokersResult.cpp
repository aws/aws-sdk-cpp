/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/GetBootstrapBrokersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBootstrapBrokersResult::GetBootstrapBrokersResult()
{
}

GetBootstrapBrokersResult::GetBootstrapBrokersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBootstrapBrokersResult& GetBootstrapBrokersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bootstrapBrokerString"))
  {
    m_bootstrapBrokerString = jsonValue.GetString("bootstrapBrokerString");

  }

  if(jsonValue.ValueExists("bootstrapBrokerStringTls"))
  {
    m_bootstrapBrokerStringTls = jsonValue.GetString("bootstrapBrokerStringTls");

  }

  if(jsonValue.ValueExists("bootstrapBrokerStringSaslScram"))
  {
    m_bootstrapBrokerStringSaslScram = jsonValue.GetString("bootstrapBrokerStringSaslScram");

  }

  if(jsonValue.ValueExists("bootstrapBrokerStringSaslIam"))
  {
    m_bootstrapBrokerStringSaslIam = jsonValue.GetString("bootstrapBrokerStringSaslIam");

  }

  if(jsonValue.ValueExists("bootstrapBrokerStringPublicTls"))
  {
    m_bootstrapBrokerStringPublicTls = jsonValue.GetString("bootstrapBrokerStringPublicTls");

  }

  if(jsonValue.ValueExists("bootstrapBrokerStringPublicSaslScram"))
  {
    m_bootstrapBrokerStringPublicSaslScram = jsonValue.GetString("bootstrapBrokerStringPublicSaslScram");

  }

  if(jsonValue.ValueExists("bootstrapBrokerStringPublicSaslIam"))
  {
    m_bootstrapBrokerStringPublicSaslIam = jsonValue.GetString("bootstrapBrokerStringPublicSaslIam");

  }

  if(jsonValue.ValueExists("bootstrapBrokerStringVpcConnectivityTls"))
  {
    m_bootstrapBrokerStringVpcConnectivityTls = jsonValue.GetString("bootstrapBrokerStringVpcConnectivityTls");

  }

  if(jsonValue.ValueExists("bootstrapBrokerStringVpcConnectivitySaslScram"))
  {
    m_bootstrapBrokerStringVpcConnectivitySaslScram = jsonValue.GetString("bootstrapBrokerStringVpcConnectivitySaslScram");

  }

  if(jsonValue.ValueExists("bootstrapBrokerStringVpcConnectivitySaslIam"))
  {
    m_bootstrapBrokerStringVpcConnectivitySaslIam = jsonValue.GetString("bootstrapBrokerStringVpcConnectivitySaslIam");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
