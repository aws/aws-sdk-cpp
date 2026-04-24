/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/imagebuilder/ImagebuilderClient.h>

#include <algorithm>

namespace Aws {
namespace imagebuilder {

template <typename DerivedClient = ImagebuilderClient>
class ImagebuilderWaiter {
 public:
};
}  // namespace imagebuilder
}  // namespace Aws
