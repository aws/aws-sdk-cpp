﻿/**
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
  enum class ReferenceType
  {
    NOT_SET,
    URL,
    ATTACHMENT
  };

namespace ReferenceTypeMapper
{
AWS_CONNECT_API ReferenceType GetReferenceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForReferenceType(ReferenceType value);
} // namespace ReferenceTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
