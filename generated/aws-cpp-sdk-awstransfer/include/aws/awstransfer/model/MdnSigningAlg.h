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
  enum class MdnSigningAlg
  {
    NOT_SET,
    SHA256,
    SHA384,
    SHA512,
    SHA1,
    NONE,
    DEFAULT
  };

namespace MdnSigningAlgMapper
{
AWS_TRANSFER_API MdnSigningAlg GetMdnSigningAlgForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForMdnSigningAlg(MdnSigningAlg value);
} // namespace MdnSigningAlgMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
