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
  enum class AlfrescoEntity
  {
    NOT_SET,
    wiki,
    blog,
    documentLibrary
  };

namespace AlfrescoEntityMapper
{
AWS_KENDRA_API AlfrescoEntity GetAlfrescoEntityForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForAlfrescoEntity(AlfrescoEntity value);
} // namespace AlfrescoEntityMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
