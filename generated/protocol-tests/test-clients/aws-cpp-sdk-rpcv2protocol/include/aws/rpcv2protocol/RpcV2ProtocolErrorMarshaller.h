/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace Client {

class AWS_RPCV2PROTOCOL_API RpcV2ProtocolErrorMarshaller : public Aws::Client::RpcV2ErrorMarshaller {
 public:
  Aws::Client::AWSError<Aws::Client::CoreErrors> FindErrorByName(const char* exceptionName) const override;
};

}  // namespace Client
}  // namespace Aws
