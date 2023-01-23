/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{
  enum class DefinitionLanguage
  {
    NOT_SET,
    GRAPHQL
  };

namespace DefinitionLanguageMapper
{
AWS_IOTTHINGSGRAPH_API DefinitionLanguage GetDefinitionLanguageForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForDefinitionLanguage(DefinitionLanguage value);
} // namespace DefinitionLanguageMapper
} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
