/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class ConfiguredAudienceModelStatus
  {
    NOT_SET,
    ACTIVE
  };

namespace ConfiguredAudienceModelStatusMapper
{
AWS_CLEANROOMSML_API ConfiguredAudienceModelStatus GetConfiguredAudienceModelStatusForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForConfiguredAudienceModelStatus(ConfiguredAudienceModelStatus value);
} // namespace ConfiguredAudienceModelStatusMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
