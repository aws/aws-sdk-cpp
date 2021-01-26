/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{
  enum class PutMode
  {
    NOT_SET,
    merge,
    overwrite
  };

namespace PutModeMapper
{
AWS_APIGATEWAY_API PutMode GetPutModeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForPutMode(PutMode value);
} // namespace PutModeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
