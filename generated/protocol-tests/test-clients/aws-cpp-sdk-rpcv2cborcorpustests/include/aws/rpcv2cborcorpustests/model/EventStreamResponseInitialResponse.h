/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpTypes.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2CborCorpusTests {
namespace Model {

class EventStreamResponseInitialResponse {
 public:
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamResponseInitialResponse() = default;
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamResponseInitialResponse(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamResponseInitialResponse& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamResponseInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_RPCV2CBORCORPUSTESTS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;
};

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
