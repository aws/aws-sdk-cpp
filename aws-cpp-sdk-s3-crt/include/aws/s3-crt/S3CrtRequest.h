﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/AmazonStreamingWebServiceRequest.h>

namespace Aws
{
namespace S3Crt
{
  class AWS_S3CRT_API S3CrtRequest : public Aws::AmazonSerializableWebServiceRequest
  {
  public:
    virtual ~S3CrtRequest () {}

    void AddParametersToRequest(Aws::Http::HttpRequest& httpRequest) const { AWS_UNREFERENCED_PARAM(httpRequest); }

    inline Aws::Http::HeaderValueCollection GetHeaders() const override
    {
      auto headers = GetRequestSpecificHeaders();

      if(headers.size() == 0 || (headers.size() > 0 && headers.count(Aws::Http::CONTENT_TYPE_HEADER) == 0))
      {
        headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_XML_CONTENT_TYPE ));
      }
      headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::API_VERSION_HEADER, "2006-03-01"));
      return headers;
    }

  protected:
    virtual Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const { return Aws::Http::HeaderValueCollection(); }

  };

  typedef Aws::AmazonStreamingWebServiceRequest StreamingS3CrtRequest;

} // namespace S3Crt
} // namespace Aws
