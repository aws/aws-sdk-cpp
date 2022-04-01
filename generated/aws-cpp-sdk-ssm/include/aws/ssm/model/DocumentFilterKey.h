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
  enum class DocumentFilterKey
  {
    NOT_SET,
    Name,
    Owner,
    PlatformTypes,
    DocumentType
  };

namespace DocumentFilterKeyMapper
{
AWS_SSM_API DocumentFilterKey GetDocumentFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDocumentFilterKey(DocumentFilterKey value);
} // namespace DocumentFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
