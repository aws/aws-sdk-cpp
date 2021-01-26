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
  enum class Op
  {
    NOT_SET,
    add,
    remove,
    replace,
    move,
    copy,
    test
  };

namespace OpMapper
{
AWS_APIGATEWAY_API Op GetOpForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForOp(Op value);
} // namespace OpMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
