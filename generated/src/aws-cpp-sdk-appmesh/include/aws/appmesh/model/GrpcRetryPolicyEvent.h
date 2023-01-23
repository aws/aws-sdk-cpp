/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppMesh
{
namespace Model
{
  enum class GrpcRetryPolicyEvent
  {
    NOT_SET,
    cancelled,
    deadline_exceeded,
    internal,
    resource_exhausted,
    unavailable
  };

namespace GrpcRetryPolicyEventMapper
{
AWS_APPMESH_API GrpcRetryPolicyEvent GetGrpcRetryPolicyEventForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForGrpcRetryPolicyEvent(GrpcRetryPolicyEvent value);
} // namespace GrpcRetryPolicyEventMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
