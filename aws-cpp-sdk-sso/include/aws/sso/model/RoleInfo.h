/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
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
namespace SSO
{
namespace Model
{

  /**
   * <p>Provides information about the role that is assigned to the
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/RoleInfo">AWS API
   * Reference</a></p>
   */
  class RoleInfo
  {
  public:
    AWS_SSO_API RoleInfo();
    AWS_SSO_API RoleInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSO_API RoleInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline RoleInfo& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline RoleInfo& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline RoleInfo& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>The identifier of the AWS account assigned to the user.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The identifier of the AWS account assigned to the user.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The identifier of the AWS account assigned to the user.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The identifier of the AWS account assigned to the user.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The identifier of the AWS account assigned to the user.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The identifier of the AWS account assigned to the user.</p>
     */
    inline RoleInfo& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The identifier of the AWS account assigned to the user.</p>
     */
    inline RoleInfo& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the AWS account assigned to the user.</p>
     */
    inline RoleInfo& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
