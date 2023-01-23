/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class NotebookType
  {
    NOT_SET,
    IPYNB
  };

namespace NotebookTypeMapper
{
AWS_ATHENA_API NotebookType GetNotebookTypeForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForNotebookType(NotebookType value);
} // namespace NotebookTypeMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
