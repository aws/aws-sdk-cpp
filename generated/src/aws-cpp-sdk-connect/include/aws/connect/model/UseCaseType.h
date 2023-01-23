/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class UseCaseType
  {
    NOT_SET,
    RULES_EVALUATION,
    CONNECT_CAMPAIGNS
  };

namespace UseCaseTypeMapper
{
AWS_CONNECT_API UseCaseType GetUseCaseTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForUseCaseType(UseCaseType value);
} // namespace UseCaseTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
