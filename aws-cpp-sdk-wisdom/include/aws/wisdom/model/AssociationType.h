/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{
  enum class AssociationType
  {
    NOT_SET,
    KNOWLEDGE_BASE
  };

namespace AssociationTypeMapper
{
AWS_CONNECTWISDOMSERVICE_API AssociationType GetAssociationTypeForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForAssociationType(AssociationType value);
} // namespace AssociationTypeMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
