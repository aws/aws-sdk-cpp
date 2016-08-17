/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API AddSourceIdentifierToSubscriptionRequest : public RDSRequest
  {
  public:
    AddSourceIdentifierToSubscriptionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the RDS event notification subscription you want to add a source
     * identifier to.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The name of the RDS event notification subscription you want to add a source
     * identifier to.</p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the RDS event notification subscription you want to add a source
     * identifier to.</p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the RDS event notification subscription you want to add a source
     * identifier to.</p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The name of the RDS event notification subscription you want to add a source
     * identifier to.</p>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the RDS event notification subscription you want to add a source
     * identifier to.</p>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the RDS event notification subscription you want to add a source
     * identifier to.</p>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The identifier of the event source to be added. An identifier must begin with
     * a letter and must contain only ASCII letters, digits, and hyphens; it cannot end
     * with a hyphen or contain two consecutive hyphens.</p> <p>Constraints:</p> <ul>
     * <li> <p>If the source type is a DB instance, then a
     * <code>DBInstanceIdentifier</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB security group, a <code>DBSecurityGroupName</code> must be
     * supplied.</p> </li> <li> <p>If the source type is a DB parameter group, a
     * <code>DBParameterGroupName</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB snapshot, a <code>DBSnapshotIdentifier</code> must be
     * supplied.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p>The identifier of the event source to be added. An identifier must begin with
     * a letter and must contain only ASCII letters, digits, and hyphens; it cannot end
     * with a hyphen or contain two consecutive hyphens.</p> <p>Constraints:</p> <ul>
     * <li> <p>If the source type is a DB instance, then a
     * <code>DBInstanceIdentifier</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB security group, a <code>DBSecurityGroupName</code> must be
     * supplied.</p> </li> <li> <p>If the source type is a DB parameter group, a
     * <code>DBParameterGroupName</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB snapshot, a <code>DBSnapshotIdentifier</code> must be
     * supplied.</p> </li> </ul>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p>The identifier of the event source to be added. An identifier must begin with
     * a letter and must contain only ASCII letters, digits, and hyphens; it cannot end
     * with a hyphen or contain two consecutive hyphens.</p> <p>Constraints:</p> <ul>
     * <li> <p>If the source type is a DB instance, then a
     * <code>DBInstanceIdentifier</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB security group, a <code>DBSecurityGroupName</code> must be
     * supplied.</p> </li> <li> <p>If the source type is a DB parameter group, a
     * <code>DBParameterGroupName</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB snapshot, a <code>DBSnapshotIdentifier</code> must be
     * supplied.</p> </li> </ul>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p>The identifier of the event source to be added. An identifier must begin with
     * a letter and must contain only ASCII letters, digits, and hyphens; it cannot end
     * with a hyphen or contain two consecutive hyphens.</p> <p>Constraints:</p> <ul>
     * <li> <p>If the source type is a DB instance, then a
     * <code>DBInstanceIdentifier</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB security group, a <code>DBSecurityGroupName</code> must be
     * supplied.</p> </li> <li> <p>If the source type is a DB parameter group, a
     * <code>DBParameterGroupName</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB snapshot, a <code>DBSnapshotIdentifier</code> must be
     * supplied.</p> </li> </ul>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p>The identifier of the event source to be added. An identifier must begin with
     * a letter and must contain only ASCII letters, digits, and hyphens; it cannot end
     * with a hyphen or contain two consecutive hyphens.</p> <p>Constraints:</p> <ul>
     * <li> <p>If the source type is a DB instance, then a
     * <code>DBInstanceIdentifier</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB security group, a <code>DBSecurityGroupName</code> must be
     * supplied.</p> </li> <li> <p>If the source type is a DB parameter group, a
     * <code>DBParameterGroupName</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB snapshot, a <code>DBSnapshotIdentifier</code> must be
     * supplied.</p> </li> </ul>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the event source to be added. An identifier must begin with
     * a letter and must contain only ASCII letters, digits, and hyphens; it cannot end
     * with a hyphen or contain two consecutive hyphens.</p> <p>Constraints:</p> <ul>
     * <li> <p>If the source type is a DB instance, then a
     * <code>DBInstanceIdentifier</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB security group, a <code>DBSecurityGroupName</code> must be
     * supplied.</p> </li> <li> <p>If the source type is a DB parameter group, a
     * <code>DBParameterGroupName</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB snapshot, a <code>DBSnapshotIdentifier</code> must be
     * supplied.</p> </li> </ul>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the event source to be added. An identifier must begin with
     * a letter and must contain only ASCII letters, digits, and hyphens; it cannot end
     * with a hyphen or contain two consecutive hyphens.</p> <p>Constraints:</p> <ul>
     * <li> <p>If the source type is a DB instance, then a
     * <code>DBInstanceIdentifier</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB security group, a <code>DBSecurityGroupName</code> must be
     * supplied.</p> </li> <li> <p>If the source type is a DB parameter group, a
     * <code>DBParameterGroupName</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB snapshot, a <code>DBSnapshotIdentifier</code> must be
     * supplied.</p> </li> </ul>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}

  private:
    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet;
    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
