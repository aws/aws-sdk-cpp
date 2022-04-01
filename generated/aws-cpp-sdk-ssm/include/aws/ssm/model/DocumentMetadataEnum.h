/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class DocumentMetadataEnum
  {
    NOT_SET,
    DocumentReviews
  };

namespace DocumentMetadataEnumMapper
{
AWS_SSM_API DocumentMetadataEnum GetDocumentMetadataEnumForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDocumentMetadataEnum(DocumentMetadataEnum value);
} // namespace DocumentMetadataEnumMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
