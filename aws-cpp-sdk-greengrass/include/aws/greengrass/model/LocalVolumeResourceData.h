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
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Attributes that define the Local Volume Resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/LocalVolumeResourceData">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API LocalVolumeResourceData
  {
  public:
    LocalVolumeResourceData();
    LocalVolumeResourceData(const Aws::Utils::Json::JsonValue& jsonValue);
    LocalVolumeResourceData& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Local destination path of the resource.
     */
    inline const Aws::String& GetDestinationPath() const{ return m_destinationPath; }

    /**
     * Local destination path of the resource.
     */
    inline void SetDestinationPath(const Aws::String& value) { m_destinationPathHasBeenSet = true; m_destinationPath = value; }

    /**
     * Local destination path of the resource.
     */
    inline void SetDestinationPath(Aws::String&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::move(value); }

    /**
     * Local destination path of the resource.
     */
    inline void SetDestinationPath(const char* value) { m_destinationPathHasBeenSet = true; m_destinationPath.assign(value); }

    /**
     * Local destination path of the resource.
     */
    inline LocalVolumeResourceData& WithDestinationPath(const Aws::String& value) { SetDestinationPath(value); return *this;}

    /**
     * Local destination path of the resource.
     */
    inline LocalVolumeResourceData& WithDestinationPath(Aws::String&& value) { SetDestinationPath(std::move(value)); return *this;}

    /**
     * Local destination path of the resource.
     */
    inline LocalVolumeResourceData& WithDestinationPath(const char* value) { SetDestinationPath(value); return *this;}


    /**
     * Group owner related settings for local resources.
     */
    inline const GroupOwnerSetting& GetGroupOwnerSetting() const{ return m_groupOwnerSetting; }

    /**
     * Group owner related settings for local resources.
     */
    inline void SetGroupOwnerSetting(const GroupOwnerSetting& value) { m_groupOwnerSettingHasBeenSet = true; m_groupOwnerSetting = value; }

    /**
     * Group owner related settings for local resources.
     */
    inline void SetGroupOwnerSetting(GroupOwnerSetting&& value) { m_groupOwnerSettingHasBeenSet = true; m_groupOwnerSetting = std::move(value); }

    /**
     * Group owner related settings for local resources.
     */
    inline LocalVolumeResourceData& WithGroupOwnerSetting(const GroupOwnerSetting& value) { SetGroupOwnerSetting(value); return *this;}

    /**
     * Group owner related settings for local resources.
     */
    inline LocalVolumeResourceData& WithGroupOwnerSetting(GroupOwnerSetting&& value) { SetGroupOwnerSetting(std::move(value)); return *this;}


    /**
     * Local source path of the resource.
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * Local source path of the resource.
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * Local source path of the resource.
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }

    /**
     * Local source path of the resource.
     */
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }

    /**
     * Local source path of the resource.
     */
    inline LocalVolumeResourceData& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * Local source path of the resource.
     */
    inline LocalVolumeResourceData& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * Local source path of the resource.
     */
    inline LocalVolumeResourceData& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}

  private:

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet;

    GroupOwnerSetting m_groupOwnerSetting;
    bool m_groupOwnerSettingHasBeenSet;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
