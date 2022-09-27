/**
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
  enum class SigningAlg
  {
    NOT_SET,
    SHA256,
    SHA384,
    SHA512,
    SHA1,
    NONE
  };

namespace SigningAlgMapper
{
AWS_TRANSFER_API SigningAlg GetSigningAlgForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForSigningAlg(SigningAlg value);
} // namespace SigningAlgMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
