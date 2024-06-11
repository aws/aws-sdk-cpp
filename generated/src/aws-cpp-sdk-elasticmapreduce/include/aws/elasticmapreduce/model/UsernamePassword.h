/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The username and password that you use to connect to cluster
   * endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/UsernamePassword">AWS
   * API Reference</a></p>
   */
  class UsernamePassword
  {
  public:
    AWS_EMR_API UsernamePassword();
    AWS_EMR_API UsernamePassword(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API UsernamePassword& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The username associated with the temporary credentials that you use to
     * connect to cluster endpoints.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline UsernamePassword& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline UsernamePassword& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline UsernamePassword& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password associated with the temporary credentials that you use to
     * connect to cluster endpoints.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline UsernamePassword& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline UsernamePassword& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline UsernamePassword& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
