/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/client/AWSErrorMarshaller.h>

namespace Aws
{
namespace Client
{

class AWS_S3CRT_API S3CrtErrorMarshaller : public Aws::Client::XmlErrorMarshaller
{
public:
  Aws::Client::AWSError<Aws::Client::CoreErrors> FindErrorByName(const char* exceptionName) const override;
  virtual Aws::String ExtractRegion(const AWSError<CoreErrors>&) const override;
  virtual Aws::String ExtractEndpoint(const AWSError<CoreErrors>&) const override;
};

} // namespace Client
} // namespace Aws