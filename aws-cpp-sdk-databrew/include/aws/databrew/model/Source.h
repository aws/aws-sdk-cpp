/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class Source
  {
    NOT_SET,
    S3,
    DATA_CATALOG
  };

namespace SourceMapper
{
AWS_GLUEDATABREW_API Source GetSourceForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForSource(Source value);
} // namespace SourceMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
