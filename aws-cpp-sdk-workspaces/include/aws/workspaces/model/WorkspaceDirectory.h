/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/WorkspaceDirectoryType.h>
#include <aws/workspaces/model/WorkspaceDirectoryState.h>
#include <aws/workspaces/model/DefaultWorkspaceCreationProperties.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains information about an AWS Directory Service directory for use with
   * Amazon WorkSpaces.</p>
   */
  class AWS_WORKSPACES_API WorkspaceDirectory
  {
  public:
    WorkspaceDirectory();
    WorkspaceDirectory(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkspaceDirectory& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The directory identifier.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The directory identifier.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The directory identifier.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The directory identifier.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The directory identifier.</p>
     */
    inline WorkspaceDirectory& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory identifier.</p>
     */
    inline WorkspaceDirectory& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory identifier.</p>
     */
    inline WorkspaceDirectory& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory alias.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The directory alias.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The directory alias.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The directory alias.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The directory alias.</p>
     */
    inline WorkspaceDirectory& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The directory alias.</p>
     */
    inline WorkspaceDirectory& WithAlias(Aws::String&& value) { SetAlias(value); return *this;}

    /**
     * <p>The directory alias.</p>
     */
    inline WorkspaceDirectory& WithAlias(const char* value) { SetAlias(value); return *this;}

    /**
     * <p>The name of the directory.</p>
     */
    inline const Aws::String& GetDirectoryName() const{ return m_directoryName; }

    /**
     * <p>The name of the directory.</p>
     */
    inline void SetDirectoryName(const Aws::String& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }

    /**
     * <p>The name of the directory.</p>
     */
    inline void SetDirectoryName(Aws::String&& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }

    /**
     * <p>The name of the directory.</p>
     */
    inline void SetDirectoryName(const char* value) { m_directoryNameHasBeenSet = true; m_directoryName.assign(value); }

    /**
     * <p>The name of the directory.</p>
     */
    inline WorkspaceDirectory& WithDirectoryName(const Aws::String& value) { SetDirectoryName(value); return *this;}

    /**
     * <p>The name of the directory.</p>
     */
    inline WorkspaceDirectory& WithDirectoryName(Aws::String&& value) { SetDirectoryName(value); return *this;}

    /**
     * <p>The name of the directory.</p>
     */
    inline WorkspaceDirectory& WithDirectoryName(const char* value) { SetDirectoryName(value); return *this;}

    /**
     * <p>The registration code for the directory. This is the code that users enter in
     * their Amazon WorkSpaces client application to connect to the directory.</p>
     */
    inline const Aws::String& GetRegistrationCode() const{ return m_registrationCode; }

    /**
     * <p>The registration code for the directory. This is the code that users enter in
     * their Amazon WorkSpaces client application to connect to the directory.</p>
     */
    inline void SetRegistrationCode(const Aws::String& value) { m_registrationCodeHasBeenSet = true; m_registrationCode = value; }

    /**
     * <p>The registration code for the directory. This is the code that users enter in
     * their Amazon WorkSpaces client application to connect to the directory.</p>
     */
    inline void SetRegistrationCode(Aws::String&& value) { m_registrationCodeHasBeenSet = true; m_registrationCode = value; }

    /**
     * <p>The registration code for the directory. This is the code that users enter in
     * their Amazon WorkSpaces client application to connect to the directory.</p>
     */
    inline void SetRegistrationCode(const char* value) { m_registrationCodeHasBeenSet = true; m_registrationCode.assign(value); }

    /**
     * <p>The registration code for the directory. This is the code that users enter in
     * their Amazon WorkSpaces client application to connect to the directory.</p>
     */
    inline WorkspaceDirectory& WithRegistrationCode(const Aws::String& value) { SetRegistrationCode(value); return *this;}

    /**
     * <p>The registration code for the directory. This is the code that users enter in
     * their Amazon WorkSpaces client application to connect to the directory.</p>
     */
    inline WorkspaceDirectory& WithRegistrationCode(Aws::String&& value) { SetRegistrationCode(value); return *this;}

    /**
     * <p>The registration code for the directory. This is the code that users enter in
     * their Amazon WorkSpaces client application to connect to the directory.</p>
     */
    inline WorkspaceDirectory& WithRegistrationCode(const char* value) { SetRegistrationCode(value); return *this;}

    /**
     * <p>An array of strings that contains the identifiers of the subnets used with
     * the directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>An array of strings that contains the identifiers of the subnets used with
     * the directory.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>An array of strings that contains the identifiers of the subnets used with
     * the directory.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>An array of strings that contains the identifiers of the subnets used with
     * the directory.</p>
     */
    inline WorkspaceDirectory& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>An array of strings that contains the identifiers of the subnets used with
     * the directory.</p>
     */
    inline WorkspaceDirectory& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>An array of strings that contains the identifiers of the subnets used with
     * the directory.</p>
     */
    inline WorkspaceDirectory& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the identifiers of the subnets used with
     * the directory.</p>
     */
    inline WorkspaceDirectory& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the identifiers of the subnets used with
     * the directory.</p>
     */
    inline WorkspaceDirectory& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the IP addresses of the DNS servers for the
     * directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddresses() const{ return m_dnsIpAddresses; }

    /**
     * <p>An array of strings that contains the IP addresses of the DNS servers for the
     * directory.</p>
     */
    inline void SetDnsIpAddresses(const Aws::Vector<Aws::String>& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = value; }

    /**
     * <p>An array of strings that contains the IP addresses of the DNS servers for the
     * directory.</p>
     */
    inline void SetDnsIpAddresses(Aws::Vector<Aws::String>&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = value; }

    /**
     * <p>An array of strings that contains the IP addresses of the DNS servers for the
     * directory.</p>
     */
    inline WorkspaceDirectory& WithDnsIpAddresses(const Aws::Vector<Aws::String>& value) { SetDnsIpAddresses(value); return *this;}

    /**
     * <p>An array of strings that contains the IP addresses of the DNS servers for the
     * directory.</p>
     */
    inline WorkspaceDirectory& WithDnsIpAddresses(Aws::Vector<Aws::String>&& value) { SetDnsIpAddresses(value); return *this;}

    /**
     * <p>An array of strings that contains the IP addresses of the DNS servers for the
     * directory.</p>
     */
    inline WorkspaceDirectory& AddDnsIpAddresses(const Aws::String& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the IP addresses of the DNS servers for the
     * directory.</p>
     */
    inline WorkspaceDirectory& AddDnsIpAddresses(Aws::String&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the IP addresses of the DNS servers for the
     * directory.</p>
     */
    inline WorkspaceDirectory& AddDnsIpAddresses(const char* value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(value); return *this; }

    /**
     * <p>The user name for the service account.</p>
     */
    inline const Aws::String& GetCustomerUserName() const{ return m_customerUserName; }

    /**
     * <p>The user name for the service account.</p>
     */
    inline void SetCustomerUserName(const Aws::String& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = value; }

    /**
     * <p>The user name for the service account.</p>
     */
    inline void SetCustomerUserName(Aws::String&& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = value; }

    /**
     * <p>The user name for the service account.</p>
     */
    inline void SetCustomerUserName(const char* value) { m_customerUserNameHasBeenSet = true; m_customerUserName.assign(value); }

    /**
     * <p>The user name for the service account.</p>
     */
    inline WorkspaceDirectory& WithCustomerUserName(const Aws::String& value) { SetCustomerUserName(value); return *this;}

    /**
     * <p>The user name for the service account.</p>
     */
    inline WorkspaceDirectory& WithCustomerUserName(Aws::String&& value) { SetCustomerUserName(value); return *this;}

    /**
     * <p>The user name for the service account.</p>
     */
    inline WorkspaceDirectory& WithCustomerUserName(const char* value) { SetCustomerUserName(value); return *this;}

    /**
     * <p>The identifier of the IAM role. This is the role that allows Amazon
     * WorkSpaces to make calls to other services, such as Amazon EC2, on your
     * behalf.</p>
     */
    inline const Aws::String& GetIamRoleId() const{ return m_iamRoleId; }

    /**
     * <p>The identifier of the IAM role. This is the role that allows Amazon
     * WorkSpaces to make calls to other services, such as Amazon EC2, on your
     * behalf.</p>
     */
    inline void SetIamRoleId(const Aws::String& value) { m_iamRoleIdHasBeenSet = true; m_iamRoleId = value; }

    /**
     * <p>The identifier of the IAM role. This is the role that allows Amazon
     * WorkSpaces to make calls to other services, such as Amazon EC2, on your
     * behalf.</p>
     */
    inline void SetIamRoleId(Aws::String&& value) { m_iamRoleIdHasBeenSet = true; m_iamRoleId = value; }

    /**
     * <p>The identifier of the IAM role. This is the role that allows Amazon
     * WorkSpaces to make calls to other services, such as Amazon EC2, on your
     * behalf.</p>
     */
    inline void SetIamRoleId(const char* value) { m_iamRoleIdHasBeenSet = true; m_iamRoleId.assign(value); }

    /**
     * <p>The identifier of the IAM role. This is the role that allows Amazon
     * WorkSpaces to make calls to other services, such as Amazon EC2, on your
     * behalf.</p>
     */
    inline WorkspaceDirectory& WithIamRoleId(const Aws::String& value) { SetIamRoleId(value); return *this;}

    /**
     * <p>The identifier of the IAM role. This is the role that allows Amazon
     * WorkSpaces to make calls to other services, such as Amazon EC2, on your
     * behalf.</p>
     */
    inline WorkspaceDirectory& WithIamRoleId(Aws::String&& value) { SetIamRoleId(value); return *this;}

    /**
     * <p>The identifier of the IAM role. This is the role that allows Amazon
     * WorkSpaces to make calls to other services, such as Amazon EC2, on your
     * behalf.</p>
     */
    inline WorkspaceDirectory& WithIamRoleId(const char* value) { SetIamRoleId(value); return *this;}

    /**
     * <p>The directory type.</p>
     */
    inline const WorkspaceDirectoryType& GetDirectoryType() const{ return m_directoryType; }

    /**
     * <p>The directory type.</p>
     */
    inline void SetDirectoryType(const WorkspaceDirectoryType& value) { m_directoryTypeHasBeenSet = true; m_directoryType = value; }

    /**
     * <p>The directory type.</p>
     */
    inline void SetDirectoryType(WorkspaceDirectoryType&& value) { m_directoryTypeHasBeenSet = true; m_directoryType = value; }

    /**
     * <p>The directory type.</p>
     */
    inline WorkspaceDirectory& WithDirectoryType(const WorkspaceDirectoryType& value) { SetDirectoryType(value); return *this;}

    /**
     * <p>The directory type.</p>
     */
    inline WorkspaceDirectory& WithDirectoryType(WorkspaceDirectoryType&& value) { SetDirectoryType(value); return *this;}

    /**
     * <p>The identifier of the security group that is assigned to new WorkSpaces.</p>
     */
    inline const Aws::String& GetWorkspaceSecurityGroupId() const{ return m_workspaceSecurityGroupId; }

    /**
     * <p>The identifier of the security group that is assigned to new WorkSpaces.</p>
     */
    inline void SetWorkspaceSecurityGroupId(const Aws::String& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = value; }

    /**
     * <p>The identifier of the security group that is assigned to new WorkSpaces.</p>
     */
    inline void SetWorkspaceSecurityGroupId(Aws::String&& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = value; }

    /**
     * <p>The identifier of the security group that is assigned to new WorkSpaces.</p>
     */
    inline void SetWorkspaceSecurityGroupId(const char* value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId.assign(value); }

    /**
     * <p>The identifier of the security group that is assigned to new WorkSpaces.</p>
     */
    inline WorkspaceDirectory& WithWorkspaceSecurityGroupId(const Aws::String& value) { SetWorkspaceSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of the security group that is assigned to new WorkSpaces.</p>
     */
    inline WorkspaceDirectory& WithWorkspaceSecurityGroupId(Aws::String&& value) { SetWorkspaceSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of the security group that is assigned to new WorkSpaces.</p>
     */
    inline WorkspaceDirectory& WithWorkspaceSecurityGroupId(const char* value) { SetWorkspaceSecurityGroupId(value); return *this;}

    /**
     * <p>The state of the directory's registration with Amazon WorkSpaces</p>
     */
    inline const WorkspaceDirectoryState& GetState() const{ return m_state; }

    /**
     * <p>The state of the directory's registration with Amazon WorkSpaces</p>
     */
    inline void SetState(const WorkspaceDirectoryState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the directory's registration with Amazon WorkSpaces</p>
     */
    inline void SetState(WorkspaceDirectoryState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the directory's registration with Amazon WorkSpaces</p>
     */
    inline WorkspaceDirectory& WithState(const WorkspaceDirectoryState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the directory's registration with Amazon WorkSpaces</p>
     */
    inline WorkspaceDirectory& WithState(WorkspaceDirectoryState&& value) { SetState(value); return *this;}

    /**
     * <p>A structure that specifies the default creation properties for all WorkSpaces
     * in the directory.</p>
     */
    inline const DefaultWorkspaceCreationProperties& GetWorkspaceCreationProperties() const{ return m_workspaceCreationProperties; }

    /**
     * <p>A structure that specifies the default creation properties for all WorkSpaces
     * in the directory.</p>
     */
    inline void SetWorkspaceCreationProperties(const DefaultWorkspaceCreationProperties& value) { m_workspaceCreationPropertiesHasBeenSet = true; m_workspaceCreationProperties = value; }

    /**
     * <p>A structure that specifies the default creation properties for all WorkSpaces
     * in the directory.</p>
     */
    inline void SetWorkspaceCreationProperties(DefaultWorkspaceCreationProperties&& value) { m_workspaceCreationPropertiesHasBeenSet = true; m_workspaceCreationProperties = value; }

    /**
     * <p>A structure that specifies the default creation properties for all WorkSpaces
     * in the directory.</p>
     */
    inline WorkspaceDirectory& WithWorkspaceCreationProperties(const DefaultWorkspaceCreationProperties& value) { SetWorkspaceCreationProperties(value); return *this;}

    /**
     * <p>A structure that specifies the default creation properties for all WorkSpaces
     * in the directory.</p>
     */
    inline WorkspaceDirectory& WithWorkspaceCreationProperties(DefaultWorkspaceCreationProperties&& value) { SetWorkspaceCreationProperties(value); return *this;}

  private:
    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;
    Aws::String m_alias;
    bool m_aliasHasBeenSet;
    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet;
    Aws::String m_registrationCode;
    bool m_registrationCodeHasBeenSet;
    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;
    Aws::Vector<Aws::String> m_dnsIpAddresses;
    bool m_dnsIpAddressesHasBeenSet;
    Aws::String m_customerUserName;
    bool m_customerUserNameHasBeenSet;
    Aws::String m_iamRoleId;
    bool m_iamRoleIdHasBeenSet;
    WorkspaceDirectoryType m_directoryType;
    bool m_directoryTypeHasBeenSet;
    Aws::String m_workspaceSecurityGroupId;
    bool m_workspaceSecurityGroupIdHasBeenSet;
    WorkspaceDirectoryState m_state;
    bool m_stateHasBeenSet;
    DefaultWorkspaceCreationProperties m_workspaceCreationProperties;
    bool m_workspaceCreationPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
