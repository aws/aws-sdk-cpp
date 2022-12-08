/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A <code>SignupResponse</code> object that contains a summary of a newly
   * created account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SignupResponse">AWS
   * API Reference</a></p>
   */
  class SignupResponse
  {
  public:
    AWS_QUICKSIGHT_API SignupResponse();
    AWS_QUICKSIGHT_API SignupResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SignupResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean that is <code>TRUE</code> if the Amazon QuickSight uses IAM as an
     * authentication method.</p>
     */
    inline bool GetIAMUser() const{ return m_iAMUser; }

    /**
     * <p>A Boolean that is <code>TRUE</code> if the Amazon QuickSight uses IAM as an
     * authentication method.</p>
     */
    inline bool IAMUserHasBeenSet() const { return m_iAMUserHasBeenSet; }

    /**
     * <p>A Boolean that is <code>TRUE</code> if the Amazon QuickSight uses IAM as an
     * authentication method.</p>
     */
    inline void SetIAMUser(bool value) { m_iAMUserHasBeenSet = true; m_iAMUser = value; }

    /**
     * <p>A Boolean that is <code>TRUE</code> if the Amazon QuickSight uses IAM as an
     * authentication method.</p>
     */
    inline SignupResponse& WithIAMUser(bool value) { SetIAMUser(value); return *this;}


    /**
     * <p>The user login name for your Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetUserLoginName() const{ return m_userLoginName; }

    /**
     * <p>The user login name for your Amazon QuickSight account.</p>
     */
    inline bool UserLoginNameHasBeenSet() const { return m_userLoginNameHasBeenSet; }

    /**
     * <p>The user login name for your Amazon QuickSight account.</p>
     */
    inline void SetUserLoginName(const Aws::String& value) { m_userLoginNameHasBeenSet = true; m_userLoginName = value; }

    /**
     * <p>The user login name for your Amazon QuickSight account.</p>
     */
    inline void SetUserLoginName(Aws::String&& value) { m_userLoginNameHasBeenSet = true; m_userLoginName = std::move(value); }

    /**
     * <p>The user login name for your Amazon QuickSight account.</p>
     */
    inline void SetUserLoginName(const char* value) { m_userLoginNameHasBeenSet = true; m_userLoginName.assign(value); }

    /**
     * <p>The user login name for your Amazon QuickSight account.</p>
     */
    inline SignupResponse& WithUserLoginName(const Aws::String& value) { SetUserLoginName(value); return *this;}

    /**
     * <p>The user login name for your Amazon QuickSight account.</p>
     */
    inline SignupResponse& WithUserLoginName(Aws::String&& value) { SetUserLoginName(std::move(value)); return *this;}

    /**
     * <p>The user login name for your Amazon QuickSight account.</p>
     */
    inline SignupResponse& WithUserLoginName(const char* value) { SetUserLoginName(value); return *this;}


    /**
     * <p>The name of your Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p>The name of your Amazon QuickSight account.</p>
     */
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }

    /**
     * <p>The name of your Amazon QuickSight account.</p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p>The name of your Amazon QuickSight account.</p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }

    /**
     * <p>The name of your Amazon QuickSight account.</p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p>The name of your Amazon QuickSight account.</p>
     */
    inline SignupResponse& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p>The name of your Amazon QuickSight account.</p>
     */
    inline SignupResponse& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}

    /**
     * <p>The name of your Amazon QuickSight account.</p>
     */
    inline SignupResponse& WithAccountName(const char* value) { SetAccountName(value); return *this;}


    /**
     * <p>The type of Active Directory that is being used to authenticate the Amazon
     * QuickSight account. Valid values are <code>SIMPLE_AD</code>,
     * <code>AD_CONNECTOR</code>, and <code>MICROSOFT_AD</code>.</p>
     */
    inline const Aws::String& GetDirectoryType() const{ return m_directoryType; }

    /**
     * <p>The type of Active Directory that is being used to authenticate the Amazon
     * QuickSight account. Valid values are <code>SIMPLE_AD</code>,
     * <code>AD_CONNECTOR</code>, and <code>MICROSOFT_AD</code>.</p>
     */
    inline bool DirectoryTypeHasBeenSet() const { return m_directoryTypeHasBeenSet; }

    /**
     * <p>The type of Active Directory that is being used to authenticate the Amazon
     * QuickSight account. Valid values are <code>SIMPLE_AD</code>,
     * <code>AD_CONNECTOR</code>, and <code>MICROSOFT_AD</code>.</p>
     */
    inline void SetDirectoryType(const Aws::String& value) { m_directoryTypeHasBeenSet = true; m_directoryType = value; }

    /**
     * <p>The type of Active Directory that is being used to authenticate the Amazon
     * QuickSight account. Valid values are <code>SIMPLE_AD</code>,
     * <code>AD_CONNECTOR</code>, and <code>MICROSOFT_AD</code>.</p>
     */
    inline void SetDirectoryType(Aws::String&& value) { m_directoryTypeHasBeenSet = true; m_directoryType = std::move(value); }

    /**
     * <p>The type of Active Directory that is being used to authenticate the Amazon
     * QuickSight account. Valid values are <code>SIMPLE_AD</code>,
     * <code>AD_CONNECTOR</code>, and <code>MICROSOFT_AD</code>.</p>
     */
    inline void SetDirectoryType(const char* value) { m_directoryTypeHasBeenSet = true; m_directoryType.assign(value); }

    /**
     * <p>The type of Active Directory that is being used to authenticate the Amazon
     * QuickSight account. Valid values are <code>SIMPLE_AD</code>,
     * <code>AD_CONNECTOR</code>, and <code>MICROSOFT_AD</code>.</p>
     */
    inline SignupResponse& WithDirectoryType(const Aws::String& value) { SetDirectoryType(value); return *this;}

    /**
     * <p>The type of Active Directory that is being used to authenticate the Amazon
     * QuickSight account. Valid values are <code>SIMPLE_AD</code>,
     * <code>AD_CONNECTOR</code>, and <code>MICROSOFT_AD</code>.</p>
     */
    inline SignupResponse& WithDirectoryType(Aws::String&& value) { SetDirectoryType(std::move(value)); return *this;}

    /**
     * <p>The type of Active Directory that is being used to authenticate the Amazon
     * QuickSight account. Valid values are <code>SIMPLE_AD</code>,
     * <code>AD_CONNECTOR</code>, and <code>MICROSOFT_AD</code>.</p>
     */
    inline SignupResponse& WithDirectoryType(const char* value) { SetDirectoryType(value); return *this;}

  private:

    bool m_iAMUser;
    bool m_iAMUserHasBeenSet = false;

    Aws::String m_userLoginName;
    bool m_userLoginNameHasBeenSet = false;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Aws::String m_directoryType;
    bool m_directoryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
