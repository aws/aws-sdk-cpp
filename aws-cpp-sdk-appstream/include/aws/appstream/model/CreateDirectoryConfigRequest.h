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
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ServiceAccountCredentials.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API CreateDirectoryConfigRequest : public AppStreamRequest
  {
  public:
    CreateDirectoryConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDirectoryConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateDirectoryConfigRequest& WithDirectoryName(const Aws::String& value) { SetDirectoryName(value); return *this;}

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline CreateDirectoryConfigRequest& WithDirectoryName(Aws::String&& value) { SetDirectoryName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline CreateDirectoryConfigRequest& WithDirectoryName(const char* value) { SetDirectoryName(value); return *this;}


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
    inline CreateDirectoryConfigRequest& WithOrganizationalUnitDistinguishedNames(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitDistinguishedNames(value); return *this;}

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline CreateDirectoryConfigRequest& WithOrganizationalUnitDistinguishedNames(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitDistinguishedNames(std::move(value)); return *this;}

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline CreateDirectoryConfigRequest& AddOrganizationalUnitDistinguishedNames(const Aws::String& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(value); return *this; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline CreateDirectoryConfigRequest& AddOrganizationalUnitDistinguishedNames(Aws::String&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline CreateDirectoryConfigRequest& AddOrganizationalUnitDistinguishedNames(const char* value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(value); return *this; }


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
    inline CreateDirectoryConfigRequest& WithServiceAccountCredentials(const ServiceAccountCredentials& value) { SetServiceAccountCredentials(value); return *this;}

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline CreateDirectoryConfigRequest& WithServiceAccountCredentials(ServiceAccountCredentials&& value) { SetServiceAccountCredentials(std::move(value)); return *this;}

  private:

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet;

    Aws::Vector<Aws::String> m_organizationalUnitDistinguishedNames;
    bool m_organizationalUnitDistinguishedNamesHasBeenSet;

    ServiceAccountCredentials m_serviceAccountCredentials;
    bool m_serviceAccountCredentialsHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
