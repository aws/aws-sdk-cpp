/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{
  enum class LoaContentType
  {
    NOT_SET,
    application_pdf
  };

namespace LoaContentTypeMapper
{
AWS_DIRECTCONNECT_API LoaContentType GetLoaContentTypeForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForLoaContentType(LoaContentType value);
} // namespace LoaContentTypeMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
