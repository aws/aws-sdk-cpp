/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Sidewalk-related information for devices in an import task that are being
   * onboarded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkGetStartImportInfo">AWS
   * API Reference</a></p>
   */
  class SidewalkGetStartImportInfo
  {
  public:
    AWS_IOTWIRELESS_API SidewalkGetStartImportInfo() = default;
    AWS_IOTWIRELESS_API SidewalkGetStartImportInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkGetStartImportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of Sidewalk devices that are added to the import task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceCreationFileList() const { return m_deviceCreationFileList; }
    inline bool DeviceCreationFileListHasBeenSet() const { return m_deviceCreationFileListHasBeenSet; }
    template<typename DeviceCreationFileListT = Aws::Vector<Aws::String>>
    void SetDeviceCreationFileList(DeviceCreationFileListT&& value) { m_deviceCreationFileListHasBeenSet = true; m_deviceCreationFileList = std::forward<DeviceCreationFileListT>(value); }
    template<typename DeviceCreationFileListT = Aws::Vector<Aws::String>>
    SidewalkGetStartImportInfo& WithDeviceCreationFileList(DeviceCreationFileListT&& value) { SetDeviceCreationFileList(std::forward<DeviceCreationFileListT>(value)); return *this;}
    template<typename DeviceCreationFileListT = Aws::String>
    SidewalkGetStartImportInfo& AddDeviceCreationFileList(DeviceCreationFileListT&& value) { m_deviceCreationFileListHasBeenSet = true; m_deviceCreationFileList.emplace_back(std::forward<DeviceCreationFileListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that allows AWS IoT Wireless to access the CSV file in the S3
     * bucket.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    SidewalkGetStartImportInfo& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deviceCreationFileList;
    bool m_deviceCreationFileListHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
