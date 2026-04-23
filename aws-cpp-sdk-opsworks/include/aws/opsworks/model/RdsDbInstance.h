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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an Amazon RDS instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RdsDbInstance">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API RdsDbInstance
  {
  public:
    RdsDbInstance();
    RdsDbInstance(Aws::Utils::Json::JsonView jsonValue);
    RdsDbInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance's ARN.</p>
     */
    inline const Aws::String& GetRdsDbInstanceArn() const{ return m_rdsDbInstanceArn; }

    /**
     * <p>The instance's ARN.</p>
     */
    inline bool RdsDbInstanceArnHasBeenSet() const { return m_rdsDbInstanceArnHasBeenSet; }

    /**
     * <p>The instance's ARN.</p>
     */
    inline void SetRdsDbInstanceArn(const Aws::String& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = value; }

    /**
     * <p>The instance's ARN.</p>
     */
    inline void SetRdsDbInstanceArn(Aws::String&& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = std::move(value); }

    /**
     * <p>The instance's ARN.</p>
     */
    inline void SetRdsDbInstanceArn(const char* value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn.assign(value); }

    /**
     * <p>The instance's ARN.</p>
     */
    inline RdsDbInstance& WithRdsDbInstanceArn(const Aws::String& value) { SetRdsDbInstanceArn(value); return *this;}

    /**
     * <p>The instance's ARN.</p>
     */
    inline RdsDbInstance& WithRdsDbInstanceArn(Aws::String&& value) { SetRdsDbInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The instance's ARN.</p>
     */
    inline RdsDbInstance& WithRdsDbInstanceArn(const char* value) { SetRdsDbInstanceArn(value); return *this;}


    /**
     * <p>The DB instance identifier.</p>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const{ return m_dbInstanceIdentifier; }

    /**
     * <p>The DB instance identifier.</p>
     */
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }

    /**
     * <p>The DB instance identifier.</p>
     */
    inline void SetDbInstanceIdentifier(const Aws::String& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier.</p>
     */
    inline void SetDbInstanceIdentifier(Aws::String&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier.</p>
     */
    inline void SetDbInstanceIdentifier(const char* value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier.</p>
     */
    inline RdsDbInstance& WithDbInstanceIdentifier(const Aws::String& value) { SetDbInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier.</p>
     */
    inline RdsDbInstance& WithDbInstanceIdentifier(Aws::String&& value) { SetDbInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier.</p>
     */
    inline RdsDbInstance& WithDbInstanceIdentifier(const char* value) { SetDbInstanceIdentifier(value); return *this;}


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
    inline RdsDbInstance& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The master user name.</p>
     */
    inline RdsDbInstance& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The master user name.</p>
     */
    inline RdsDbInstance& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>AWS OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the
     * actual value.</p>
     */
    inline const Aws::String& GetDbPassword() const{ return m_dbPassword; }

    /**
     * <p>AWS OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the
     * actual value.</p>
     */
    inline bool DbPasswordHasBeenSet() const { return m_dbPasswordHasBeenSet; }

    /**
     * <p>AWS OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the
     * actual value.</p>
     */
    inline void SetDbPassword(const Aws::String& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = value; }

    /**
     * <p>AWS OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the
     * actual value.</p>
     */
    inline void SetDbPassword(Aws::String&& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = std::move(value); }

    /**
     * <p>AWS OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the
     * actual value.</p>
     */
    inline void SetDbPassword(const char* value) { m_dbPasswordHasBeenSet = true; m_dbPassword.assign(value); }

    /**
     * <p>AWS OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the
     * actual value.</p>
     */
    inline RdsDbInstance& WithDbPassword(const Aws::String& value) { SetDbPassword(value); return *this;}

    /**
     * <p>AWS OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the
     * actual value.</p>
     */
    inline RdsDbInstance& WithDbPassword(Aws::String&& value) { SetDbPassword(std::move(value)); return *this;}

    /**
     * <p>AWS OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the
     * actual value.</p>
     */
    inline RdsDbInstance& WithDbPassword(const char* value) { SetDbPassword(value); return *this;}


    /**
     * <p>The instance's AWS region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The instance's AWS region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The instance's AWS region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The instance's AWS region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The instance's AWS region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The instance's AWS region.</p>
     */
    inline RdsDbInstance& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The instance's AWS region.</p>
     */
    inline RdsDbInstance& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The instance's AWS region.</p>
     */
    inline RdsDbInstance& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The instance's address.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The instance's address.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The instance's address.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The instance's address.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The instance's address.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The instance's address.</p>
     */
    inline RdsDbInstance& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The instance's address.</p>
     */
    inline RdsDbInstance& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The instance's address.</p>
     */
    inline RdsDbInstance& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The instance's database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The instance's database engine.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The instance's database engine.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The instance's database engine.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The instance's database engine.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The instance's database engine.</p>
     */
    inline RdsDbInstance& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The instance's database engine.</p>
     */
    inline RdsDbInstance& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The instance's database engine.</p>
     */
    inline RdsDbInstance& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The ID of the stack with which the instance is registered.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the stack with which the instance is registered.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The ID of the stack with which the instance is registered.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the stack with which the instance is registered.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The ID of the stack with which the instance is registered.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The ID of the stack with which the instance is registered.</p>
     */
    inline RdsDbInstance& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the stack with which the instance is registered.</p>
     */
    inline RdsDbInstance& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack with which the instance is registered.</p>
     */
    inline RdsDbInstance& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>Set to <code>true</code> if AWS OpsWorks Stacks is unable to discover the
     * Amazon RDS instance. AWS OpsWorks Stacks attempts to discover the instance only
     * once. If this value is set to <code>true</code>, you must deregister the
     * instance, and then register it again.</p>
     */
    inline bool GetMissingOnRds() const{ return m_missingOnRds; }

    /**
     * <p>Set to <code>true</code> if AWS OpsWorks Stacks is unable to discover the
     * Amazon RDS instance. AWS OpsWorks Stacks attempts to discover the instance only
     * once. If this value is set to <code>true</code>, you must deregister the
     * instance, and then register it again.</p>
     */
    inline bool MissingOnRdsHasBeenSet() const { return m_missingOnRdsHasBeenSet; }

    /**
     * <p>Set to <code>true</code> if AWS OpsWorks Stacks is unable to discover the
     * Amazon RDS instance. AWS OpsWorks Stacks attempts to discover the instance only
     * once. If this value is set to <code>true</code>, you must deregister the
     * instance, and then register it again.</p>
     */
    inline void SetMissingOnRds(bool value) { m_missingOnRdsHasBeenSet = true; m_missingOnRds = value; }

    /**
     * <p>Set to <code>true</code> if AWS OpsWorks Stacks is unable to discover the
     * Amazon RDS instance. AWS OpsWorks Stacks attempts to discover the instance only
     * once. If this value is set to <code>true</code>, you must deregister the
     * instance, and then register it again.</p>
     */
    inline RdsDbInstance& WithMissingOnRds(bool value) { SetMissingOnRds(value); return *this;}

  private:

    Aws::String m_rdsDbInstanceArn;
    bool m_rdsDbInstanceArnHasBeenSet;

    Aws::String m_dbInstanceIdentifier;
    bool m_dbInstanceIdentifierHasBeenSet;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet;

    Aws::String m_dbPassword;
    bool m_dbPasswordHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_address;
    bool m_addressHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    bool m_missingOnRds;
    bool m_missingOnRdsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
