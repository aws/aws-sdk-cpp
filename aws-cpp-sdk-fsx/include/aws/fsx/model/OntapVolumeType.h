/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class OntapVolumeType
  {
    NOT_SET,
    RW,
    DP,
    LS
  };

namespace OntapVolumeTypeMapper
{
AWS_FSX_API OntapVolumeType GetOntapVolumeTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForOntapVolumeType(OntapVolumeType value);
} // namespace OntapVolumeTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
