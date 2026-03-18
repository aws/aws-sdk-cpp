/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomainClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CloudSearchDomain {

template <typename DerivedClient = CloudSearchDomainClient>
class CloudSearchDomainWaiter {
 public:
};
}  // namespace CloudSearchDomain
}  // namespace Aws
