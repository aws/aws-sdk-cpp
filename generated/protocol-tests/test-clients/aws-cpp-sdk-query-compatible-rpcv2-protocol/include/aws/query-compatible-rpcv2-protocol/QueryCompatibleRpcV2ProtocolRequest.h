/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/endpoint/AWSEndpoint.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace QueryCompatibleRpcV2Protocol {
class AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API QueryCompatibleRpcV2ProtocolRequest : public Aws::AmazonSerializableWebServiceRequest {
 public:
  using EndpointParameter = Aws::Endpoint::EndpointParameter;
  using EndpointParameters = Aws::Endpoint::EndpointParameters;

  virtual ~QueryCompatibleRpcV2ProtocolRequest() {}

  void AddParametersToRequest(Aws::Http::HttpRequest& httpRequest) const { AWS_UNREFERENCED_PARAM(httpRequest); }

  inline Aws::Http::HeaderValueCollection GetHeaders() const override {
    auto headers = GetRequestSpecificHeaders();

    if (headers.size() == 0 || (headers.size() > 0 && headers.count(Aws::Http::CONTENT_TYPE_HEADER) == 0)) {
    }
    headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::X_AMZN_QUERY_MODE, "true"));
    headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::API_VERSION_HEADER, "2025-06-20"));
    return headers;
  }

 protected:
  virtual Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const { return Aws::Http::HeaderValueCollection(); }
};

}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws
