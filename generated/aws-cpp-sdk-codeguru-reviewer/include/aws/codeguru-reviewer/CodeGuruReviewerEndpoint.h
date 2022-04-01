/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CodeGuruReviewer
{
namespace CodeGuruReviewerEndpoint
{
AWS_CODEGURUREVIEWER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CodeGuruReviewerEndpoint
} // namespace CodeGuruReviewer
} // namespace Aws
