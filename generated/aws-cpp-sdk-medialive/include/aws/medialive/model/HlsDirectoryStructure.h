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
  enum class HlsDirectoryStructure
  {
    NOT_SET,
    SINGLE_DIRECTORY,
    SUBDIRECTORY_PER_STREAM
  };

namespace HlsDirectoryStructureMapper
{
AWS_MEDIALIVE_API HlsDirectoryStructure GetHlsDirectoryStructureForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsDirectoryStructure(HlsDirectoryStructure value);
} // namespace HlsDirectoryStructureMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
