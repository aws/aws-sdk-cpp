/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{
  enum class MatchPurpose
  {
    NOT_SET,
    IDENTIFIER_GENERATION,
    INDEXING
  };

namespace MatchPurposeMapper
{
AWS_ENTITYRESOLUTION_API MatchPurpose GetMatchPurposeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForMatchPurpose(MatchPurpose value);
} // namespace MatchPurposeMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
