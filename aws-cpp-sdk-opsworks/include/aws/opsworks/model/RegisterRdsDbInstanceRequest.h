/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class RegisterRdsDbInstanceRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API RegisterRdsDbInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterRdsDbInstance"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline const Aws::String& GetRdsDbInstanceArn() const{ return m_rdsDbInstanceArn; }

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline bool RdsDbInstanceArnHasBeenSet() const { return m_rdsDbInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline void SetRdsDbInstanceArn(const Aws::String& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = value; }

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline void SetRdsDbInstanceArn(Aws::String&& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = std::move(value); }

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline void SetRdsDbInstanceArn(const char* value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn.assign(value); }

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithRdsDbInstanceArn(const Aws::String& value) { SetRdsDbInstanceArn(value); return *this;}

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithRdsDbInstanceArn(Aws::String&& value) { SetRdsDbInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithRdsDbInstanceArn(const char* value) { SetRdsDbInstanceArn(value); return *this;}


    /**
     * <p>The database's master user name.</p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>The database's master user name.</p>
     */
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }

    /**
     * <p>The database's master user name.</p>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUserHasBeenSet = true; m_dbUser = value; }

    /**
     * <p>The database's master user name.</p>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::move(value); }

    /**
     * <p>The database's master user name.</p>
     */
    inline void SetDbUser(const char* value) { m_dbUserHasBeenSet = true; m_dbUser.assign(value); }

    /**
     * <p>The database's master user name.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The database's master user name.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The database's master user name.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>The database password.</p>
     */
    inline const Aws::String& GetDbPassword() const{ return m_dbPassword; }

    /**
     * <p>The database password.</p>
     */
    inline bool DbPasswordHasBeenSet() const { return m_dbPasswordHasBeenSet; }

    /**
     * <p>The database password.</p>
     */
    inline void SetDbPassword(const Aws::String& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = value; }

    /**
     * <p>The database password.</p>
     */
    inline void SetDbPassword(Aws::String&& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = std::move(value); }

    /**
     * <p>The database password.</p>
     */
    inline void SetDbPassword(const char* value) { m_dbPasswordHasBeenSet = true; m_dbPassword.assign(value); }

    /**
     * <p>The database password.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithDbPassword(const Aws::String& value) { SetDbPassword(value); return *this;}

    /**
     * <p>The database password.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithDbPassword(Aws::String&& value) { SetDbPassword(std::move(value)); return *this;}

    /**
     * <p>The database password.</p>
     */
    inline RegisterRdsDbInstanceRequest& WithDbPassword(const char* value) { SetDbPassword(value); return *this;}

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_rdsDbInstanceArn;
    bool m_rdsDbInstanceArnHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_dbPassword;
    bool m_dbPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
