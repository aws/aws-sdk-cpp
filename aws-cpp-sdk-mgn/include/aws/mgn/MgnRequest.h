/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/http/HttpRequest.h>

namespace Aws
{
namespace mgn
{
  class AWS_MGN_API MgnRequest : public Aws::AmazonSerializableWebServiceRequest
  {
  public:
    virtual ~MgnRequest () {}

    void AddParametersToRequest(Aws::Http::HttpRequest& httpRequest) const { AWS_UNREFERENCED_PARAM(httpRequest); }

    inline Aws::Http::HeaderValueCollection GetHeaders() const override
    {
      auto headers = GetRequestSpecificHeaders();

      if(headers.size() == 0 || (headers.size() > 0 && headers.count(Aws::Http::CONTENT_TYPE_HEADER) == 0))
      {
        headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_JSON_CONTENT_TYPE_1_1 ));
      }
      headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::API_VERSION_HEADER, "2020-02-26"));
      return headers;
    }

  protected:
    virtual Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const { return Aws::Http::HeaderValueCollection(); }

  };


} // namespace mgn
} // namespace Aws
