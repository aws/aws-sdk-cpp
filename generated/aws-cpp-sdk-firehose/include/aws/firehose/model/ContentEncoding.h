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
  enum class ContentEncoding
  {
    NOT_SET,
    NONE,
    GZIP
  };

namespace ContentEncodingMapper
{
AWS_FIREHOSE_API ContentEncoding GetContentEncodingForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForContentEncoding(ContentEncoding value);
} // namespace ContentEncodingMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
