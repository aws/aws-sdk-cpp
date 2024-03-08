/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{
  enum class MetadataTransferJobState
  {
    NOT_SET,
    VALIDATING,
    PENDING,
    RUNNING,
    CANCELLING,
    ERROR_,
    COMPLETED,
    CANCELLED
  };

namespace MetadataTransferJobStateMapper
{
AWS_IOTTWINMAKER_API MetadataTransferJobState GetMetadataTransferJobStateForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForMetadataTransferJobState(MetadataTransferJobState value);
} // namespace MetadataTransferJobStateMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
