/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/GroupOwnerSetting.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Attributes that define a local device resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/LocalDeviceResourceData">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API LocalDeviceResourceData
  {
  public:
    LocalDeviceResourceData();
    LocalDeviceResourceData(Aws::Utils::Json::JsonView jsonValue);
    LocalDeviceResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Group/owner related settings for local resources.
     */
    inline const GroupOwnerSetting& GetGroupOwnerSetting() const{ return m_groupOwnerSetting; }

    /**
     * Group/owner related settings for local resources.
     */
    inline bool GroupOwnerSettingHasBeenSet() const { return m_groupOwnerSettingHasBeenSet; }

    /**
     * Group/owner related settings for local resources.
     */
    inline void SetGroupOwnerSetting(const GroupOwnerSetting& value) { m_groupOwnerSettingHasBeenSet = true; m_groupOwnerSetting = value; }

    /**
     * Group/owner related settings for local resources.
     */
    inline void SetGroupOwnerSetting(GroupOwnerSetting&& value) { m_groupOwnerSettingHasBeenSet = true; m_groupOwnerSetting = std::move(value); }

    /**
     * Group/owner related settings for local resources.
     */
    inline LocalDeviceResourceData& WithGroupOwnerSetting(const GroupOwnerSetting& value) { SetGroupOwnerSetting(value); return *this;}

    /**
     * Group/owner related settings for local resources.
     */
    inline LocalDeviceResourceData& WithGroupOwnerSetting(GroupOwnerSetting&& value) { SetGroupOwnerSetting(std::move(value)); return *this;}


    /**
     * The local absolute path of the device resource. The source path for a device
     * resource can refer only to a character device or block device under ''/dev''.
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * The local absolute path of the device resource. The source path for a device
     * resource can refer only to a character device or block device under ''/dev''.
     */
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }

    /**
     * The local absolute path of the device resource. The source path for a device
     * resource can refer only to a character device or block device under ''/dev''.
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * The local absolute path of the device resource. The source path for a device
     * resource can refer only to a character device or block device under ''/dev''.
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }

    /**
     * The local absolute path of the device resource. The source path for a device
     * resource can refer only to a character device or block device under ''/dev''.
     */
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }

    /**
     * The local absolute path of the device resource. The source path for a device
     * resource can refer only to a character device or block device under ''/dev''.
     */
    inline LocalDeviceResourceData& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * The local absolute path of the device resource. The source path for a device
     * resource can refer only to a character device or block device under ''/dev''.
     */
    inline LocalDeviceResourceData& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * The local absolute path of the device resource. The source path for a device
     * resource can refer only to a character device or block device under ''/dev''.
     */
    inline LocalDeviceResourceData& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}

  private:

    GroupOwnerSetting m_groupOwnerSetting;
    bool m_groupOwnerSettingHasBeenSet;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
