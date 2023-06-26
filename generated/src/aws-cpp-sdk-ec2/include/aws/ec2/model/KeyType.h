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
  enum class KeyType
  {
    NOT_SET,
    rsa,
    ed25519
  };

namespace KeyTypeMapper
{
AWS_EC2_API KeyType GetKeyTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForKeyType(KeyType value);
} // namespace KeyTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
