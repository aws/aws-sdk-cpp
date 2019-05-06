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
  class AWS_OPSWORKS_API UpdateRdsDbInstanceRequest : public OpsWorksRequest
  {
  public:
    UpdateRdsDbInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRdsDbInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateRdsDbInstanceRequest& WithRdsDbInstanceArn(const Aws::String& value) { SetRdsDbInstanceArn(value); return *this;}

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline UpdateRdsDbInstanceRequest& WithRdsDbInstanceArn(Aws::String&& value) { SetRdsDbInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline UpdateRdsDbInstanceRequest& WithRdsDbInstanceArn(const char* value) { SetRdsDbInstanceArn(value); return *this;}


    /**
     * <p>The master user name.</p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>The master user name.</p>
     */
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }

    /**
     * <p>The master user name.</p>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUserHasBeenSet = true; m_dbUser = value; }

    /**
     * <p>The master user name.</p>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::move(value); }

    /**
     * <p>The master user name.</p>
     */
    inline void SetDbUser(const char* value) { m_dbUserHasBeenSet = true; m_dbUser.assign(value); }

    /**
     * <p>The master user name.</p>
     */
    inline UpdateRdsDbInstanceRequest& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The master user name.</p>
     */
    inline UpdateRdsDbInstanceRequest& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The master user name.</p>
     */
    inline UpdateRdsDbInstanceRequest& WithDbUser(const char* value) { SetDbUser(value); return *this;}


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
    inline UpdateRdsDbInstanceRequest& WithDbPassword(const Aws::String& value) { SetDbPassword(value); return *this;}

    /**
     * <p>The database password.</p>
     */
    inline UpdateRdsDbInstanceRequest& WithDbPassword(Aws::String&& value) { SetDbPassword(std::move(value)); return *this;}

    /**
     * <p>The database password.</p>
     */
    inline UpdateRdsDbInstanceRequest& WithDbPassword(const char* value) { SetDbPassword(value); return *this;}

  private:

    Aws::String m_rdsDbInstanceArn;
    bool m_rdsDbInstanceArnHasBeenSet;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet;

    Aws::String m_dbPassword;
    bool m_dbPasswordHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
