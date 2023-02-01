/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LocalDeviceResourceData
  {
  public:
    AWS_GREENGRASS_API LocalDeviceResourceData();
    AWS_GREENGRASS_API LocalDeviceResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API LocalDeviceResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_groupOwnerSettingHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
