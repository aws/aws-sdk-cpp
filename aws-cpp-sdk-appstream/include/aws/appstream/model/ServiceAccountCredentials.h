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
   * <p>Describes the credentials for the service account used by the fleet or image
   * builder to connect to the directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ServiceAccountCredentials">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API ServiceAccountCredentials
  {
  public:
    ServiceAccountCredentials();
    ServiceAccountCredentials(Aws::Utils::Json::JsonView jsonValue);
    ServiceAccountCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user name of the account. This account must have the following
     * privileges: create computer objects, join computers to the domain, and
     * change/reset the password on descendant computer objects for the organizational
     * units specified.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p>The user name of the account. This account must have the following
     * privileges: create computer objects, join computers to the domain, and
     * change/reset the password on descendant computer objects for the organizational
     * units specified.</p>
     */
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }

    /**
     * <p>The user name of the account. This account must have the following
     * privileges: create computer objects, join computers to the domain, and
     * change/reset the password on descendant computer objects for the organizational
     * units specified.</p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p>The user name of the account. This account must have the following
     * privileges: create computer objects, join computers to the domain, and
     * change/reset the password on descendant computer objects for the organizational
     * units specified.</p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }

    /**
     * <p>The user name of the account. This account must have the following
     * privileges: create computer objects, join computers to the domain, and
     * change/reset the password on descendant computer objects for the organizational
     * units specified.</p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p>The user name of the account. This account must have the following
     * privileges: create computer objects, join computers to the domain, and
     * change/reset the password on descendant computer objects for the organizational
     * units specified.</p>
     */
    inline ServiceAccountCredentials& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p>The user name of the account. This account must have the following
     * privileges: create computer objects, join computers to the domain, and
     * change/reset the password on descendant computer objects for the organizational
     * units specified.</p>
     */
    inline ServiceAccountCredentials& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}

    /**
     * <p>The user name of the account. This account must have the following
     * privileges: create computer objects, join computers to the domain, and
     * change/reset the password on descendant computer objects for the organizational
     * units specified.</p>
     */
    inline ServiceAccountCredentials& WithAccountName(const char* value) { SetAccountName(value); return *this;}


    /**
     * <p>The password for the account.</p>
     */
    inline const Aws::String& GetAccountPassword() const{ return m_accountPassword; }

    /**
     * <p>The password for the account.</p>
     */
    inline bool AccountPasswordHasBeenSet() const { return m_accountPasswordHasBeenSet; }

    /**
     * <p>The password for the account.</p>
     */
    inline void SetAccountPassword(const Aws::String& value) { m_accountPasswordHasBeenSet = true; m_accountPassword = value; }

    /**
     * <p>The password for the account.</p>
     */
    inline void SetAccountPassword(Aws::String&& value) { m_accountPasswordHasBeenSet = true; m_accountPassword = std::move(value); }

    /**
     * <p>The password for the account.</p>
     */
    inline void SetAccountPassword(const char* value) { m_accountPasswordHasBeenSet = true; m_accountPassword.assign(value); }

    /**
     * <p>The password for the account.</p>
     */
    inline ServiceAccountCredentials& WithAccountPassword(const Aws::String& value) { SetAccountPassword(value); return *this;}

    /**
     * <p>The password for the account.</p>
     */
    inline ServiceAccountCredentials& WithAccountPassword(Aws::String&& value) { SetAccountPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the account.</p>
     */
    inline ServiceAccountCredentials& WithAccountPassword(const char* value) { SetAccountPassword(value); return *this;}

  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet;

    Aws::String m_accountPassword;
    bool m_accountPasswordHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
