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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabasePasswordVersion.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API GetRelationalDatabaseMasterUserPasswordRequest : public LightsailRequest
  {
  public:
    GetRelationalDatabaseMasterUserPasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRelationalDatabaseMasterUserPassword"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your database for which to get the master user password.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of your database for which to get the master user password.</p>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of your database for which to get the master user password.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of your database for which to get the master user password.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of your database for which to get the master user password.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of your database for which to get the master user password.</p>
     */
    inline GetRelationalDatabaseMasterUserPasswordRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of your database for which to get the master user password.</p>
     */
    inline GetRelationalDatabaseMasterUserPasswordRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of your database for which to get the master user password.</p>
     */
    inline GetRelationalDatabaseMasterUserPasswordRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The password version to return.</p> <p>Specifying <code>CURRENT</code> or
     * <code>PREVIOUS</code> returns the current or previous passwords respectively.
     * Specifying <code>PENDING</code> returns the newest version of the password that
     * will rotate to <code>CURRENT</code>. After the <code>PENDING</code> password
     * rotates to <code>CURRENT</code>, the <code>PENDING</code> password is no longer
     * available.</p> <p>Default: <code>CURRENT</code> </p>
     */
    inline const RelationalDatabasePasswordVersion& GetPasswordVersion() const{ return m_passwordVersion; }

    /**
     * <p>The password version to return.</p> <p>Specifying <code>CURRENT</code> or
     * <code>PREVIOUS</code> returns the current or previous passwords respectively.
     * Specifying <code>PENDING</code> returns the newest version of the password that
     * will rotate to <code>CURRENT</code>. After the <code>PENDING</code> password
     * rotates to <code>CURRENT</code>, the <code>PENDING</code> password is no longer
     * available.</p> <p>Default: <code>CURRENT</code> </p>
     */
    inline bool PasswordVersionHasBeenSet() const { return m_passwordVersionHasBeenSet; }

    /**
     * <p>The password version to return.</p> <p>Specifying <code>CURRENT</code> or
     * <code>PREVIOUS</code> returns the current or previous passwords respectively.
     * Specifying <code>PENDING</code> returns the newest version of the password that
     * will rotate to <code>CURRENT</code>. After the <code>PENDING</code> password
     * rotates to <code>CURRENT</code>, the <code>PENDING</code> password is no longer
     * available.</p> <p>Default: <code>CURRENT</code> </p>
     */
    inline void SetPasswordVersion(const RelationalDatabasePasswordVersion& value) { m_passwordVersionHasBeenSet = true; m_passwordVersion = value; }

    /**
     * <p>The password version to return.</p> <p>Specifying <code>CURRENT</code> or
     * <code>PREVIOUS</code> returns the current or previous passwords respectively.
     * Specifying <code>PENDING</code> returns the newest version of the password that
     * will rotate to <code>CURRENT</code>. After the <code>PENDING</code> password
     * rotates to <code>CURRENT</code>, the <code>PENDING</code> password is no longer
     * available.</p> <p>Default: <code>CURRENT</code> </p>
     */
    inline void SetPasswordVersion(RelationalDatabasePasswordVersion&& value) { m_passwordVersionHasBeenSet = true; m_passwordVersion = std::move(value); }

    /**
     * <p>The password version to return.</p> <p>Specifying <code>CURRENT</code> or
     * <code>PREVIOUS</code> returns the current or previous passwords respectively.
     * Specifying <code>PENDING</code> returns the newest version of the password that
     * will rotate to <code>CURRENT</code>. After the <code>PENDING</code> password
     * rotates to <code>CURRENT</code>, the <code>PENDING</code> password is no longer
     * available.</p> <p>Default: <code>CURRENT</code> </p>
     */
    inline GetRelationalDatabaseMasterUserPasswordRequest& WithPasswordVersion(const RelationalDatabasePasswordVersion& value) { SetPasswordVersion(value); return *this;}

    /**
     * <p>The password version to return.</p> <p>Specifying <code>CURRENT</code> or
     * <code>PREVIOUS</code> returns the current or previous passwords respectively.
     * Specifying <code>PENDING</code> returns the newest version of the password that
     * will rotate to <code>CURRENT</code>. After the <code>PENDING</code> password
     * rotates to <code>CURRENT</code>, the <code>PENDING</code> password is no longer
     * available.</p> <p>Default: <code>CURRENT</code> </p>
     */
    inline GetRelationalDatabaseMasterUserPasswordRequest& WithPasswordVersion(RelationalDatabasePasswordVersion&& value) { SetPasswordVersion(std::move(value)); return *this;}

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet;

    RelationalDatabasePasswordVersion m_passwordVersion;
    bool m_passwordVersionHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
