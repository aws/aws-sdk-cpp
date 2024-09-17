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
  enum class EkPubKeyType
  {
    NOT_SET,
    rsa_2048,
    ecc_sec_p384
  };

namespace EkPubKeyTypeMapper
{
AWS_EC2_API EkPubKeyType GetEkPubKeyTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForEkPubKeyType(EkPubKeyType value);
} // namespace EkPubKeyTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
