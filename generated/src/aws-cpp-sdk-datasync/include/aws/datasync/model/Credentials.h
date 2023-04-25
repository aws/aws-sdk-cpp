/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The credentials that provide DataSync Discovery read access to your
   * on-premises storage system's management interface.</p> <p>DataSync Discovery
   * stores these credentials in <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">Secrets
   * Manager</a>. For more information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-configure-storage.html">Accessing
   * your on-premises storage system</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Credentials">AWS
   * API Reference</a></p>
   */
  class Credentials
  {
  public:
    AWS_DATASYNC_API Credentials();
    AWS_DATASYNC_API Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the user name for your storage system's management interface.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>Specifies the user name for your storage system's management interface.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>Specifies the user name for your storage system's management interface.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>Specifies the user name for your storage system's management interface.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>Specifies the user name for your storage system's management interface.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>Specifies the user name for your storage system's management interface.</p>
     */
    inline Credentials& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>Specifies the user name for your storage system's management interface.</p>
     */
    inline Credentials& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>Specifies the user name for your storage system's management interface.</p>
     */
    inline Credentials& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>Specifies the password for your storage system's management interface.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>Specifies the password for your storage system's management interface.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>Specifies the password for your storage system's management interface.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>Specifies the password for your storage system's management interface.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>Specifies the password for your storage system's management interface.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>Specifies the password for your storage system's management interface.</p>
     */
    inline Credentials& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Specifies the password for your storage system's management interface.</p>
     */
    inline Credentials& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Specifies the password for your storage system's management interface.</p>
     */
    inline Credentials& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
