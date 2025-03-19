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
    AWS_GREENGRASS_API LocalDeviceResourceData() = default;
    AWS_GREENGRASS_API LocalDeviceResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API LocalDeviceResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Group/owner related settings for local resources.
     */
    inline const GroupOwnerSetting& GetGroupOwnerSetting() const { return m_groupOwnerSetting; }
    inline bool GroupOwnerSettingHasBeenSet() const { return m_groupOwnerSettingHasBeenSet; }
    template<typename GroupOwnerSettingT = GroupOwnerSetting>
    void SetGroupOwnerSetting(GroupOwnerSettingT&& value) { m_groupOwnerSettingHasBeenSet = true; m_groupOwnerSetting = std::forward<GroupOwnerSettingT>(value); }
    template<typename GroupOwnerSettingT = GroupOwnerSetting>
    LocalDeviceResourceData& WithGroupOwnerSetting(GroupOwnerSettingT&& value) { SetGroupOwnerSetting(std::forward<GroupOwnerSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The local absolute path of the device resource. The source path for a device
     * resource can refer only to a character device or block device under ''/dev''.
     */
    inline const Aws::String& GetSourcePath() const { return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    template<typename SourcePathT = Aws::String>
    void SetSourcePath(SourcePathT&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::forward<SourcePathT>(value); }
    template<typename SourcePathT = Aws::String>
    LocalDeviceResourceData& WithSourcePath(SourcePathT&& value) { SetSourcePath(std::forward<SourcePathT>(value)); return *this;}
    ///@}
  private:

    GroupOwnerSetting m_groupOwnerSetting;
    bool m_groupOwnerSettingHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
