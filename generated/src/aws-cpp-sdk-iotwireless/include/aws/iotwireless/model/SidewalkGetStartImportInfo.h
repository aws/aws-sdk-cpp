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
    AWS_IOTWIRELESS_API SidewalkGetStartImportInfo();
    AWS_IOTWIRELESS_API SidewalkGetStartImportInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkGetStartImportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of Sidewalk devices that are added to the import task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceCreationFileList() const{ return m_deviceCreationFileList; }
    inline bool DeviceCreationFileListHasBeenSet() const { return m_deviceCreationFileListHasBeenSet; }
    inline void SetDeviceCreationFileList(const Aws::Vector<Aws::String>& value) { m_deviceCreationFileListHasBeenSet = true; m_deviceCreationFileList = value; }
    inline void SetDeviceCreationFileList(Aws::Vector<Aws::String>&& value) { m_deviceCreationFileListHasBeenSet = true; m_deviceCreationFileList = std::move(value); }
    inline SidewalkGetStartImportInfo& WithDeviceCreationFileList(const Aws::Vector<Aws::String>& value) { SetDeviceCreationFileList(value); return *this;}
    inline SidewalkGetStartImportInfo& WithDeviceCreationFileList(Aws::Vector<Aws::String>&& value) { SetDeviceCreationFileList(std::move(value)); return *this;}
    inline SidewalkGetStartImportInfo& AddDeviceCreationFileList(const Aws::String& value) { m_deviceCreationFileListHasBeenSet = true; m_deviceCreationFileList.push_back(value); return *this; }
    inline SidewalkGetStartImportInfo& AddDeviceCreationFileList(Aws::String&& value) { m_deviceCreationFileListHasBeenSet = true; m_deviceCreationFileList.push_back(std::move(value)); return *this; }
    inline SidewalkGetStartImportInfo& AddDeviceCreationFileList(const char* value) { m_deviceCreationFileListHasBeenSet = true; m_deviceCreationFileList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that allows AWS IoT Wireless to access the CSV file in the S3
     * bucket.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline SidewalkGetStartImportInfo& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline SidewalkGetStartImportInfo& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline SidewalkGetStartImportInfo& WithRole(const char* value) { SetRole(value); return *this;}
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
