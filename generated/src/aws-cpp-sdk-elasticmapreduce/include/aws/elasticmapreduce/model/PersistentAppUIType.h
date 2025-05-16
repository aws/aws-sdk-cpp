/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class PersistentAppUIType
  {
    NOT_SET,
    SHS,
    TEZ,
    YTS
  };

namespace PersistentAppUITypeMapper
{
AWS_EMR_API PersistentAppUIType GetPersistentAppUITypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForPersistentAppUIType(PersistentAppUIType value);
} // namespace PersistentAppUITypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
