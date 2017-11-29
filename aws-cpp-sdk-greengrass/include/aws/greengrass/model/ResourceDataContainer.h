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
#include <aws/greengrass/model/LocalDeviceResourceData.h>
#include <aws/greengrass/model/LocalVolumeResourceData.h>
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
   * A container of data for all resource types.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResourceDataContainer">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API ResourceDataContainer
  {
  public:
    ResourceDataContainer();
    ResourceDataContainer(const Aws::Utils::Json::JsonValue& jsonValue);
    ResourceDataContainer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Attributes that define the Local Device Resource.
     */
    inline const LocalDeviceResourceData& GetLocalDeviceResourceData() const{ return m_localDeviceResourceData; }

    /**
     * Attributes that define the Local Device Resource.
     */
    inline void SetLocalDeviceResourceData(const LocalDeviceResourceData& value) { m_localDeviceResourceDataHasBeenSet = true; m_localDeviceResourceData = value; }

    /**
     * Attributes that define the Local Device Resource.
     */
    inline void SetLocalDeviceResourceData(LocalDeviceResourceData&& value) { m_localDeviceResourceDataHasBeenSet = true; m_localDeviceResourceData = std::move(value); }

    /**
     * Attributes that define the Local Device Resource.
     */
    inline ResourceDataContainer& WithLocalDeviceResourceData(const LocalDeviceResourceData& value) { SetLocalDeviceResourceData(value); return *this;}

    /**
     * Attributes that define the Local Device Resource.
     */
    inline ResourceDataContainer& WithLocalDeviceResourceData(LocalDeviceResourceData&& value) { SetLocalDeviceResourceData(std::move(value)); return *this;}


    /**
     * Attributes that define the Local Volume Resource.
     */
    inline const LocalVolumeResourceData& GetLocalVolumeResourceData() const{ return m_localVolumeResourceData; }

    /**
     * Attributes that define the Local Volume Resource.
     */
    inline void SetLocalVolumeResourceData(const LocalVolumeResourceData& value) { m_localVolumeResourceDataHasBeenSet = true; m_localVolumeResourceData = value; }

    /**
     * Attributes that define the Local Volume Resource.
     */
    inline void SetLocalVolumeResourceData(LocalVolumeResourceData&& value) { m_localVolumeResourceDataHasBeenSet = true; m_localVolumeResourceData = std::move(value); }

    /**
     * Attributes that define the Local Volume Resource.
     */
    inline ResourceDataContainer& WithLocalVolumeResourceData(const LocalVolumeResourceData& value) { SetLocalVolumeResourceData(value); return *this;}

    /**
     * Attributes that define the Local Volume Resource.
     */
    inline ResourceDataContainer& WithLocalVolumeResourceData(LocalVolumeResourceData&& value) { SetLocalVolumeResourceData(std::move(value)); return *this;}

  private:

    LocalDeviceResourceData m_localDeviceResourceData;
    bool m_localDeviceResourceDataHasBeenSet;

    LocalVolumeResourceData m_localVolumeResourceData;
    bool m_localVolumeResourceDataHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
