/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/endpoint/AWSEndpoint.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace RpcV2Protocol {
class AWS_RPCV2PROTOCOL_API RpcV2ProtocolRequest : public Aws::AmazonSerializableWebServiceRequest {
 public:
  using EndpointParameter = Aws::Endpoint::EndpointParameter;
  using EndpointParameters = Aws::Endpoint::EndpointParameters;

  virtual ~RpcV2ProtocolRequest() {}

  void AddParametersToRequest(Aws::Http::HttpRequest& httpRequest) const { AWS_UNREFERENCED_PARAM(httpRequest); }

  inline Aws::Http::HeaderValueCollection GetHeaders() const override {
    auto headers = GetRequestSpecificHeaders();

    if (headers.size() == 0 || (headers.size() > 0 && headers.count(Aws::Http::CONTENT_TYPE_HEADER) == 0)) {
    }
    headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::API_VERSION_HEADER, "2020-07-14"));
    headers.emplace(Aws::Http::HeaderValuePair("smithy-protocol", "rpc-v2-cbor"));
    headers.emplace(Aws::Http::HeaderValuePair("Accept", "application/cbor"));

    return headers;
  }

 protected:
  virtual Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const { return Aws::Http::HeaderValueCollection(); }
};

}  // namespace RpcV2Protocol
}  // namespace Aws
