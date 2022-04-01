/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class CommsProtocol
  {
    NOT_SET,
    SIP,
    SIPS,
    H323
  };

namespace CommsProtocolMapper
{
AWS_ALEXAFORBUSINESS_API CommsProtocol GetCommsProtocolForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForCommsProtocol(CommsProtocol value);
} // namespace CommsProtocolMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
