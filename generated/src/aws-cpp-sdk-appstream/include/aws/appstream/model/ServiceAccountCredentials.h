﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ServiceAccountCredentials
  {
  public:
    AWS_APPSTREAM_API ServiceAccountCredentials();
    AWS_APPSTREAM_API ServiceAccountCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ServiceAccountCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name of the account. This account must have the following
     * privileges: create computer objects, join computers to the domain, and
     * change/reset the password on descendant computer objects for the organizational
     * units specified.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }
    inline ServiceAccountCredentials& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}
    inline ServiceAccountCredentials& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}
    inline ServiceAccountCredentials& WithAccountName(const char* value) { SetAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the account.</p>
     */
    inline const Aws::String& GetAccountPassword() const{ return m_accountPassword; }
    inline bool AccountPasswordHasBeenSet() const { return m_accountPasswordHasBeenSet; }
    inline void SetAccountPassword(const Aws::String& value) { m_accountPasswordHasBeenSet = true; m_accountPassword = value; }
    inline void SetAccountPassword(Aws::String&& value) { m_accountPasswordHasBeenSet = true; m_accountPassword = std::move(value); }
    inline void SetAccountPassword(const char* value) { m_accountPasswordHasBeenSet = true; m_accountPassword.assign(value); }
    inline ServiceAccountCredentials& WithAccountPassword(const Aws::String& value) { SetAccountPassword(value); return *this;}
    inline ServiceAccountCredentials& WithAccountPassword(Aws::String&& value) { SetAccountPassword(std::move(value)); return *this;}
    inline ServiceAccountCredentials& WithAccountPassword(const char* value) { SetAccountPassword(value); return *this;}
    ///@}
  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Aws::String m_accountPassword;
    bool m_accountPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
