/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class ContentMuxType
  {
    NOT_SET,
    ContentOnly
  };

namespace ContentMuxTypeMapper
{
AWS_CHIME_API ContentMuxType GetContentMuxTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForContentMuxType(ContentMuxType value);
} // namespace ContentMuxTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
