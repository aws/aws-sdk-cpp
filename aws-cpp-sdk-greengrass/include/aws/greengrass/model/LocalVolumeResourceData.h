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
    AWS_GREENGRASS_API LocalVolumeResourceData();
    AWS_GREENGRASS_API LocalVolumeResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API LocalVolumeResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline const Aws::String& GetDestinationPath() const{ return m_destinationPath; }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline void SetDestinationPath(const Aws::String& value) { m_destinationPathHasBeenSet = true; m_destinationPath = value; }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline void SetDestinationPath(Aws::String&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::move(value); }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline void SetDestinationPath(const char* value) { m_destinationPathHasBeenSet = true; m_destinationPath.assign(value); }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline LocalVolumeResourceData& WithDestinationPath(const Aws::String& value) { SetDestinationPath(value); return *this;}

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline LocalVolumeResourceData& WithDestinationPath(Aws::String&& value) { SetDestinationPath(std::move(value)); return *this;}

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline LocalVolumeResourceData& WithDestinationPath(const char* value) { SetDestinationPath(value); return *this;}


    /**
     * Allows you to configure additional group privileges for the Lambda process. This
     * field is optional.
     */
    inline const GroupOwnerSetting& GetGroupOwnerSetting() const{ return m_groupOwnerSetting; }

    /**
     * Allows you to configure additional group privileges for the Lambda process. This
     * field is optional.
     */
    inline bool GroupOwnerSettingHasBeenSet() const { return m_groupOwnerSettingHasBeenSet; }

    /**
     * Allows you to configure additional group privileges for the Lambda process. This
     * field is optional.
     */
    inline void SetGroupOwnerSetting(const GroupOwnerSetting& value) { m_groupOwnerSettingHasBeenSet = true; m_groupOwnerSetting = value; }

    /**
     * Allows you to configure additional group privileges for the Lambda process. This
     * field is optional.
     */
    inline void SetGroupOwnerSetting(GroupOwnerSetting&& value) { m_groupOwnerSettingHasBeenSet = true; m_groupOwnerSetting = std::move(value); }

    /**
     * Allows you to configure additional group privileges for the Lambda process. This
     * field is optional.
     */
    inline LocalVolumeResourceData& WithGroupOwnerSetting(const GroupOwnerSetting& value) { SetGroupOwnerSetting(value); return *this;}

    /**
     * Allows you to configure additional group privileges for the Lambda process. This
     * field is optional.
     */
    inline LocalVolumeResourceData& WithGroupOwnerSetting(GroupOwnerSetting&& value) { SetGroupOwnerSetting(std::move(value)); return *this;}


    /**
     * The local absolute path of the volume resource on the host. The source path for
     * a volume resource type cannot start with ''/sys''.
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * The local absolute path of the volume resource on the host. The source path for
     * a volume resource type cannot start with ''/sys''.
     */
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }

    /**
     * The local absolute path of the volume resource on the host. The source path for
     * a volume resource type cannot start with ''/sys''.
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * The local absolute path of the volume resource on the host. The source path for
     * a volume resource type cannot start with ''/sys''.
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }

    /**
     * The local absolute path of the volume resource on the host. The source path for
     * a volume resource type cannot start with ''/sys''.
     */
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }

    /**
     * The local absolute path of the volume resource on the host. The source path for
     * a volume resource type cannot start with ''/sys''.
     */
    inline LocalVolumeResourceData& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * The local absolute path of the volume resource on the host. The source path for
     * a volume resource type cannot start with ''/sys''.
     */
    inline LocalVolumeResourceData& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * The local absolute path of the volume resource on the host. The source path for
     * a volume resource type cannot start with ''/sys''.
     */
    inline LocalVolumeResourceData& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}

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
