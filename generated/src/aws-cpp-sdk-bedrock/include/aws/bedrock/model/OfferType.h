/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class OfferType
  {
    NOT_SET,
    ALL,
    PUBLIC_
  };

namespace OfferTypeMapper
{
AWS_BEDROCK_API OfferType GetOfferTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForOfferType(OfferType value);
} // namespace OfferTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
