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
  enum class VolumeType
  {
    NOT_SET,
    standard,
    gp2,
    io1
  };

namespace VolumeTypeMapper
{
AWS_ELASTICSEARCHSERVICE_API VolumeType GetVolumeTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForVolumeType(VolumeType value);
} // namespace VolumeTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
