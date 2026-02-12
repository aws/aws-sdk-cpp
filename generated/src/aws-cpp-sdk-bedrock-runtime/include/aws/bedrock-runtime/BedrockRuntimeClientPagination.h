/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntimeClient.h>
#include <aws/bedrock-runtime/model/ListAsyncInvokesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BedrockRuntime {

using ListAsyncInvokesPaginator = Aws::Utils::Pagination::Paginator<BedrockRuntimeClient, Model::ListAsyncInvokesRequest,
                                                                    Pagination::ListAsyncInvokesPaginationTraits<BedrockRuntimeClient>>;

}  // namespace BedrockRuntime
}  // namespace Aws
