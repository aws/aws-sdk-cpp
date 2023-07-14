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
  enum class DocumentFormat
  {
    NOT_SET,
    YAML,
    JSON,
    TEXT
  };

namespace DocumentFormatMapper
{
AWS_SSM_API DocumentFormat GetDocumentFormatForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDocumentFormat(DocumentFormat value);
} // namespace DocumentFormatMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
