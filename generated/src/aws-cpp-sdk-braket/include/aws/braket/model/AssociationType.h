/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Braket
{
namespace Model
{
  enum class AssociationType
  {
    NOT_SET,
    RESERVATION_TIME_WINDOW_ARN
  };

namespace AssociationTypeMapper
{
AWS_BRAKET_API AssociationType GetAssociationTypeForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForAssociationType(AssociationType value);
} // namespace AssociationTypeMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
