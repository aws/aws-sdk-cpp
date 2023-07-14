/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{
  enum class ScanDirection
  {
    NOT_SET,
    FORWARD,
    BACKWARD
  };

namespace ScanDirectionMapper
{
AWS_CONNECTPARTICIPANT_API ScanDirection GetScanDirectionForName(const Aws::String& name);

AWS_CONNECTPARTICIPANT_API Aws::String GetNameForScanDirection(ScanDirection value);
} // namespace ScanDirectionMapper
} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
