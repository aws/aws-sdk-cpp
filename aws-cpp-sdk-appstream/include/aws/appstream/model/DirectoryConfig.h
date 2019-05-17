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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ServiceAccountCredentials.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the configuration information required to join fleets and image
   * builders to Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DirectoryConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API DirectoryConfig
  {
  public:
    DirectoryConfig();
    DirectoryConfig(Aws::Utils::Json::JsonView jsonValue);
    DirectoryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline const Aws::String& GetDirectoryName() const{ return m_directoryName; }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline void SetDirectoryName(const Aws::String& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline void SetDirectoryName(Aws::String&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::move(value); }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline void SetDirectoryName(const char* value) { m_directoryNameHasBeenSet = true; m_directoryName.assign(value); }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline DirectoryConfig& WithDirectoryName(const Aws::String& value) { SetDirectoryName(value); return *this;}

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline DirectoryConfig& WithDirectoryName(Aws::String&& value) { SetDirectoryName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline DirectoryConfig& WithDirectoryName(const char* value) { SetDirectoryName(value); return *this;}


    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitDistinguishedNames() const{ return m_organizationalUnitDistinguishedNames; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline bool OrganizationalUnitDistinguishedNamesHasBeenSet() const { return m_organizationalUnitDistinguishedNamesHasBeenSet; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline void SetOrganizationalUnitDistinguishedNames(const Aws::Vector<Aws::String>& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames = value; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline void SetOrganizationalUnitDistinguishedNames(Aws::Vector<Aws::String>&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames = std::move(value); }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline DirectoryConfig& WithOrganizationalUnitDistinguishedNames(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitDistinguishedNames(value); return *this;}

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline DirectoryConfig& WithOrganizationalUnitDistinguishedNames(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitDistinguishedNames(std::move(value)); return *this;}

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline DirectoryConfig& AddOrganizationalUnitDistinguishedNames(const Aws::String& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(value); return *this; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline DirectoryConfig& AddOrganizationalUnitDistinguishedNames(Aws::String&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline DirectoryConfig& AddOrganizationalUnitDistinguishedNames(const char* value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(value); return *this; }


    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline const ServiceAccountCredentials& GetServiceAccountCredentials() const{ return m_serviceAccountCredentials; }

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline bool ServiceAccountCredentialsHasBeenSet() const { return m_serviceAccountCredentialsHasBeenSet; }

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline void SetServiceAccountCredentials(const ServiceAccountCredentials& value) { m_serviceAccountCredentialsHasBeenSet = true; m_serviceAccountCredentials = value; }

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline void SetServiceAccountCredentials(ServiceAccountCredentials&& value) { m_serviceAccountCredentialsHasBeenSet = true; m_serviceAccountCredentials = std::move(value); }

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline DirectoryConfig& WithServiceAccountCredentials(const ServiceAccountCredentials& value) { SetServiceAccountCredentials(value); return *this;}

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline DirectoryConfig& WithServiceAccountCredentials(ServiceAccountCredentials&& value) { SetServiceAccountCredentials(std::move(value)); return *this;}


    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline DirectoryConfig& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline DirectoryConfig& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet;

    Aws::Vector<Aws::String> m_organizationalUnitDistinguishedNames;
    bool m_organizationalUnitDistinguishedNamesHasBeenSet;

    ServiceAccountCredentials m_serviceAccountCredentials;
    bool m_serviceAccountCredentialsHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
