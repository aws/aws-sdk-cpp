/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class DocumentStatus
  {
    NOT_SET,
    NOT_FOUND,
    PROCESSING,
    INDEXED,
    UPDATED,
    FAILED,
    UPDATE_FAILED
  };

namespace DocumentStatusMapper
{
AWS_KENDRA_API DocumentStatus GetDocumentStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForDocumentStatus(DocumentStatus value);
} // namespace DocumentStatusMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
