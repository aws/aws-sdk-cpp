/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{
  enum class OptionState
  {
    NOT_SET,
    RequiresIndexDocuments,
    Processing,
    Active
  };

namespace OptionStateMapper
{
AWS_ELASTICSEARCHSERVICE_API OptionState GetOptionStateForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForOptionState(OptionState value);
} // namespace OptionStateMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
