/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    PREPARING,
    ACTIVE,
    EXPIRED
  };

namespace StatusMapper
{
AWS_SERVERLESSAPPLICATIONREPOSITORY_API Status GetStatusForName(const Aws::String& name);

AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
