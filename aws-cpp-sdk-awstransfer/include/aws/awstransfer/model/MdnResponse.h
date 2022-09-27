﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class MdnResponse
  {
    NOT_SET,
    SYNC,
    NONE
  };

namespace MdnResponseMapper
{
AWS_TRANSFER_API MdnResponse GetMdnResponseForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForMdnResponse(MdnResponse value);
} // namespace MdnResponseMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
