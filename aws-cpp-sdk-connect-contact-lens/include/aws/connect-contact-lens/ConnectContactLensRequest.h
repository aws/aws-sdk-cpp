/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/http/HttpRequest.h>

namespace Aws
{
namespace ConnectContactLens
{
  class AWS_CONNECTCONTACTLENS_API ConnectContactLensRequest : public Aws::AmazonSerializableWebServiceRequest
  {
  public:
    virtual ~ConnectContactLensRequest () {}

    void AddParametersToRequest(Aws::Http::HttpRequest& httpRequest) const { AWS_UNREFERENCED_PARAM(httpRequest); }

    inline Aws::Http::HeaderValueCollection GetHeaders() const override
    {
      auto headers = GetRequestSpecificHeaders();

      if(headers.size() == 0 || (headers.size() > 0 && headers.count(Aws::Http::CONTENT_TYPE_HEADER) == 0))
      {
        headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_JSON_CONTENT_TYPE_1_1 ));
      }
      headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::API_VERSION_HEADER, "2020-08-21"));
      return headers;
    }

  protected:
    virtual Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const { return Aws::Http::HeaderValueCollection(); }

  };


} // namespace ConnectContactLens
} // namespace Aws
