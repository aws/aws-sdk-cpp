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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/OperatingSystemConfigurationManager.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes supported operating systems in AWS OpsWorks Stacks.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/OperatingSystem">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API OperatingSystem
  {
  public:
    OperatingSystem();
    OperatingSystem(Aws::Utils::Json::JsonView jsonValue);
    OperatingSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline OperatingSystem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline OperatingSystem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline OperatingSystem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of a supported operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of a supported operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of a supported operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of a supported operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of a supported operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of a supported operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline OperatingSystem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of a supported operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline OperatingSystem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of a supported operating system, such as <code>Amazon Linux
     * 2018.03</code>.</p>
     */
    inline OperatingSystem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of a supported operating system, either <code>Linux</code> or
     * <code>Windows</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of a supported operating system, either <code>Linux</code> or
     * <code>Windows</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of a supported operating system, either <code>Linux</code> or
     * <code>Windows</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of a supported operating system, either <code>Linux</code> or
     * <code>Windows</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of a supported operating system, either <code>Linux</code> or
     * <code>Windows</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of a supported operating system, either <code>Linux</code> or
     * <code>Windows</code>.</p>
     */
    inline OperatingSystem& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of a supported operating system, either <code>Linux</code> or
     * <code>Windows</code>.</p>
     */
    inline OperatingSystem& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of a supported operating system, either <code>Linux</code> or
     * <code>Windows</code>.</p>
     */
    inline OperatingSystem& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>Supported configuration manager name and versions for an AWS OpsWorks Stacks
     * operating system.</p>
     */
    inline const Aws::Vector<OperatingSystemConfigurationManager>& GetConfigurationManagers() const{ return m_configurationManagers; }

    /**
     * <p>Supported configuration manager name and versions for an AWS OpsWorks Stacks
     * operating system.</p>
     */
    inline bool ConfigurationManagersHasBeenSet() const { return m_configurationManagersHasBeenSet; }

    /**
     * <p>Supported configuration manager name and versions for an AWS OpsWorks Stacks
     * operating system.</p>
     */
    inline void SetConfigurationManagers(const Aws::Vector<OperatingSystemConfigurationManager>& value) { m_configurationManagersHasBeenSet = true; m_configurationManagers = value; }

    /**
     * <p>Supported configuration manager name and versions for an AWS OpsWorks Stacks
     * operating system.</p>
     */
    inline void SetConfigurationManagers(Aws::Vector<OperatingSystemConfigurationManager>&& value) { m_configurationManagersHasBeenSet = true; m_configurationManagers = std::move(value); }

    /**
     * <p>Supported configuration manager name and versions for an AWS OpsWorks Stacks
     * operating system.</p>
     */
    inline OperatingSystem& WithConfigurationManagers(const Aws::Vector<OperatingSystemConfigurationManager>& value) { SetConfigurationManagers(value); return *this;}

    /**
     * <p>Supported configuration manager name and versions for an AWS OpsWorks Stacks
     * operating system.</p>
     */
    inline OperatingSystem& WithConfigurationManagers(Aws::Vector<OperatingSystemConfigurationManager>&& value) { SetConfigurationManagers(std::move(value)); return *this;}

    /**
     * <p>Supported configuration manager name and versions for an AWS OpsWorks Stacks
     * operating system.</p>
     */
    inline OperatingSystem& AddConfigurationManagers(const OperatingSystemConfigurationManager& value) { m_configurationManagersHasBeenSet = true; m_configurationManagers.push_back(value); return *this; }

    /**
     * <p>Supported configuration manager name and versions for an AWS OpsWorks Stacks
     * operating system.</p>
     */
    inline OperatingSystem& AddConfigurationManagers(OperatingSystemConfigurationManager&& value) { m_configurationManagersHasBeenSet = true; m_configurationManagers.push_back(std::move(value)); return *this; }


    /**
     * <p>A short name for the operating system manufacturer.</p>
     */
    inline const Aws::String& GetReportedName() const{ return m_reportedName; }

    /**
     * <p>A short name for the operating system manufacturer.</p>
     */
    inline bool ReportedNameHasBeenSet() const { return m_reportedNameHasBeenSet; }

    /**
     * <p>A short name for the operating system manufacturer.</p>
     */
    inline void SetReportedName(const Aws::String& value) { m_reportedNameHasBeenSet = true; m_reportedName = value; }

    /**
     * <p>A short name for the operating system manufacturer.</p>
     */
    inline void SetReportedName(Aws::String&& value) { m_reportedNameHasBeenSet = true; m_reportedName = std::move(value); }

    /**
     * <p>A short name for the operating system manufacturer.</p>
     */
    inline void SetReportedName(const char* value) { m_reportedNameHasBeenSet = true; m_reportedName.assign(value); }

    /**
     * <p>A short name for the operating system manufacturer.</p>
     */
    inline OperatingSystem& WithReportedName(const Aws::String& value) { SetReportedName(value); return *this;}

    /**
     * <p>A short name for the operating system manufacturer.</p>
     */
    inline OperatingSystem& WithReportedName(Aws::String&& value) { SetReportedName(std::move(value)); return *this;}

    /**
     * <p>A short name for the operating system manufacturer.</p>
     */
    inline OperatingSystem& WithReportedName(const char* value) { SetReportedName(value); return *this;}


    /**
     * <p>The version of the operating system, including the release and edition, if
     * applicable.</p>
     */
    inline const Aws::String& GetReportedVersion() const{ return m_reportedVersion; }

    /**
     * <p>The version of the operating system, including the release and edition, if
     * applicable.</p>
     */
    inline bool ReportedVersionHasBeenSet() const { return m_reportedVersionHasBeenSet; }

    /**
     * <p>The version of the operating system, including the release and edition, if
     * applicable.</p>
     */
    inline void SetReportedVersion(const Aws::String& value) { m_reportedVersionHasBeenSet = true; m_reportedVersion = value; }

    /**
     * <p>The version of the operating system, including the release and edition, if
     * applicable.</p>
     */
    inline void SetReportedVersion(Aws::String&& value) { m_reportedVersionHasBeenSet = true; m_reportedVersion = std::move(value); }

    /**
     * <p>The version of the operating system, including the release and edition, if
     * applicable.</p>
     */
    inline void SetReportedVersion(const char* value) { m_reportedVersionHasBeenSet = true; m_reportedVersion.assign(value); }

    /**
     * <p>The version of the operating system, including the release and edition, if
     * applicable.</p>
     */
    inline OperatingSystem& WithReportedVersion(const Aws::String& value) { SetReportedVersion(value); return *this;}

    /**
     * <p>The version of the operating system, including the release and edition, if
     * applicable.</p>
     */
    inline OperatingSystem& WithReportedVersion(Aws::String&& value) { SetReportedVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the operating system, including the release and edition, if
     * applicable.</p>
     */
    inline OperatingSystem& WithReportedVersion(const char* value) { SetReportedVersion(value); return *this;}


    /**
     * <p>Indicates that an operating system is not supported for new instances.</p>
     */
    inline bool GetSupported() const{ return m_supported; }

    /**
     * <p>Indicates that an operating system is not supported for new instances.</p>
     */
    inline bool SupportedHasBeenSet() const { return m_supportedHasBeenSet; }

    /**
     * <p>Indicates that an operating system is not supported for new instances.</p>
     */
    inline void SetSupported(bool value) { m_supportedHasBeenSet = true; m_supported = value; }

    /**
     * <p>Indicates that an operating system is not supported for new instances.</p>
     */
    inline OperatingSystem& WithSupported(bool value) { SetSupported(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<OperatingSystemConfigurationManager> m_configurationManagers;
    bool m_configurationManagersHasBeenSet;

    Aws::String m_reportedName;
    bool m_reportedNameHasBeenSet;

    Aws::String m_reportedVersion;
    bool m_reportedVersionHasBeenSet;

    bool m_supported;
    bool m_supportedHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
