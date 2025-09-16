/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/endpoint/AWSEndpoint.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10_EXPORTS.h>

namespace Aws {
namespace QueryCompatibleJSONRPC10 {
class AWS_QUERYCOMPATIBLEJSONRPC10_API QueryCompatibleJSONRPC10Request : public Aws::AmazonSerializableWebServiceRequest {
 public:
  using EndpointParameter = Aws::Endpoint::EndpointParameter;
  using EndpointParameters = Aws::Endpoint::EndpointParameters;

  virtual ~QueryCompatibleJSONRPC10Request() {}

  void AddParametersToRequest(Aws::Http::HttpRequest& httpRequest) const { AWS_UNREFERENCED_PARAM(httpRequest); }

  inline Aws::Http::HeaderValueCollection GetHeaders() const override {
    auto headers = GetRequestSpecificHeaders();

    if (headers.size() == 0 || (headers.size() > 0 && headers.count(Aws::Http::CONTENT_TYPE_HEADER) == 0)) {
      headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_JSON_CONTENT_TYPE_1_0));
      headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::X_AMZN_QUERY_MODE, "true"));
    }
    headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::API_VERSION_HEADER, "2020-07-14"));
    return headers;
  }

 protected:
  virtual Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const { return Aws::Http::HeaderValueCollection(); }
};

}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
