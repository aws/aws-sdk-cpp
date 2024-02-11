/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class Connectivity
  {
    NOT_SET,
    PUBLIC_,
    PRIVATE_
  };

namespace ConnectivityMapper
{
AWS_FIREHOSE_API Connectivity GetConnectivityForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForConnectivity(Connectivity value);
} // namespace ConnectivityMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
