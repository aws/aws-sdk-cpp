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
  enum class DefaultDocumentIdFormat
  {
    NOT_SET,
    FIREHOSE_DEFAULT,
    NO_DOCUMENT_ID
  };

namespace DefaultDocumentIdFormatMapper
{
AWS_FIREHOSE_API DefaultDocumentIdFormat GetDefaultDocumentIdFormatForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForDefaultDocumentIdFormat(DefaultDocumentIdFormat value);
} // namespace DefaultDocumentIdFormatMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
