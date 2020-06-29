/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class NetworkInputServerValidation
  {
    NOT_SET,
    CHECK_CRYPTOGRAPHY_AND_VALIDATE_NAME,
    CHECK_CRYPTOGRAPHY_ONLY
  };

namespace NetworkInputServerValidationMapper
{
AWS_MEDIALIVE_API NetworkInputServerValidation GetNetworkInputServerValidationForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForNetworkInputServerValidation(NetworkInputServerValidation value);
} // namespace NetworkInputServerValidationMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
