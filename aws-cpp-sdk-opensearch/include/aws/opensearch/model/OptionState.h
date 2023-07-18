/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
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
AWS_OPENSEARCHSERVICE_API OptionState GetOptionStateForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForOptionState(OptionState value);
} // namespace OptionStateMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
