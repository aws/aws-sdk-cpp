/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class DocumentSourceType
  {
    NOT_SET,
    ORIGINAL,
    WITH_COMMENTS
  };

namespace DocumentSourceTypeMapper
{
AWS_WORKDOCS_API DocumentSourceType GetDocumentSourceTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForDocumentSourceType(DocumentSourceType value);
} // namespace DocumentSourceTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
