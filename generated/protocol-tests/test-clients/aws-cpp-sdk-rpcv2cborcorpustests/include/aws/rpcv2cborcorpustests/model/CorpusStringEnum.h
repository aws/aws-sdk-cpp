/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>

namespace Aws {
namespace RpcV2CborCorpusTests {
namespace Model {
enum class CorpusStringEnum { NOT_SET, Foo, Bar, Baz };

namespace CorpusStringEnumMapper {
AWS_RPCV2CBORCORPUSTESTS_API CorpusStringEnum GetCorpusStringEnumForName(const Aws::String& name);

AWS_RPCV2CBORCORPUSTESTS_API Aws::String GetNameForCorpusStringEnum(CorpusStringEnum value);
}  // namespace CorpusStringEnumMapper
}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
