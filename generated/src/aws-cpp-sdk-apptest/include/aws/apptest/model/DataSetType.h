/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppTest
{
namespace Model
{
  enum class DataSetType
  {
    NOT_SET,
    PS
  };

namespace DataSetTypeMapper
{
AWS_APPTEST_API DataSetType GetDataSetTypeForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForDataSetType(DataSetType value);
} // namespace DataSetTypeMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
