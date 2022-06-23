/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class DocumentReadMode
  {
    NOT_SET,
    SERVICE_DEFAULT,
    FORCE_DOCUMENT_READ_ACTION
  };

namespace DocumentReadModeMapper
{
AWS_COMPREHEND_API DocumentReadMode GetDocumentReadModeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForDocumentReadMode(DocumentReadMode value);
} // namespace DocumentReadModeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
