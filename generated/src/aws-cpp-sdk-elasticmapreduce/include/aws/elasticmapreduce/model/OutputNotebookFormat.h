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
  enum class OutputNotebookFormat
  {
    NOT_SET,
    HTML
  };

namespace OutputNotebookFormatMapper
{
AWS_EMR_API OutputNotebookFormat GetOutputNotebookFormatForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForOutputNotebookFormat(OutputNotebookFormat value);
} // namespace OutputNotebookFormatMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
