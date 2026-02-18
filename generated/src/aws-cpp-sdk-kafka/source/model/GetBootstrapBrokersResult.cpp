/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kafka/model/GetBootstrapBrokersResult.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBootstrapBrokersResult::GetBootstrapBrokersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetBootstrapBrokersResult& GetBootstrapBrokersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("bootstrapBrokerString")) {
    m_bootstrapBrokerString = jsonValue.GetString("bootstrapBrokerString");
    m_bootstrapBrokerStringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringTls")) {
    m_bootstrapBrokerStringTls = jsonValue.GetString("bootstrapBrokerStringTls");
    m_bootstrapBrokerStringTlsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringSaslScram")) {
    m_bootstrapBrokerStringSaslScram = jsonValue.GetString("bootstrapBrokerStringSaslScram");
    m_bootstrapBrokerStringSaslScramHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringSaslIam")) {
    m_bootstrapBrokerStringSaslIam = jsonValue.GetString("bootstrapBrokerStringSaslIam");
    m_bootstrapBrokerStringSaslIamHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringPublicTls")) {
    m_bootstrapBrokerStringPublicTls = jsonValue.GetString("bootstrapBrokerStringPublicTls");
    m_bootstrapBrokerStringPublicTlsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringPublicSaslScram")) {
    m_bootstrapBrokerStringPublicSaslScram = jsonValue.GetString("bootstrapBrokerStringPublicSaslScram");
    m_bootstrapBrokerStringPublicSaslScramHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringPublicSaslIam")) {
    m_bootstrapBrokerStringPublicSaslIam = jsonValue.GetString("bootstrapBrokerStringPublicSaslIam");
    m_bootstrapBrokerStringPublicSaslIamHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringVpcConnectivityTls")) {
    m_bootstrapBrokerStringVpcConnectivityTls = jsonValue.GetString("bootstrapBrokerStringVpcConnectivityTls");
    m_bootstrapBrokerStringVpcConnectivityTlsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringVpcConnectivitySaslScram")) {
    m_bootstrapBrokerStringVpcConnectivitySaslScram = jsonValue.GetString("bootstrapBrokerStringVpcConnectivitySaslScram");
    m_bootstrapBrokerStringVpcConnectivitySaslScramHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringVpcConnectivitySaslIam")) {
    m_bootstrapBrokerStringVpcConnectivitySaslIam = jsonValue.GetString("bootstrapBrokerStringVpcConnectivitySaslIam");
    m_bootstrapBrokerStringVpcConnectivitySaslIamHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringIpv6")) {
    m_bootstrapBrokerStringIpv6 = jsonValue.GetString("bootstrapBrokerStringIpv6");
    m_bootstrapBrokerStringIpv6HasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringTlsIpv6")) {
    m_bootstrapBrokerStringTlsIpv6 = jsonValue.GetString("bootstrapBrokerStringTlsIpv6");
    m_bootstrapBrokerStringTlsIpv6HasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringSaslScramIpv6")) {
    m_bootstrapBrokerStringSaslScramIpv6 = jsonValue.GetString("bootstrapBrokerStringSaslScramIpv6");
    m_bootstrapBrokerStringSaslScramIpv6HasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerStringSaslIamIpv6")) {
    m_bootstrapBrokerStringSaslIamIpv6 = jsonValue.GetString("bootstrapBrokerStringSaslIamIpv6");
    m_bootstrapBrokerStringSaslIamIpv6HasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
