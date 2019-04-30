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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Configuration properties for Hyperledger Fabric for a member in a Managed
   * Blockchain network using the Hyperledger Fabric framework.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberFabricConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API MemberFabricConfiguration
  {
  public:
    MemberFabricConfiguration();
    MemberFabricConfiguration(Aws::Utils::Json::JsonView jsonValue);
    MemberFabricConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user name for the member's initial administrative user.</p>
     */
    inline const Aws::String& GetAdminUsername() const{ return m_adminUsername; }

    /**
     * <p>The user name for the member's initial administrative user.</p>
     */
    inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }

    /**
     * <p>The user name for the member's initial administrative user.</p>
     */
    inline void SetAdminUsername(const Aws::String& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = value; }

    /**
     * <p>The user name for the member's initial administrative user.</p>
     */
    inline void SetAdminUsername(Aws::String&& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = std::move(value); }

    /**
     * <p>The user name for the member's initial administrative user.</p>
     */
    inline void SetAdminUsername(const char* value) { m_adminUsernameHasBeenSet = true; m_adminUsername.assign(value); }

    /**
     * <p>The user name for the member's initial administrative user.</p>
     */
    inline MemberFabricConfiguration& WithAdminUsername(const Aws::String& value) { SetAdminUsername(value); return *this;}

    /**
     * <p>The user name for the member's initial administrative user.</p>
     */
    inline MemberFabricConfiguration& WithAdminUsername(Aws::String&& value) { SetAdminUsername(std::move(value)); return *this;}

    /**
     * <p>The user name for the member's initial administrative user.</p>
     */
    inline MemberFabricConfiguration& WithAdminUsername(const char* value) { SetAdminUsername(value); return *this;}


    /**
     * <p>The password for the member's initial administrative user. The
     * <code>AdminPassword</code> must be at least eight characters long and no more
     * than 32 characters. It must contain at least one uppercase letter, one lowercase
     * letter, and one digit. It cannot have a single quote(‘), double quote(“),
     * forward slash(/), backward slash(\), @, or a space.</p>
     */
    inline const Aws::String& GetAdminPassword() const{ return m_adminPassword; }

    /**
     * <p>The password for the member's initial administrative user. The
     * <code>AdminPassword</code> must be at least eight characters long and no more
     * than 32 characters. It must contain at least one uppercase letter, one lowercase
     * letter, and one digit. It cannot have a single quote(‘), double quote(“),
     * forward slash(/), backward slash(\), @, or a space.</p>
     */
    inline bool AdminPasswordHasBeenSet() const { return m_adminPasswordHasBeenSet; }

    /**
     * <p>The password for the member's initial administrative user. The
     * <code>AdminPassword</code> must be at least eight characters long and no more
     * than 32 characters. It must contain at least one uppercase letter, one lowercase
     * letter, and one digit. It cannot have a single quote(‘), double quote(“),
     * forward slash(/), backward slash(\), @, or a space.</p>
     */
    inline void SetAdminPassword(const Aws::String& value) { m_adminPasswordHasBeenSet = true; m_adminPassword = value; }

    /**
     * <p>The password for the member's initial administrative user. The
     * <code>AdminPassword</code> must be at least eight characters long and no more
     * than 32 characters. It must contain at least one uppercase letter, one lowercase
     * letter, and one digit. It cannot have a single quote(‘), double quote(“),
     * forward slash(/), backward slash(\), @, or a space.</p>
     */
    inline void SetAdminPassword(Aws::String&& value) { m_adminPasswordHasBeenSet = true; m_adminPassword = std::move(value); }

    /**
     * <p>The password for the member's initial administrative user. The
     * <code>AdminPassword</code> must be at least eight characters long and no more
     * than 32 characters. It must contain at least one uppercase letter, one lowercase
     * letter, and one digit. It cannot have a single quote(‘), double quote(“),
     * forward slash(/), backward slash(\), @, or a space.</p>
     */
    inline void SetAdminPassword(const char* value) { m_adminPasswordHasBeenSet = true; m_adminPassword.assign(value); }

    /**
     * <p>The password for the member's initial administrative user. The
     * <code>AdminPassword</code> must be at least eight characters long and no more
     * than 32 characters. It must contain at least one uppercase letter, one lowercase
     * letter, and one digit. It cannot have a single quote(‘), double quote(“),
     * forward slash(/), backward slash(\), @, or a space.</p>
     */
    inline MemberFabricConfiguration& WithAdminPassword(const Aws::String& value) { SetAdminPassword(value); return *this;}

    /**
     * <p>The password for the member's initial administrative user. The
     * <code>AdminPassword</code> must be at least eight characters long and no more
     * than 32 characters. It must contain at least one uppercase letter, one lowercase
     * letter, and one digit. It cannot have a single quote(‘), double quote(“),
     * forward slash(/), backward slash(\), @, or a space.</p>
     */
    inline MemberFabricConfiguration& WithAdminPassword(Aws::String&& value) { SetAdminPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the member's initial administrative user. The
     * <code>AdminPassword</code> must be at least eight characters long and no more
     * than 32 characters. It must contain at least one uppercase letter, one lowercase
     * letter, and one digit. It cannot have a single quote(‘), double quote(“),
     * forward slash(/), backward slash(\), @, or a space.</p>
     */
    inline MemberFabricConfiguration& WithAdminPassword(const char* value) { SetAdminPassword(value); return *this;}

  private:

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet;

    Aws::String m_adminPassword;
    bool m_adminPasswordHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
