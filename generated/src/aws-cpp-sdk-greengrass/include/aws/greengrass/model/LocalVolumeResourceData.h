/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/GroupOwnerSetting.h>
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
   * Attributes that define a local volume resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/LocalVolumeResourceData">AWS
   * API Reference</a></p>
   */
  class LocalVolumeResourceData
  {
  public:
    AWS_GREENGRASS_API LocalVolumeResourceData() = default;
    AWS_GREENGRASS_API LocalVolumeResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API LocalVolumeResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline const Aws::String& GetDestinationPath() const { return m_destinationPath; }
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }
    template<typename DestinationPathT = Aws::String>
    void SetDestinationPath(DestinationPathT&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::forward<DestinationPathT>(value); }
    template<typename DestinationPathT = Aws::String>
    LocalVolumeResourceData& WithDestinationPath(DestinationPathT&& value) { SetDestinationPath(std::forward<DestinationPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Allows you to configure additional group privileges for the Lambda process. This
     * field is optional.
     */
    inline const GroupOwnerSetting& GetGroupOwnerSetting() const { return m_groupOwnerSetting; }
    inline bool GroupOwnerSettingHasBeenSet() const { return m_groupOwnerSettingHasBeenSet; }
    template<typename GroupOwnerSettingT = GroupOwnerSetting>
    void SetGroupOwnerSetting(GroupOwnerSettingT&& value) { m_groupOwnerSettingHasBeenSet = true; m_groupOwnerSetting = std::forward<GroupOwnerSettingT>(value); }
    template<typename GroupOwnerSettingT = GroupOwnerSetting>
    LocalVolumeResourceData& WithGroupOwnerSetting(GroupOwnerSettingT&& value) { SetGroupOwnerSetting(std::forward<GroupOwnerSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The local absolute path of the volume resource on the host. The source path for
     * a volume resource type cannot start with ''/sys''.
     */
    inline const Aws::String& GetSourcePath() const { return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    template<typename SourcePathT = Aws::String>
    void SetSourcePath(SourcePathT&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::forward<SourcePathT>(value); }
    template<typename SourcePathT = Aws::String>
    LocalVolumeResourceData& WithSourcePath(SourcePathT&& value) { SetSourcePath(std::forward<SourcePathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet = false;

    GroupOwnerSetting m_groupOwnerSetting;
    bool m_groupOwnerSettingHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
