/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{
  enum class ScraperStatusCode
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    CREATION_FAILED,
    DELETION_FAILED
  };

namespace ScraperStatusCodeMapper
{
AWS_PROMETHEUSSERVICE_API ScraperStatusCode GetScraperStatusCodeForName(const Aws::String& name);

AWS_PROMETHEUSSERVICE_API Aws::String GetNameForScraperStatusCode(ScraperStatusCode value);
} // namespace ScraperStatusCodeMapper
} // namespace Model
} // namespace PrometheusService
} // namespace Aws
