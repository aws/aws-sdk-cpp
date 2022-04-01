/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class EncryptionType
  {
    NOT_SET,
    SITEWISE_DEFAULT_ENCRYPTION,
    KMS_BASED_ENCRYPTION
  };

namespace EncryptionTypeMapper
{
AWS_IOTSITEWISE_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForEncryptionType(EncryptionType value);
} // namespace EncryptionTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
