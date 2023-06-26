/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class ConnectivityType
  {
    NOT_SET,
    private_,
    public_
  };

namespace ConnectivityTypeMapper
{
AWS_EC2_API ConnectivityType GetConnectivityTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForConnectivityType(ConnectivityType value);
} // namespace ConnectivityTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
