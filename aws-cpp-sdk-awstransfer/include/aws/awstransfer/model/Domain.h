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
  enum class Domain
  {
    NOT_SET,
    S3,
    EFS
  };

namespace DomainMapper
{
AWS_TRANSFER_API Domain GetDomainForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForDomain(Domain value);
} // namespace DomainMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
